#include "Boat.h"

Boat::Boat(std::string Name, std::string Model, int Year, std::string Manufacturer, int NumberOfWheels, std::string FuelType, float Millage, float DistanceCruise) : Vechicle(m_Name, m_Model, m_Year, m_Manufacturer, m_NumberOfWheels, m_FuelType, m_Millage), m_DistanceCruise(DistanceCruise)
{
}

float Boat::Cruise(float distanceTraveled)
{
	this->m_DistanceCruise = m_DistanceCruise + distanceTraveled;
	return this->m_DistanceCruise;
}


