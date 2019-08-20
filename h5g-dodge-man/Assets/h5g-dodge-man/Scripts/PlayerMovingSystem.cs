using Unity.Entities;
using Unity.Tiny.Core;
using Unity.Tiny.Core2D;
using Unity.Tiny.UIControls;

namespace dodgeman
{
    public class PlayerMovingSystem : ComponentSystem
    {
        protected override void OnUpdate()
        {
            Entities.ForEach((Entity _entity, ref Player player, ref Translation translation) =>
            {
                var button = false;
                Entities.WithAll<Button>().ForEach((Entity entity, ref PointerInteraction pointerInteraction) =>
                {
                    button = pointerInteraction.clicked;

                });
                if (button)
                {
                    if(player.Direction.x == -1)
                    {
                        player.Direction.x = 1;
                    }
                    else if (player.Direction.x == 1)
                    {
                        player.Direction.x = -1;
                    }
                    else
                    {
                        player.Direction.x = 1;
                    }

                    EntityManager.SetComponentData(_entity, player);
                }

                var position = translation.Value;
                position += player.Direction * World.TinyEnvironment().frameDeltaTime * player.Speed;
                translation.Value = position;

            });
        }

    }
}


