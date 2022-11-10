#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.3_2sposib/laba6.3_2sposib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 25;
			int i = 0;
			int a[n];
			int Low = 5;
			int High = 90;
			Create(a, n, Low, High, i);
			Print(a, n, i);
			Min(a, n, 1, a[0]);
		}
	};
}
