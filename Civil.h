#pragma once
#include "FlyingMachines.h"
#include <string>
class Civil: public FlyingMachines{
    protected:
        int MaxSpeed, MaxHeight, PeopleCapacity, FuelBankCapacity;
        std::string Name, Type;
    public:
        void abstract1(){};
        virtual void abstract3() = 0;
        void output();
};

class Glider: public Civil{
    public:
        void abstract3(){};
        Glider(std::string Name, int MaxSpeed, int MaxHeight, int PeopleCapacity, int FuelBankCapacity);
};

class CommercialPlane: public Civil{
    public:
        void abstract3(){};
        CommercialPlane(std::string Name, int MaxSpeed, int MaxHeight, int PeopleCapacity, int FuelBankCapacity);
};

class SportPlane: public Civil{
    public:
        void abstract3(){};
        SportPlane(std::string Name, int MaxSpeed, int MaxHeight, int PeopleCapacity, int FuelBankCapacity);
};