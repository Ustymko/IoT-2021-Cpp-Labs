#include <iostream>
using namespace std;
class Car{

    private:
        int Horsepower;
        string Brand;
        int MaxSpeed;

    protected:
        int price;
        int age;

    public:
        int mass;
        string country;

        int getHorsepower(){
            return Horsepower;
        }

        string getBrand(){
            return Brand;
        }

        int getMaxSpeed(){
            return MaxSpeed;
        }

        void main(int new_mass, string new_country){
            mass = new_mass;
            country = new_country;
            cout << "Horsepower: " << Horsepower;    
            cout << ", Brand: " << Brand;
            cout << ", MaxSpeed: " << MaxSpeed;
            cout << ", Price: " << price;
            cout << ", Age: " << age;
            cout << ", Mass: " << mass;
            cout << ", Country: " << country << endl;
        }

    Car(){};

    Car(int another_Horsepower, string another_Brand, int another_MaxSpeed, int another_price, int another_age){
        Horsepower = another_Horsepower;
        Brand = another_Brand;
        MaxSpeed = another_MaxSpeed;
        price = another_price;
        age = another_age;
    }
    
    ~Car(){};
};