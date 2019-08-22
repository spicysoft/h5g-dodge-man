using Unity.Entities;
using Unity.Mathematics;
namespace dodgeman
{
    public struct Wall : IComponentData
    {
        public float3 Direction;
        public float Speed;
        public float Limit;
    }
}

