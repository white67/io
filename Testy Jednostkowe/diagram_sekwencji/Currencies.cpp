#include <iostream>	
#include "Currencies.h"
using namespace std;


Currencies::Currencies(float usd, float eur, float gbp) :
    usd{ usd }, eur{ eur }, gbp{ gbp } {
    ;
}
float Currencies::get_usd() {
    return this->usd;
}
float Currencies::get_eur() {
    return this->eur;
}
float Currencies::get_gbp() {
    return this->gbp;
}