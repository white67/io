#include <iostream>
#include "Account.h"
#include "Currencies.h"
#include "User.h"
using namespace std;


int main()
{

    // Stworzenie nowego uzytkownika
    User newUser("Kago", "Maniana", 1000.0);

    // Ustawienie nowego salda
    newUser.set_balance(1500.0);

    // Odczytanie salda
    float currentBalance = newUser.get_balance();
    cout << "\t(PLN) " << currentBalance << "\n";

    // Ustawienie kursów walut
    Currencies new_api(3.97, 4.34, 5.03);

    // Odczytanie salda w innych walutach
    newUser.display_other_currencies(new_api);

    currentBalance = newUser.return_custom_balance("usd", new_api);
    cout << "\n\tSaldo USD: " << currentBalance;

    return 0;
}
