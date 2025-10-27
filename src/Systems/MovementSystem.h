#ifndef MOVEMENT_SYSTEM_H
#define MOVEMENT_SYSTEM_H

class MovementSystem : public System
{
public:
    MovementSystem()
    {
        // TODO:
        // RequireComponent<TransformComponent>();
        // RequireComponent<...>();
    }

    void Update()
    {
        // TODO:
        // loop all entities that the system is interested in
        for (auto entity : GetEntities())
        {
            // Update entity position based on its velocity every frame of the game loop
        }
    }
};

#endif
