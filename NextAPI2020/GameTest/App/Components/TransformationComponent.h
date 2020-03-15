#pragma once

#include "../Component.h"

class TransformationComponent :public Component
{
private:
    vec2 m_position{}, m_velocity{}, m_scale{};
    float m_Rotation{};//in degreees
public:
    TransformationComponent();
    TransformationComponent(vec2 pos, vec2 velocity, vec2 scale,float rotation);
    void Initialize() override;
    void Update(float deltaTime) override;
    void Render() override;
    void SetPosition(vec2 p);
    void SetVelocity(vec2 v);
    void SetScale(vec2 s);
    void SetRotation(float f);
    vec2 GetPosition() const;
    vec2 GetVelocity() const;
    vec2 GetScale() const;
    float GetRotation() const;
};
