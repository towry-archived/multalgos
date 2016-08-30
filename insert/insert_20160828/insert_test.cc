#define CATCH_CONFIG_MAIN
#include "../../include/catch.hpp"

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <stdio.h>

#include "insert.cc"

TEST_CASE("Test the insert", "[test1]")
{
	int a[8] = {0, 10, 2, 66, 8, 4, 7, 21};
	std::srand(unsigned(std::time(0)));

	int test_times = 10;
	int lo = 0, hi = 8;

	for (int i = 0; i < test_times; i++) {
		std::random_shuffle(a, a+8);
		// insert sort
		insert(a, 8);
		
		for (int j = 1; j < 8; j++) {
			REQUIRE(a[j-1] <= a[j]);
		}
	}
}
