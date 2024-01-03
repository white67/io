#include <iostream>
#include <string>
#include "../testyjedn/funkcje.h"


using namespace std;

float balance = 1765.54;

float usd_exchange_rate = 3.94;
float eur_exchange_rate = 4.34;
float gbp_exchange_rate = 5.01;

float get_balance() {
	return balance;
};

float check_balance_in_other_currencies(string currency, float money) {
	if (currency == "usd") return get_exchange_rate("usd") * money;
	if (currency == "eur") return get_exchange_rate("eur") * money;
	if (currency == "gbp") return get_exchange_rate("gbp") * money;

	return -1;
};

float get_exchange_rate(string currency) {
	if (currency == "usd") return usd_exchange_rate;
	if (currency == "eur") return eur_exchange_rate;
	if (currency == "gbp") return gbp_exchange_rate;
};

void set_exchange_rate(string currency, float exchange_rate) {
	if (currency == "usd") usd_exchange_rate = exchange_rate;
	if (currency == "eur") eur_exchange_rate = exchange_rate;
	if (currency == "gbp") gbp_exchange_rate = exchange_rate;

	return;
};
