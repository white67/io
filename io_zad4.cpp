#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

struct Produkt {
    string nazwa;
    int cena;
};

void bubbleSort(Produkt arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].cena > arr[j + 1].cena) {
                swap(arr[j].cena, arr[j + 1].cena);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{

    // zadanie 4

    Produkt lista[10];

    for (int i = 0; i < 10; i++) {
        string nazwa;
        int cena;
        cout << "\nWprowadz produkt nr " << i + 1 << ".";
        cout << "\nNazwa: ";
        cin >> nazwa;
        cout << "Cena: ";
        cin >> cena;
        lista[i].nazwa = nazwa;
        lista[i].cena = cena;
    }

    Produkt lista2[10];

    bubbleSort(lista, 10);

    for (int i = 9; i >= 0; i--) {
        cout << "\n" << lista[i].nazwa << " - " << lista[i].cena;
    }

}