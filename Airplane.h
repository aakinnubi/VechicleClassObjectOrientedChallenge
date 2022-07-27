#pragma once
#include <string>
class Airplane :
    public Vechicle
{
public:
    float m_DistanceFlown{};
    bool m_IsInTheAir{};
    std::string m_Color {};
    Airplane(std::string Name, std::string Model, int Year, std::string Manufacturer, int NumberOfWheels, std::string FuelType, float Millage, std::string Color, float DistanceFlown);
    Airplane(std::string Name, std::string Model, int Year, std::string Manufacturer, int NumberOfWheels, std::string FuelType, float Millage, float DistanceFlown, bool IsInTheAir);
protected:
    float Fly(float distanceTraveled);

};

