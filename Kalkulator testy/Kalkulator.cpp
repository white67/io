#include <iostream>
#include "funkcje.h"

using namespace std;

int main()
{
    int l1 = 5, l2 = 2, l3 = 100, l4[5] = {1,2,3,4,5};
    cout << "Add: " << add(l1,l2) << "\n";
    cout << "Substract: " << substract(l1, l2) << "\n";
    cout << "Multiply: " << multiply(l1, l2) << "\n";
    cout << "Divide: " << divide(l1, l2) << "\n";

    cout << "ln(100): " << ln(l3) << "\n";
    cout << "Odchylenie: " << odchylenie(l4) << "\n";
    cout << "Exponent: " << exponent(l2) << "\n";
}