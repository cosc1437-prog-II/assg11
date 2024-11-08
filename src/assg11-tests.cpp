/** @file assg11-tests.cpp
 *
 * @brief Unit tests for Assignment 11: Pointers and Dynamic Memory Allocation
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   November 08, 2024
 *
 * Assignment unit tests.  This file contains tests of the work you do
 * for the individual tasks for the assignment.  You should perform the
 * tasks in order, from Task 1 through the last task.  To start a task,
 * change the `#undef` statement to `#define`.  This will enable the test
 * cases for that task.
 */
#include "assg11-library.hpp"
#include "catch.hpp"
using namespace std;

// change these to #define when ready to begin working on each task,
// once defined they will enable the tests declared below for each task
#undef task1
#undef task2
#undef task3

/** Task 1: toMetersAndFeetInches() test case
 * Define the following test case block and write your
 * code to pass these tests for the Task 1 implementation
 * of the toMetersAndFeetInches() function.
 */
#ifdef task1
TEST_CASE("<toMetersAndFeetInches()> function tests", "[task1]")
{
  int* feet;
  int* inches;
  double meters;

  // an example of dynamic memory allocation, not really necessary here but...
  feet = new int;
  inches = new int;

  // 36 total inches is 3 feet and 0 inches, and is just a bit under a
  // meter in length
  meters = toMetersAndFeetInches(36, feet, inches);
  CHECK(*feet == 3);
  CHECK(*inches == 0);
  CHECK(meters == Approx(0.9144));

  // 42 total inches is 3 feet with 6 inches remaining, but still 3 whole feet
  meters = toMetersAndFeetInches(42, feet, inches);
  CHECK(*feet == 3);
  CHECK(*inches == 6);
  CHECK(meters == Approx(0.9144));

  // 0 total inches should still calculate correctly
  meters = toMetersAndFeetInches(0, feet, inches);
  CHECK(*feet == 0);
  CHECK(*inches == 0);
  CHECK(meters == Approx(0.0));

  // 9255 inches is 771 feet 3 inches, and is almost exactly 235 meters
  meters = toMetersAndFeetInches(9255, feet, inches);
  CHECK(*feet == 771);
  CHECK(*inches == 3);
  CHECK(meters == Approx(235.0008));

  // also not necessary, but should always make sure any dynamically
  // allocated memory is correctly deallocated when no longer in use
  delete feet;
  delete inches;
}
#endif

/** Task 2: growArray() test case
 * Define the following test case block and write your
 * code to pass these tests for the Task 2 implementation
 * of the growArray() function.
 */
#ifdef task2
TEST_CASE("<growArray()> function tests", "[task2]")
{
  // test we can double an array of size 1
  int x1[] = {1};
  int* newValues;
  newValues = growArray(1, x1);
  CHECK(newValues[0] == 1);
  CHECK(newValues[1] == 1);
  delete newValues;

  // now an array of size 2
  int x2[] = {1, 2};
  newValues = growArray(2, x2);
  CHECK(newValues[0] == 1);
  CHECK(newValues[1] == 1);
  CHECK(newValues[2] == 2);
  CHECK(newValues[3] == 2);
  delete newValues;

  // now an array of size 3
  int x3[] = {1, 2, 3};
  newValues = growArray(3, x3);
  CHECK(newValues[0] == 1);
  CHECK(newValues[1] == 1);
  CHECK(newValues[2] == 2);
  CHECK(newValues[3] == 2);
  CHECK(newValues[4] == 3);
  CHECK(newValues[5] == 3);
  delete newValues;

  // now an array of size 4
  int x4[] = {1, 2, 3, 4};
  newValues = growArray(4, x4);
  CHECK(newValues[0] == 1);
  CHECK(newValues[1] == 1);
  CHECK(newValues[2] == 2);
  CHECK(newValues[3] == 2);
  CHECK(newValues[4] == 3);
  CHECK(newValues[5] == 3);
  CHECK(newValues[6] == 4);
  CHECK(newValues[7] == 4);
  delete newValues;

  // now an array of size 5
  int x5[] = {8, -2, 5, -42, 10};
  newValues = growArray(5, x5);
  CHECK(newValues[0] == 8);
  CHECK(newValues[1] == 8);
  CHECK(newValues[2] == -2);
  CHECK(newValues[3] == -2);
  CHECK(newValues[4] == 5);
  CHECK(newValues[5] == 5);
  CHECK(newValues[6] == -42);
  CHECK(newValues[7] == -42);
  CHECK(newValues[8] == 10);
  CHECK(newValues[9] == 10);
  delete newValues;
}
#endif

/** Task 3: subArray() test case
 * Define the following test case block and write your
 * code to pass these tests for the Task 3 implementation
 * of the subArray() function.
 */
#ifdef task3
TEST_CASE("<subArray()> function tests", "[task3]")
{
  int values[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  int* newValues;

  // test some sub arrays of size 1 work correctly
  newValues = subArray(0, 1, values);
  CHECK(newValues[0] == 0);
  delete newValues;

  newValues = subArray(8, 1, values);
  CHECK(newValues[0] == 8);
  delete newValues;

  newValues = subArray(3, 1, values);
  CHECK(newValues[0] == 3);
  delete newValues;

  newValues = subArray(5, 1, values);
  CHECK(newValues[0] == 5);
  delete newValues;

  // check sub arrays of size 2 are working
  newValues = subArray(0, 2, values);
  CHECK(newValues[0] == 0);
  CHECK(newValues[1] == 1);
  delete newValues;

  newValues = subArray(7, 2, values);
  CHECK(newValues[0] == 7);
  CHECK(newValues[1] == 8);
  delete newValues;

  newValues = subArray(4, 2, values);
  CHECK(newValues[0] == 4);
  CHECK(newValues[1] == 5);
  delete newValues;

  // some size 4 sub arrays
  newValues = subArray(0, 4, values);
  CHECK(newValues[0] == 0);
  CHECK(newValues[1] == 1);
  CHECK(newValues[2] == 2);
  CHECK(newValues[3] == 3);
  delete newValues;

  newValues = subArray(5, 4, values);
  CHECK(newValues[0] == 5);
  CHECK(newValues[1] == 6);
  CHECK(newValues[2] == 7);
  CHECK(newValues[3] == 8);
  delete newValues;

  newValues = subArray(2, 4, values);
  CHECK(newValues[0] == 2);
  CHECK(newValues[1] == 3);
  CHECK(newValues[2] == 4);
  CHECK(newValues[3] == 5);
  delete newValues;
}
#endif
