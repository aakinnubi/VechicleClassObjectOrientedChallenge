#include "Vechicle.h";
#include "Airplane.h";

Airplane::Airplane(std::string Name, std::string Model, int Year,
	std::string Manufacturer, int NumberOfWheels, std::string FuelType,
	float Millage, std::string Color, float DistanceFlown)
    : Vechicle(Name, Model, Manufacturer, FuelType, Millage),
	m_DistanceFlown(DistanceFlown), m_Color(Color)
{

}

Airplane::Airplane(std::string Name, std::string Model, 
	int Year, std::string Manufacturer, int NumberOfWheels,
	std::string FuelType, float Millage, 
	float DistanceFlown, bool IsInTheAir) : 
	Vechicle(Name, Model, Manufacturer, FuelType, Millage), m_DistanceFlown(DistanceFlown),
m_IsInTheAir(IsInTheAir) {

}


float Airplane::Fly(float distanceTraveled)
{
	this->m_DistanceFlown = m_DistanceFlown + distanceTraveled;
	return this->m_DistanceFlown;
}
