using Unity.Entities;
using Unity.Tiny.Core;
using Unity.Tiny.Core2D;
using Unity.Mathematics;

namespace dodgeman
{
    public class ObjectsMovingSystem : ComponentSystem
    {
        private Random _random;

        protected override void OnCreate()
        {
            _random = new Random();
            _random.InitState();
        }

        protected override void OnUpdate()
        {
            var tinyEnv = World.TinyEnvironment();
            var config = World.TinyEnvironment().GetConfigData<GameConfig>();
            if (!config.GameStart)
                return;
            Entities.ForEach((DynamicBuffer<ObjectsManager> objects) =>{
                for (int i = 0; i < objects.Length; i++)
                {
                    var _object = EntityManager.GetComponentData<Object>(objects[i].Reference);
                    var translation = EntityManager.GetComponentData<Translation>(objects[i].Reference);



                    var position = translation.Value;
                    position += _object.Direction * World.TinyEnvironment().frameDeltaTime * _object.Speed;
                    translation.Value = position;



                    if(translation.Value.y <= -6)
                    {
                        translation.Value = _random.NextFloat3(new float3(x: config.RandomMin + 0.5f, y: 6, z: 0), new float3(x: config.RandomMax - 0.5f, y: 6, z: 0));
                        EntityManager.SetComponentData(objects[i].Reference, translation);
                        config.Score++;
                    }
                    tinyEnv.SetConfigData(config);
                    EntityManager.SetComponentData(objects[i].Reference, translation);
                    EntityManager.SetComponentData(objects[i].Reference, _object);

                }


            });
        }
    }
}

