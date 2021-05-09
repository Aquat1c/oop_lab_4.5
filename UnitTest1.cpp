#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_lab_4.5/Equilateral.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestPerimeter)
		{
			Equilateral e(10, 10, 60);
			Assert::AreEqual(30., e.Perimeter(), 0.1);
		}
	};
}
