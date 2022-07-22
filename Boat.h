#pragma once
#include "Vechicle.h"
class Boat :
    public Vechicle
{
    float DistanceCruise = 0.0f;
protected:
    float Cruise(float distanceTraveled) {
        this->DistanceCruise = DistanceCruise + distanceTraveled;
        return this->DistanceCruise;
    }
};

