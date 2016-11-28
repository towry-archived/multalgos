#define CATCH_CONFIG_MAIN
#include "../../include/catch.hpp"

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <stdio.h>

#include "insert.cc"

TEST_CASE("Test insert algorithm", "[test2]") {
	int a[10] = {0, 8, 2, 12, 90, 22, 63, 29, 4, 23};
	std::srand(unsigned(std::time(0)));

	int test_times = 10;

	for (int i = 0; i < test_times; i++) {
		std::random_shuffle(a, a + 10);

		insert(a, 10);

		for (int j = 1; j < 10; j++) {
			REQUIRE(a[j-1] <= a[j]);
		}
	}
}
