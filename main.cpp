#include <iostream>
#include "Military.h"
#include "Civil.h"

void Civil::output()
{
    std::cout << Type << " " << Name << std::endl;
    std::cout << "Max height is " << MaxHeight << " meters." << std::endl;
    std::cout << "This plane's maximum speed is " << MaxSpeed << " kph." << std::endl;
    std::cout << "The fuel bank contains " << FuelBankCapacity << " cubic meters." << std::endl;
    std::cout << "In this plane " << PeopleCapacity << " people can comfortably fly." << std::endl;
}

Glider::Glider(std::string Name, int MaxSpeed, int MaxHeight, int PeopleCapacity, int FuelBankCapacity)
{
    this->Name = Name;
    this->MaxSpeed = MaxSpeed;
    this->MaxHeight = MaxHeight;
    this->FuelBankCapacity = FuelBankCapacity;
    this->PeopleCapacity = PeopleCapacity;
    this->Type = "Glider";
}

CommercialPlane::CommercialPlane(std::string Name, int MaxSpeed, int MaxHeight, int PeopleCapacity, int FuelBankCapacity)
{
    this->MaxSpeed = MaxSpeed;
    this->MaxHeight = MaxHeight;
    this->FuelBankCapacity = FuelBankCapacity;
    this->PeopleCapacity = PeopleCapacity;
    this->Type = "CommercialPlane";
}

SportPlane::SportPlane(std::string Name, int MaxSpeed, int MaxHeight, int PeopleCapacity, int FuelBankCapacity)
{
    this->MaxSpeed = MaxSpeed;
    this->MaxHeight = MaxHeight;
    this->FuelBankCapacity = FuelBankCapacity;
    this->PeopleCapacity = PeopleCapacity;
    this->Type = "SportPlane";
}

void Military::output()
{
    std::cout << Type << " " << Name << std::endl;
    std::cout << "Max height is " << MaxHeight << " meters." << std::endl;
    std::cout << "This plane's maximum speed is " << MaxSpeed << " kph." << std::endl;
    std::cout << "The fuel bank contains " << FuelBankCapacity << " cubic meters." << std::endl;
    std::cout << "This plane was invented in " << YearOfInvention << std::endl;
}

StrikeFighter::StrikeFighter(std::string Name, int MaxHeight, int MaxSpeed, int FuelBankCapacity, int YearOfInvention)
{
    this->MaxHeight = MaxHeight;
    this->MaxSpeed = MaxSpeed;
    this->FuelBankCapacity = FuelBankCapacity;
    this->Name = Name;
    this->YearOfInvention = YearOfInvention;
    this->Type = "Strike Fighter";
}

Bomber::Bomber(std::string Name, int MaxHeight, int MaxSpeed, int FuelBankCapacity, int YearOfInvention)
{
    this->MaxSpeed = MaxSpeed;
    this->FuelBankCapacity = FuelBankCapacity;
    this->Name = Name;
    this->MaxHeight = MaxHeight;
    this->YearOfInvention = YearOfInvention;
    this->Type = "Bomber";
}

int main(){
    Bomber Bomber1{"\"Bomb-41\"", 1000, 420, 1200, 1930};
    std::cout << "------------" << std::endl;
    std::cout << "Bomber: " << std::endl;
    std::cout << "------------" << std::endl;
    Bomber1.output();

    StrikeFighter StrikeFighter1{"\"Destroyer\"", 1400, 350, 1100, 1935};
    std::cout << "------------" << std::endl;
    std::cout << "StrikeFighter: " << std::endl;
    std::cout << "------------" << std::endl;
    StrikeFighter1.output();

    SportPlane SportPlane1{"\"Sport\"", 200, 800, 1, 100};
    std::cout << "------------" << std::endl;
    std::cout << "SportPlane: " << std::endl;
    std::cout << "------------" << std::endl;
    SportPlane1.output();

    CommercialPlane CommercialPlane1{"\"Boeing 747\"", 200, 4000, 150, 1000};
    std::cout << "------------" << std::endl;
    std::cout << "Commercial plane: " << std::endl;
    std::cout << "------------" << std::endl;
    CommercialPlane1.output();
    
    Glider Glider1{"\"Planer17\"", 50, 300, 2, 0};
    std::cout << "------------" << std::endl;
    std::cout << "Glider: " << std::endl;
    std::cout << "------------" << std::endl;
    Glider1.output();
}