#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 3, 9, -4, -8 };
			int S = SuArr(A, 4);
		    Assert::AreEqual(0, S);
		}
	};
}
