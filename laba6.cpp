#include "header.h"
#include "header2.h"

int main(){
    //using class type
    Overload* array = new Overload[2];

    //creating 2 objects for next tests
    Overload Ob1{2};
    Overload Ob2{5};
    array[0] = Ob1;
    array[1] = Ob2;

    //testing '+' overload 1
    Overload Ob3 = array[0] + array[1];
    std::cout << "Overloaded +:"<< std::endl << Ob3 << std::endl;

    //testing '+' overload 2
    Overload Ob8 = Ob3 + 4;
    std::cout << "Overloaded + friendly:"<< std::endl << Ob8 << std::endl;
    
    //testing '=' overload
    Overload Ob4 = Ob2;
    std::cout << "Overloaded =:"<< std::endl << Ob4 << std::endl;

    //testing '>>' overload
    Overload Ob5;
    std::cin >> Ob5;
    std::cout << "Overloaded input:"<< std::endl << Ob5 << std::endl;

    //testing copy constructor
    Overload Ob6(Ob5);
    std::cout << "Copying constructor:"<< std::endl << Ob6 << std::endl;

    //creating objects without initalization
    Overload Ob7;
    std::cout << "Object without initalization:"<< std::endl << Ob7 << std::endl;

    //testing '*=' overload
    Ob6 *= Ob2;
    std::cout << "Overloaded *=:"<< std::endl << Ob6 << std::endl;

    //clearing memory space
    delete[] array;
}