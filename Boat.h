#pragma once
#include "Vechicle.h"
class Boat :
    public Vechicle
{

public:
    float m_DistanceCruise = 0.0f;
    Boat(std::string Name, std::string Model, int Year, std::string Manufacturer, int NumberOfWheels, std::string FuelType, float Millage, float DistanceCruise);
protected:
    float Cruise(float distanceTraveled);
};

