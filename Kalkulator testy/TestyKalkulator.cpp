#include "pch.h"
#include "CppUnitTest.h"
#include "../Kalkulator/funkcje.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestyKalkulator
{
	TEST_CLASS(TestyKalkulator)
	{
	public:
	
		TEST_METHOD(TestBasic)
		{
			Assert::AreEqual(7, add(5, 2));
			Assert::AreEqual(3, substract(5, 2));
			Assert::AreEqual(10, multiply(5, 2));
			Assert::AreEqual(3, divide(6, 2));
		}
		TEST_METHOD(TestLogarytmNaturalny)
		{
			Assert::AreEqual(float(0), ln(1));
		}
		TEST_METHOD(TestOdchylenieStandardowe)
		{
			Assert::AreEqual(float(1.41421), odchylenie(arr), float(0.001));
		}
		TEST_METHOD(TestExponent)
		{
			Assert::AreEqual(float(7.38906), exponent(2), float(0.001));
		}
		TEST_METHOD(TestLogarytmDziesietny)
		{
			Assert::AreEqual(float(2), lgDz(100));
		}
	};
}
