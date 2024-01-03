#include "pch.h"
#include "CppUnitTest.h"
#include "../testyjedn/funkcje.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testy
{
	TEST_CLASS(Testy)
	{
	public:

		TEST_METHOD(TestGetBalance)
		{
			Assert::AreEqual(1765.54, get_balance());
		}
		TEST_METHOD(TestGetBalanceInUSD)
		{
			Assert::AreEqual(6956.2276, check_balance_in_other_currencies("usd", get_balance()));
		}
		TEST_METHOD(TestGetBalanceInEUR)
		{
			Assert::AreEqual(7662.4436, check_balance_in_other_currencies("eur", get_balance()));
		}
		TEST_METHOD(TestGetBalanceInGBP)
		{
			Assert::AreEqual(8845.3554, check_balance_in_other_currencies("gbp", get_balance()));
		}
	};
}