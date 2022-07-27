#pragma once
#include <string>
#include <iostream>
class Vechicle {
	protected:
		std::string m_Name;
		std::string m_Model;
		int m_Year = 1990;
		std::string m_Manufacturer;
		int m_NumberOfWheels = 4;
		std::string m_FuelType = "Gasoline";
		float m_Millage = 0;
		float m_Distance = 0;	
		float Drive(float currentDistance);
		void StopDrive(bool isStop);
	public:
		Vechicle();
		Vechicle(std::string Name, std::string Model, int Year, std::string Manufacturer, int NumberOfWheels, std::string FuelType, float Millage);
		Vechicle(std::string Name, std::string Model, std::string Manufacturer, std::string FuelType, float Millage);
		virtual ~Vechicle();
		void SetName(std::string Name);
		void SetModel(std::string Model);
		void SetYear(int Year);
		void SetNumberOfWheels(int NumberOfWheels);
		void SetManufacturer(std::string Manufacturer);
		void SetFuelType(std::string FuelType);
		void  SetMillage(float Millage);
		void SetDistance(float Distance);
		std::string GetName();
		std::string GetModel();
		int GetYear();
		int GetNumberOfWheels();
		std::string GetManufacturer();
		std::string GetFuelType();
		float GetMillage();
		float GetDistance();
};