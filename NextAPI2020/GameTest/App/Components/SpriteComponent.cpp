#include "stdafx.h"
#include "SpriteComponent.h"
#include "../EntityManager.h"
#include "../Entity.h"

SpriteComponent::SpriteComponent()
{
}

SpriteComponent::SpriteComponent(const char* path, int col, int row)
{
    m_Sprite = App::CreateSprite(path, col, row);
    
}

void SpriteComponent::Initialize()
{
    m_transform = owner->GetComponent<TransformationComponent>();
    m_Sprite->SetFrame(0);
    m_Sprite->SetScale(m_transform->GetScale());
    m_Sprite->SetPosition(m_transform->GetPosition());
}

void SpriteComponent::Update(float deltaTime)
{
    m_Sprite->Update(deltaTime);
}

void SpriteComponent::Render()
{
    m_Sprite->Draw();
}

CSimpleSprite* SpriteComponent::GetSprite() const
{
    return m_Sprite;
}

