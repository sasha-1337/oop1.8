#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop1.8\oop1.8\Date.h"
#include "../oop1.8/Date.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest18
{
	TEST_CLASS(UnitTest18)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date a;
			bool t;
			t = a.GetGoods().Init(111, 222, 333);
			Assert::AreEqual(t, true);
		}
	};
}
