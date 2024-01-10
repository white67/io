#include "pch.h"
#include "CppUnitTest.h"
#include "../diagram_sekwencji/User.cpp"
#include "../diagram_sekwencji/User.h"
#include "../diagram_sekwencji/Account.h"
#include "../diagram_sekwencji/Account.cpp"
#include "../diagram_sekwencji/Currencies.h"
#include "../diagram_sekwencji/Currencies.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(Test_Display_Balance)
	{
	public:
		
		TEST_METHOD(Test_Display_Balance1)
		{
			float result = 1500;
            User newUser("Kago", "Maniana", 1500.0);

            // Odczytanie salda
            float currentBalance = newUser.get_balance();
            
            Assert::AreEqual(result, currentBalance);

		}
		TEST_METHOD(Test_Get_Custom_Balance_USD)
		{
			float result = 5955; // usd = 3.97

			User newUser("Kago", "Maniana", 1500.0);
			Currencies new_api(3.97, 4.34, 5.03);
			newUser.display_other_currencies(new_api);
			float currentBalance = newUser.return_custom_balance("usd", new_api);
			
			Assert::AreEqual(result, currentBalance);
		}
		TEST_METHOD(Test_Get_Custom_BalanceEUR)
		{
			float result = 6510; // usd = 4.34

			User newUser("Kago", "Maniana", 1500.0);
			Currencies new_api(3.97, 4.34, 5.03);
			newUser.display_other_currencies(new_api);
			float currentBalance = newUser.return_custom_balance("eur", new_api);

			Assert::AreEqual(result, currentBalance);
		}
		TEST_METHOD(Test_Get_Custom_Balance_GBP)
		{
			float result = 7545; // usd = 5.03

			User newUser("Kago", "Maniana", 1500.0);
			Currencies new_api(3.97, 4.34, 5.03);
			newUser.display_other_currencies(new_api);
			float currentBalance = newUser.return_custom_balance("gbp", new_api);

			Assert::AreEqual(int(result), int(currentBalance));
		}
	};
}
