#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.1/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Line g;
			bool t;
			t = g.Init(2,3);
			Assert::AreEqual(t,true);
		}
	};
}
