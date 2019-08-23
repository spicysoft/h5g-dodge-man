using Unity.Entities;
using Unity.Tiny.Scenes;

namespace dodgeman
{
    public struct GameConfig : IComponentData
    {
        public bool GameStart;
        public SceneReference PlayerScene;
        public SceneReference StartButtonScene;
        public SceneReference ControllerScene;
        public float RandomLimt;
        public int Score;
    }
}