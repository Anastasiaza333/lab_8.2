#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101] = "bsdbaafj djvnjbbc sdbasdby bosvsolc wdolpcvb tiroitbe bbbbbbbb";
			int k;
			Amountwordsb(str, k);
			Assert::AreEqual(k, 3);
		}
	};
}
