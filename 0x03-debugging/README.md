# 0x03. C - Debugging

## Tasks

* **0. Multiple mains**
  * [0-main.c](./0-main.c): Based on the [main.c](./tests/main.c), test the function [`positive_or_negative()`](.tests/positive_or_negative.c) gives the correct output when given a case of 0.

* **1. Like, comment, subscribe**
  * [1-main.c](./1-main.c): Comment out (don’t delete it!) the part of the code [`1-main.c`](./tests/1-main.c) that is causing the output to go into an infinite loop.

* **2. 0 > 972?**
  * [2-largest_number.c](./2-largest_number.c): Fix the code in [2-largest_number.c](./tests/2-largest_number.c) so that it correctly prints out the largest of three numbers, no matter the case.

* **3. Leap year**
  * [3-print_remaining_days.c](./3-print_remaining_days.c): Takes a date and prints how many days are left in the year, taking leap years into account. Fix the print_remaining_days() function in [3-print_remaining_days.c](.tests/3-print_remaining_days.c) so that the output works correctly for all dates and all leap years.
    * Assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12 ) and valid days (i.e. the value of day will never be less than 1 or greater than 31 ).
    * Assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).

### Header Files
* [main.h](./main.h): Header file containing prototypes of all functions

### Test Files
* [tests](./tests): Folder of test files.
