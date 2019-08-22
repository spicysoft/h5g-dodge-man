using Unity.Entities;
using Unity.Tiny.Core;
using Unity.Tiny.Scenes;

namespace dodgeman
{
    public class PlayerDestroySystem : ComponentSystem
    {
        protected override void OnUpdate()
        {
            bool playerDestroy = false;
            Entities.ForEach((Entity entity, ref Player player) =>
            {
                if (!player.Collide)
                    return;
                playerDestroy = true;
            });
            if (playerDestroy)
            {
                SceneService.UnloadAllSceneInstances(World.TinyEnvironment().GetConfigData<GameConfig>().PlayerScene);
            }
        }
    }
}

