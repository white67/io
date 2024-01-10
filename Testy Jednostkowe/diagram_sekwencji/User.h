#pragma once
#include "Currencies.h"
#include "Account.h"
#include <string>
using namespace std;

class User {
public:
    User(string imie, string nazwisko, float initial_balance);
    void set_balance(float money);
    float get_balance();
    void display_other_currencies(Currencies api);
    float return_custom_balance(string currency, Currencies api);
private:
    string imie;
    string nazwisko;
    Account konto;
};