﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../laba8.1(2)/laba8.1(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest812
{
	TEST_CLASS(UnitTest812)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101];
			char* dest1 = new char[151];
			dest1[0] = '\0';
			char* dest2;
			dest2 = Change(dest1, str, dest1, 0);
		}
	};
}
