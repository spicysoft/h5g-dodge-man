using Unity.Entities;
using Unity.Tiny.Core;
using Unity.Tiny.Core2D;

namespace dodgeman {

    public class WallMovingSystem : ComponentSystem
    {
        protected override void OnUpdate()
        {
            var tinyEnv = World.TinyEnvironment();
            var config = World.TinyEnvironment().GetConfigData<GameConfig>();

            if (!config.GameStart)
                return;
            Entities.ForEach((DynamicBuffer<WallsManager> walls) => {
                for (int i = 0; i < walls.Length; i++)
                {
                    var wall = EntityManager.GetComponentData<Wall>(walls[i].Reference);
                    var translation = EntityManager.GetComponentData<Translation>(walls[i].Reference);




                    var position = translation.Value;

                    if(i == 0)
                    {
                        if(position.x < wall.Limit)
                        {
                            position += wall.Direction * World.TinyEnvironment().frameDeltaTime * wall.Speed;
                            translation.Value = position;
                        }
                        else if(position.x >= wall.Limit)
                        {
                            translation.Value = wall.Limit;
                        }
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
                            translation.Value = wall.Limit;
                        }
                        config.RandomLimt = position.x;
                        tinyEnv.SetConfigData(config);
                    }






                    EntityManager.SetComponentData(walls[i].Reference, translation);
                    EntityManager.SetComponentData(walls[i].Reference, wall);

                }


            });
        }
    }

}


