#pragma once
#include "TransformationComponent.h"
#include "../Component.h"
#include "../SimpleSprite.h"
#include "../app.h"

class SpriteComponent :public Component
{
private:
    CSimpleSprite* m_Sprite{};
    TransformationComponent* m_transform{};
public:
    SpriteComponent();
    SpriteComponent(const char* path, int col, int row);
    void Initialize() override;
    void Update(float deltaTime) override;
    void Render() override;
    CSimpleSprite* GetSprite() const;
};
