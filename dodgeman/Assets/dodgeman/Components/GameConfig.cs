using Unity.Entities;
using Unity.Tiny.Scenes;
using Unity.Tiny.Core2D;

namespace dodgeman
{
    public struct GameConfig : IComponentData
    {
        public bool Opening;
        public bool GameStart;
        public bool EffectDelete;
        public SceneReference PlayerScene;
        public SceneReference RetryScene;
        public SceneReference StartButtonScene;
        public SceneReference ControllerScene;
        public SceneReference Effect;
        public Translation DeadPosition;

        public float RandomMin;
        public float RandomMax;
        public int Score;
        public int BestScore;

    }
}