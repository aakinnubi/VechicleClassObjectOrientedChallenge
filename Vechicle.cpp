#include "Vechicle.h"

	Vechicle::Vechicle() {
		cout << "Default Constructor was called with no initialization";
	}
	Vechicle::Vechicle(string Name, string Model, int Year, string Manufacturer, int NumberOfWheels, string FuelType, float Millage) : m_Name(Name),
	m_Model(Model),
	m_Year(Year),
	m_Manufacturer (Manufacturer),
	m_NumberOfWheels(NumberOfWheels),
	m_FuelType(FuelType),
	m_Millage( Millage) {
		
	}
	Vechicle::Vechicle(string Name, string Model, string Manufacturer, string FuelType, float Millage) : m_Name(Name),
		m_Model(Model),
		m_Manufacturer(Manufacturer),
		m_FuelType(FuelType),
		m_Millage(Millage) {
	}
	Vechicle::~Vechicle() {

	}

	void Vechicle::SetName(string Name) {
		Vechicle::m_Name = Name;
	}
	void Vechicle::SetModel(string Model) {
		Vechicle::m_Model = Model;
	}
	void Vechicle::SetYear(int Year) {
		Vechicle::m_Year = Year;
	}
	void Vechicle::SetNumberOfWheels(int NumberOfWheels) {
		Vechicle::m_NumberOfWheels = NumberOfWheels;
	}
	void Vechicle::SetManufacturer(string Manufacturer) {
		Vechicle::m_Manufacturer = Manufacturer;
	}
	void Vechicle::SetFuelType(string FuelType) {

	}
	void  Vechicle::SetMillage(float Millage) {
		Vechicle::m_Millage = Millage;
	}
	void Vechicle::SetDistance(float Distance) {
		Vechicle::m_Distance = Distance;
	}

	string Vechicle::GetName() {
		return Vechicle::m_Name;
	}
	string Vechicle::GetModel() {
		return Vechicle::m_Model;
	}
	int Vechicle::GetYear() {
		return Vechicle::m_Year;
	}
	int Vechicle::GetNumberOfWheels() {
		return Vechicle::m_NumberOfWheels;
	}
	string Vechicle::GetManufacturer() {
		return Vechicle::m_Manufacturer;
	}
	string Vechicle::GetFuelType() {
		return Vechicle::m_FuelType;
	}
	float Vechicle::GetMillage() {
		return Vechicle::m_Millage;
	}
	float Vechicle::GetDistance() {
		return Vechicle::m_Distance;
	}

	float Vechicle::Drive(float currentDistance)
	{
		Vechicle::m_Millage = m_Millage + currentDistance;
		Vechicle::m_Distance = m_Distance + currentDistance;
		return Vechicle::m_Distance;
	}

	void Vechicle::StopDrive(bool isStop)
	{
		Vechicle::Drive(0.0);
		Vechicle::~Vechicle();
	}
	

