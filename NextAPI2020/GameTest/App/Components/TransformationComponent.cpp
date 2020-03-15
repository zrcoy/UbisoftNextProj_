#include "stdafx.h"

#include "TransformationComponent.h"

TransformationComponent::TransformationComponent():m_position(0,0),m_velocity(0,0),m_scale(1,1),m_Rotation(0)
{
}

TransformationComponent::TransformationComponent(vec2 pos, vec2 velocity, vec2 scale, float r)
   :m_position(pos),
    m_velocity(velocity),
    m_scale(scale),
    m_Rotation(r)
{
}

void TransformationComponent::Initialize()
{
}

void TransformationComponent::Update(float deltaTime)
{
    m_position += m_velocity * deltaTime;
}

void TransformationComponent::Render()
{
}

void TransformationComponent::SetPosition(vec2 p)
{
    m_position = p;
}

void TransformationComponent::SetVelocity(vec2 v)
{
    m_velocity = v;
}

void TransformationComponent::SetScale(vec2 s)
{
    m_scale = s;
}

void TransformationComponent::SetRotation(float f)
{
    m_Rotation = f;
}

vec2 TransformationComponent::GetPosition() const
{
    return m_position;
}

vec2 TransformationComponent::GetVelocity() const
{
    return m_velocity;
}

vec2 TransformationComponent::GetScale() const
{
    return m_scale;
}

float TransformationComponent::GetRotation() const
{
    return m_Rotation;
}

