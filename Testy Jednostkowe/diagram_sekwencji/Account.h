#pragma once
#include<string>
#include "Currencies.h"
using namespace std;

class Account {
public:
    Account(float balance);
    void check_balance_in_other_currencies(Currencies api);

    float get_balance();
    void set_balance(float money);
    float get_custom_balance(string currency, Currencies api);

private:
    float balance;
};