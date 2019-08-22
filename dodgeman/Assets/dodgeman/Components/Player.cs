using Unity.Entities;
using Unity.Mathematics;

public struct Player : IComponentData
{
    public float3 Direction;
    public float Speed;
    public bool Collide;
}
