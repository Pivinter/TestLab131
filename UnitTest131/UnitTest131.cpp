#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab131/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int t;
            t = main();
            Assert::AreEqual(t, 0);
		}
	};
}
