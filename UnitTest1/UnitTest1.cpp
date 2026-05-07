#include "pch.h"
#include "CppUnitTest.h"
#include "..Project2/Header.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestFindMinElement)
		{
			vector<int> vec = { 5, 2, 8, 1, 9 };
			// Перевіряємо, чи правильно знаходить мінімум
			Assert::AreEqual(1, findMinElement(vec));
		}

		TEST_METHOD(TestFindMaxElement)
		{
			vector<int> vec = { 5, 2, 8, 1, 9 };
			// Перевіряємо, чи правильно знаходить максимум
			Assert::AreEqual(9, findMaxElement(vec));
		}

		TEST_METHOD(TestEmptyVectorExceptions)
		{
			vector<int> empty_vec;
			// Перевіряємо, чи викидається виняток при порожньому векторі
			Assert::ExpectException<std::runtime_error>([&] { findMinElement(empty_vec); });
			Assert::ExpectException<std::runtime_error>([&] { findMaxElement(empty_vec); });
		}
	};
}