#include "headfile.h"
int main() {
    Car A{450, "Lamba", 350, 80'000, 1};
    Car B{305, "Dodge", 310, 30'000, 3};
    Car C{280, "BMW", 250, 25'000, 5};
    A.main(4, "Italy");
    B.main(6, "USA");
    C.main(7, "Germany");
}