#include <iostream>
using namespace std;

class Currencies {
public:
    float usd = 4.15;
    float eur = 4.44;
    float gbp = 5.10;
    float calcCurrency(string currency, float money) {
        if (currency == "usd")
            return money / usd;
        else if (currency == "eur")
            return money / eur;
        else if (currency == "gbp")
            return money / gbp;
        else
            return -1;
    }
};

class User {
public:
    float balance;
};

int main()
{
    User uzytkownik;
    Currencies baza_walut;
    uzytkownik.balance = 105.45;

    cout << "Saldo uzytkownika: " << uzytkownik.balance << " pln";
    cout << endl;
    cout << baza_walut.calcCurrency("usd", uzytkownik.balance) << " usd";
    cout << endl;
    cout << baza_walut.calcCurrency("eur", uzytkownik.balance) << " eur";
    cout << endl;
    cout << baza_walut.calcCurrency("gbp", uzytkownik.balance) << " gbp";
    cout << endl;
}
