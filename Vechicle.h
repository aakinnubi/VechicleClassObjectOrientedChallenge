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
	string FuelType = "Gasoline";
	float Millage = 0;
	float Distance = 0;
public:
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

public:
	void SetName(string Name) {
		this->Name = Name;
	}
	void SetModel(string Model) {
		this->Model = Model;
	}
	void SetYear(int Year) {
		this->Year = Year;
	}
	void SetNumberOfWheels(int NumberOfWheels) {
		this->NumberOfWheels = NumberOfWheels;
	}
	void SetManufacturer(string Manufacturer) {
		this->Manufacturer = Manufacturer;
	}
	void SetFuelType(string FuelType) {

	}
	void  SetMillage(float Millage) {
		this->Millage = Millage;
	}
	void SetDistance(float Distance) {
		this->Distance = Distance;
	}

	string GetName() {
		return this->Name;
	}
	string GetModel() {
		return this->Model;
	}
	int GetYear() {
		return this->Year;
	}
	int GetNumberOfWheels() {
		return this->NumberOfWheels;
	}
	string GetManufacturer() {
		return this->Manufacturer;
	}
	string GetFuelType() {
		return this->FuelType;
	}
	float GetMillage() {
		return this->Millage;
	}
	float GetDistance() {
		return this->Distance;
	}

protected:
	float Drive(float currentDistance) {
		this->Millage = Millage + currentDistance;
		this->Distance = Distance + currentDistance;
		return this->Distance;
	}
protected:
	void StopDrive(bool isStop) {
		this->Drive(0.0);
		this->~Vechicle();
	}
};

