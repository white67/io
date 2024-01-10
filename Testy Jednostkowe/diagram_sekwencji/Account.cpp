#include <iostream>	
#include "Account.h"
using namespace std;


Account::Account(float balance) :
    balance{ balance } {
    ;
}

void Account::check_balance_in_other_currencies(Currencies api) {
    float balance = get_balance();
    float balance_usd = balance * api.get_usd();
    float balance_eur = balance * api.get_eur();
    float balance_gbp = balance * api.get_gbp();
    cout << "\n\tStan konta:";
    cout << "\n\t(PLN) " << balance;
    cout << "\n\t(USD) " << balance_usd;
    cout << "\n\t(EUR) " << balance_eur;
    cout << "\n\t(GBP) " << balance_gbp;
}

float Account::get_balance() {
    return this->balance;
};
void Account::set_balance(float money) {
    this->balance = money;
};

float Account::get_custom_balance(string currency, Currencies api) {
    if (currency == "usd") return this->balance * api.get_usd();
    if (currency == "eur") return this->balance * api.get_eur();
    if (currency == "gbp") return this->balance * api.get_gbp();
    return 0;
}