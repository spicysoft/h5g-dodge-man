using Unity.Entities;
using Unity.Tiny.Core;
using Unity.Tiny.Core2D;

namespace dodgeman {

    public class WallMovingSystem : ComponentSystem
    {
        int point = 0;
        bool difficultMode = false;
        bool moveRight = false;
        bool moveLeft = false;

        bool leftWallSet = false;
        bool rightWallSet = false;

        float speed = 0.05f;
        protected override void OnUpdate()
        {
            var tinyEnv = World.TinyEnvironment();
            var config = World.TinyEnvironment().GetConfigData<GameConfig>();

            if (!config.GameStart)
            {
                difficultMode = false;
                moveRight = false;
                moveLeft = false;
                speed = 0.05f;
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
                            position += wall.Direction * World.TinyEnvironment().frameDeltaTime * speed;
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
                            position += wall.Direction * World.TinyEnvironment().frameDeltaTime * speed;
                            translation.Value = position;
                        }
                        else if (position.x <= wall.Limit)
                        {
                                wall.Limit = 3.5f;
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
                                position += wall.Direction * World.TinyEnvironment().frameDeltaTime * speed;
                                translation.Value = position;
                            }
                            else if (position.x >= wall.Limit)
                            {
                                wall.Limit = -3.5f;
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
                                position += wall.Direction * World.TinyEnvironment().frameDeltaTime * speed;
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
                                position += wall.Direction * World.TinyEnvironment().frameDeltaTime * speed;
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
                                position += wall.Direction * World.TinyEnvironment().frameDeltaTime * speed;
                                translation.Value = position;
                            }
                            else if (position.x <= wall.Limit)
                            {
                                wall.Limit = 3.5f;
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
                    if (point < config.Score && speed < 1.5f)                    {
                        point = config.Score;
                        speed += 0.01f;
                    }
                    EntityManager.SetComponentData(walls[i].Reference, translation);
                    EntityManager.SetComponentData(walls[i].Reference, wall);
                }
            });
        }
    }

}


