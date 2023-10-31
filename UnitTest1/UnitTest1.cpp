#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.2r/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const vector<int>& vec = { 1,4,3,6,5 };
			int index = 1;
			int Savelargest = 0;
			FLargestE(vec, index, Savelargest);
			Assert::AreEqual(3, 3);
		}
	};
}
