#pragma once
#include "FlyingMachines.h"
#include <string>
class Military: public FlyingMachines{
    protected:
        int MaxHeight, MaxSpeed, FuelBankCapacity, YearOfInvention;
        std::string Name, Type;;
    public:
        void abstract1(){};
        virtual void abstract2() = 0;
        void output();
};

class StrikeFighter: public Military{   
    public:
        void abstract2(){};
        StrikeFighter(std::string Name, int MaxHeight, int MaxSpeed, int FuelBankCapacity, int YearOfInvention);
};

class Bomber: public Military{
    public:
        void abstract2(){};
        Bomber(std::string Name, int MaxHeight, int MaxSpeed, int FuelBankCapacity, int YearOfInvention);
};