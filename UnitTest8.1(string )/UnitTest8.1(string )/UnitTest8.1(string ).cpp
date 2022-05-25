#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            string str = "BASIC AND Delphi";
            string letters = "BASIC";

            const int count = CountIncludes(str, letters);

            Assert::AreEqual(6, count);
        };

        TEST_METHOD(TestChange)
        {
            string str = "BASIC, Python and BASIC";

            string expected = "Delphi, Python and Delphi";
            string actual = Change(str, "BASIC", "Delphi");

            Assert::AreEqual(expected, actual);

		}
	};
}
