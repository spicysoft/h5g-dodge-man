using Unity.Entities;
using Unity.Mathematics;

public struct Object : IComponentData
{
    public float3 Direction;
    public float Speed;
}
