#pragma once
#include <vector>
#include <string>
#include "Component.h"

#include "Constants.h"

class Entity;


class EntityManager
{
private:
    std::vector<Entity*> entities;
    static EntityManager* m_instance;
public:
    static EntityManager* GetInstance();
    void ClearData();
    void Update(float deltaTime);
    void Render();
    bool HasNoEntities();
    Entity& AddEntity(std::string const& entityName, LayerType layer, CollisionMask mask);
    std::vector<Entity*> GetEntities() const;
    std::vector<Entity*> GetEntitiesByLayer(LayerType layerNum) const;
    unsigned int GetEntityCount();
    void ListAllEntities() const;
    //CollisionType CheckEntityCollisions() const;
    void DestroyInactiveEntities();
    Entity* GetEntityByName(std::string name);
};
