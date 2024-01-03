#include <iostream>
#include <string>
#include "../testyjedn/funkcje.h"

using namespace std;

int main()
{
    // Example usage
    cout << "Balance in USD: $" << check_balance_in_other_currencies("usd", get_balance()) << endl;

    set_exchange_rate("usd", 4.0);  // Change USD exchange rate to 4.0

    cout << "Updated balance in USD: $" << check_balance_in_other_currencies("usd", get_balance()) << endl;

    return 0;
}