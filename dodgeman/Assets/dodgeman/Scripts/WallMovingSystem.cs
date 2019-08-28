using Unity.Entities;
using Unity.Tiny.Core;
using Unity.Tiny.Core2D;

namespace dodgeman {

    public class WallMovingSystem : ComponentSystem
    {
        bool difficultMode = false;
        bool moveRight = false;
        bool moveLeft = false;

        bool leftWallSet = false;
        bool rightWallSet = false;
        protected override void OnUpdate()
        {
            var tinyEnv = World.TinyEnvironment();
            var config = World.TinyEnvironment().GetConfigData<GameConfig>();

            if (!config.GameStart)
            {
                difficultMode = false;
                moveRight = false;
                moveLeft = false;
                return;
            }

            Entities.ForEach((DynamicBuffer<WallsManager> walls) => {
                for (int i = 0; i < walls.Length; i++)
                {
                    var wall = EntityManager.GetComponentData<Wall>(walls[i].Reference);
                    var translation = EntityManager.GetComponentData<Translation>(walls[i].Reference);
                    var position = translation.Value;
                    if (!difficultMode)
                    {
                    if(i == 0)
                    {
                        if(position.x < wall.Limit)
                        {
                            position += wall.Direction * World.TinyEnvironment().frameDeltaTime * wall.Speed;
                            translation.Value = position;
                        }
                        else if(position.x >= wall.Limit)
                        {
                                wall.Limit = 0;
                                wall.Direction.x = 1;
                                leftWallSet = true;
                            }
                            config.RandomMin = position.x;
                            tinyEnv.SetConfigData(config);
                        }
                    else if(i == 1)
                    {
                        if (position.x > wall.Limit)
                        {
                            position += wall.Direction * World.TinyEnvironment().frameDeltaTime * wall.Speed;
                            translation.Value = position;
                        }
                        else if (position.x <= wall.Limit)
                        {
                                wall.Limit = 4;
                                wall.Direction.x = 1;
                                rightWallSet = true;

                            }
                            config.RandomMax = position.x;
                            tinyEnv.SetConfigData(config);
                        }
                    }
                    if (difficultMode&& moveRight)
                    {
                        if (i == 0)
                        {
                            if (position.x < wall.Limit)
                            {
                                position += wall.Direction * World.TinyEnvironment().frameDeltaTime * wall.Speed;
                                translation.Value = position;
                            }
                            else if (position.x >= wall.Limit)
                            {
                                wall.Limit = -4;
                                wall.Direction.x = -1;
                                leftWallSet = true;
                            }
                            config.RandomMin = position.x;
                            tinyEnv.SetConfigData(config);
                        }
                        else if (i == 1)
                        {
                            if (position.x < wall.Limit)
                            {
                                position += wall.Direction * World.TinyEnvironment().frameDeltaTime * wall.Speed;
                                translation.Value = position;
                            }
                            else if (position.x >= wall.Limit)
                            {
                                wall.Limit = 0;
                                wall.Direction.x = -1;
                                rightWallSet = true;
                            }
                            config.RandomMax = position.x;
                            tinyEnv.SetConfigData(config);
                        }
                    }
                    if (difficultMode && moveLeft)
                    {
                        if (i == 0)
                        {
                            if (position.x > wall.Limit)
                            {
                                position += wall.Direction * World.TinyEnvironment().frameDeltaTime * wall.Speed;
                                translation.Value = position;
                            }
                            else if (position.x <= wall.Limit)
                            {
                                wall.Limit = 0;
                                wall.Direction.x = 1;
                                leftWallSet = true;
                            }
                            config.RandomMin = position.x;
                            tinyEnv.SetConfigData(config);
                        }
                        else if (i == 1)
                        {
                            if (position.x > wall.Limit)
                            {
                                position += wall.Direction * World.TinyEnvironment().frameDeltaTime * wall.Speed;
                                translation.Value = position;
                            }
                            else if (position.x <= wall.Limit)
                            {
                                wall.Limit = 4;
                                wall.Direction.x = 1;
                                rightWallSet = true;
                            }
                            config.RandomMax = position.x;
                            tinyEnv.SetConfigData(config);
                        }
                    }
                    if (leftWallSet && rightWallSet)
                    {
                        leftWallSet = false;
                        rightWallSet = false;
                        if (!difficultMode)
                        {
                            difficultMode = true;
                            moveRight = true;
                        }
                        else if (moveRight && difficultMode)
                        {
                            moveRight = false;
                            moveLeft = true;
                        }
                        else if (moveLeft && difficultMode)
                        {
                            moveRight = true;
                            moveLeft = false;
                        }
                    }

                    if (!config.GameStart)
                    {
                        difficultMode = false;
                        moveRight = false;
                        moveLeft = false;


                    }
                    EntityManager.SetComponentData(walls[i].Reference, translation);
                    EntityManager.SetComponentData(walls[i].Reference, wall);
                }
            });
        }
    }

}


