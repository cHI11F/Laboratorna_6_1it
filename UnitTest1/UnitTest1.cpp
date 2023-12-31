﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../PR20_it/PR20_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestFillArray)
		{
			

			int myArray[24];
			fillArray(myArray);

			
			for (int i = 0; i < 24; ++i) {
				Assert::AreEqual(true, myArray[i] >= -17 && myArray[i] <= 53);
			}
		}


		TEST_METHOD(TestProcessAndCount)
		{
			int myArray[24] = { 27, 28, 51, 12, 41, -2, 26, 49, 51, 51, 20, 21, 31, -15, -11, 50, -1, 36, -9, -9, -14, -15, 42, 32 };
			int count, sum;

			processAndCount(myArray, count, sum);

			Assert::AreEqual(4, count);
			Assert::AreEqual(-28, sum);

			for (int i = 0; i < 24; ++i) {
				if (myArray[i] < 0 && myArray[i] % 3 != 0) {
					Assert::AreEqual(0, myArray[i]);
				}
			}
		}
	};
}
