#include <iostream>	
#include "User.h"
using namespace std;


User::User(string imie, string nazwisko, float initial_balance) :
    imie{ imie }, nazwisko{ nazwisko }, konto{ initial_balance } {
}

void User::set_balance(float money) {
    this->konto.set_balance(money);
};

float User::get_balance() {
    return konto.get_balance();
}

void User::display_other_currencies(Currencies api) {
    this->konto.check_balance_in_other_currencies(api);
}

float User::return_custom_balance(string currency, Currencies api) {
    return this->konto.get_custom_balance(currency, api);
}