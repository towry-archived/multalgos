#define CATCH_CONFIG_MAIN
#include "../../include/catch.hpp"

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <stdio.h>


// test file
#include "quick.cc"

TEST_CASE("Test the partition", "[test1]") 
{
  int a[8] = {0, 10, 2, 66, 8, 4, 7, 21};
  std::srand(unsigned(std::time(0)));

  int test_times = 10;
  int pivot_point;
  int lo = 0, hi = 8;

  for (int i = 0; i < test_times; i++) {
    std::random_shuffle(a, a+8);

    pivot_point = partition(a, lo, hi);
   
    for (int j = lo; j < pivot_point; j++) {
      REQUIRE(a[j] <= a[pivot_point]);
    }
    for (int j = hi; j >= pivot_point; j--) {
      REQUIRE(a[j] >= a[pivot_point]);
    }
  }
}

TEST_CASE("Test the quicksort function", "[test2]") 
{
  int a[8] = {0, 10, 2, 66, 8, 4, 7, 21};
  std::srand(unsigned(std::time(0)));

  int lo = 0, hi = 8;

  int test_times = 10;
  for (int i = 0; i < test_times; i++) {
    std::random_shuffle(a, a+8);

    quicksort(a, lo, hi);

    for (int j = 0; j < 7; j++) {
      REQUIRE(a[j] <= a[j+1]);
    }
  }
}
