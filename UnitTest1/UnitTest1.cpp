#include "pch.h"
#include "CppUnitTest.h"
#include "../labit62/labit62.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestCalculateSumOfMinMaxIndices)
        {
			int arr1[] = { 4, 9, 2, 7, 6 };
			int n1 = sizeof(arr1) / sizeof(arr1[0]);
			int result1 = calculateSumOfMinMaxIndices(arr1, n1);
			Assert::AreEqual(result1, 3);

		}
	};
}
