#include <iostream>
using namespace std;

int main()
{

    // zadanie 2

    int tablica[10];
    int* tab = new int[10];
    int ilosc = 0;

    for (int i = 0; i < 10; i++) {
        cout << "\nWprowadz liczbe nr " << i+1 << ": ";
        cin >> tablica[i];
        if (tablica[i] < 0) {
            tab[ilosc] = tablica[i];
            ilosc++;
        }
    }
    cout << "\nWprowadzono " << ilosc << " liczb ujemnych";
    cout << "\nPominieto " << 10-ilosc << " liczb";
    cout << "\nOto wszystkie liczby ujemne: ";
    for (int i = 0; i < ilosc; i++) {
        cout << "\n" << tab[i];
    }

    delete[] tab;
}