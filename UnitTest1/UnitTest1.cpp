#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.1/Bill.h"
#include "../lab1.1/Bill.cpp"
#include "../lab1.1/lab1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Bill b;
			b.Init(5, 3);
			int test = b.cost();
			Assert::AreEqual(15, test);
		}
	};
}
