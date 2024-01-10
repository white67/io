#pragma once
using namespace std;

class Currencies {
public:
    Currencies(float usd, float eur, float gbp);
    float get_usd();
    float get_eur();
    float get_gbp();
private:
    float usd;
    float eur;
    float gbp;
};