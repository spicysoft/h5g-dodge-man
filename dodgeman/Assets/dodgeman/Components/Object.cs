using Unity.Entities;
using Unity.Tiny.Core2D;
using Unity.Mathematics;

public struct Object : IComponentData
{
    public float3 Direction;
    public float Speed;
    public Sprite2DRenderer sprite0;
    public Sprite2DRenderer sprite1;
    public Sprite2DRenderer sprite2;
}
