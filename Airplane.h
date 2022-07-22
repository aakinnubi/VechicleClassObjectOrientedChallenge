#pragma once
#include "Vechicle.h"
class Airplane :
    public Vechicle
{
    float DistanceFlown = 0.0f;
    bool IsInTheAir = false;
    string Color;
    Airplane(string Name, string Model, int Year, string Manufacturer, int NumberOfWheels, string FuelType, float Millage,string Color,float DistanceFlown) {
        this->Name = Name;
        this->Model = Model;
        this->Year = Year;
        this->Manufacturer = Manufacturer;
        this->NumberOfWheels = NumberOfWheels;
        this->FuelType = FuelType;
        this->Millage = Millage;
        this->DistanceFlown = DistanceFlown;
        this->Color = Color;
    }
    Airplane(string Name, string Model, int Year, string Manufacturer, int NumberOfWheels, string FuelType, float Millage, float DistanceFlown, bool IsInTheAir) {
        this->Name = Name;
        this->Model = Model;
        this->Year = Year;
        this->Manufacturer = Manufacturer;
        this->NumberOfWheels = NumberOfWheels;
        this->FuelType = FuelType;
        this->Millage = Millage;
        this->DistanceFlown = DistanceFlown;
        this->IsInTheAir = IsInTheAir;
    }
protected:
    float Fly(float distanceTraveled) {
        this->DistanceFlown = DistanceFlown + distanceTraveled;
        return this->DistanceFlown;
    }

};

