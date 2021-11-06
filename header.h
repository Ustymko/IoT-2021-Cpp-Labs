#include <iostream>
class Overload{
    private:

        int field;

    public:

    int getField(){
        return field;
    }

    Overload(int field = 0):field(field){}

    Overload(const Overload& obj){
        field = obj.field;
    }

    //~Overload(){ std::cout << "~Overload" << std::endl; }
    
    Overload operator+(Overload);

    Overload operator=(Overload);
    
    friend std::istream& operator>>(std::istream&, Overload&);
    
    friend std::ostream& operator<<(std::ostream&, Overload&);

    friend void operator*=(Overload&, Overload);

    friend Overload operator+(Overload, int);
};