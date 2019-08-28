using Unity.Entities;
using Unity.Mathematics;
using Unity.Tiny.Core2D;

public struct Player : IComponentData
{
    public float3 Direction;
    public float Speed;
    public bool Collide;
}
