#pragma once
#include <string>
#include <iostream>
using namespace std;
class Vechicle
{
protected:
	string Name;
	string Model;
	int Year = 1990;
	string Manufacturer;
	int NumberOfWheels = 4;
	string FuelType;
	float Millage = 0;
	float Distance = 0;
	Vechicle() {
		cout << "Default Constructor was called with no initialization";
	 }
	Vechicle(string Name, string Model, int Year, string Manufacturer, int NumberOfWheels, string FuelType, float Millage) {
		this->Name = Name;
		this->Model = Model;
		this->Year = Year;
		this->Manufacturer = Manufacturer;
		this->NumberOfWheels = NumberOfWheels;
		this->FuelType = FuelType;
		this->Millage = Millage;
	}
	Vechicle(string Name, string Model, string Manufacturer, string FuelType, float Millage) {
		this->Name = Name;
		this->Model = Model;
		this->Year = Year;
		this->Manufacturer = Manufacturer;
		this->NumberOfWheels = NumberOfWheels;
		this->FuelType = FuelType;
		this->Millage = Millage;
	}
	~Vechicle() {

	}
protected:
	float Drive(float currentDistance) {
		this->Millage = Millage + currentDistance;
		this->Distance = Distance + currentDistance;
		return this->Distance;
}
};

