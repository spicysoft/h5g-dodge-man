using Unity.Entities;
using Unity.Tiny.Core2D;
using Unity.Mathematics;

namespace dodgeman
{
    public class CollideSystem : ComponentSystem
    {
        protected override void OnUpdate()
        {

            Entities.ForEach((Entity Entity, ref Object _object, ref Translation objectTransform) =>
            {

                float3 objTrans = objectTransform.Value;
                Entities.ForEach((Entity wallEntity, ref Wall wall, ref Translation wallTransform) =>

            {
                float3 wallTrans = wallTransform.Value;
                float3 playerTrans = new float3();

                Entities.ForEach((Entity playerEntity, ref Player player, ref Translation moveTestTransform) =>
               
                {
                    playerTrans = moveTestTransform.Value;

                    if (math.distance(wallTrans, playerTrans) < 0.5|| math.distance(objTrans, playerTrans) < 0.5)
                    {
                        player.Collide = true;
                    }

                });

            });

            });
        }
    }
}

