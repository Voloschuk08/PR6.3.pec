#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.3/PR6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 10, -20, 15, 30, 0 };
			int i = 0;
			int n = 0;
			int sum = sumOfSquares(a, n, i);
			Assert::AreEqual(sum, 0);
		}
	};
}
