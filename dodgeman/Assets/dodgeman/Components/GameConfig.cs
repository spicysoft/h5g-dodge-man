using Unity.Entities;
using Unity.Tiny.Scenes;

namespace dodgeman
{
    public struct GameConfig : IComponentData
    {
        public bool GameStart;
        public SceneReference PlayerScene;

    }
}