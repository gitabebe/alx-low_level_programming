# 0x14. C - Bit manipulation

## Tasks

* **0. 0**
  * [0-binary_to_uint.c](./0-binary_to_uint.c): C function that converts a binary number
  to an `unsigned int`.
  * The parameter `b` is a pointer to a string of `0` and `1` characters.
  * If `b` is `NULL` or there are one or more characters in `b` that are
  not `0` or `1` - returns `0`.
  * Otherwise - returns the converted number.

* **1. 1**
  * [1-print_binary.c](./1-print_binary.c): C function that prints the binary representation
  of a number.

* **2. 10**
  * [2-get_bit.c](./2-get_bit.c): C function that returns the value of a bit at a
  given index.
  * Indices start at `0`.
  * If an error occurs - returns `-1`.
  * Otherwise - returns the value of the bit at the given index.

* **3. 11**
  * [3-set_bit.c](./3-set_bit.c): C function that sets the value of a bit to `1` at a given index.
  * If an error occurs - returns `-1`.
  * Otherwise - returns `1`.

* **4. 100**
  * [4-clear_bit.c](./4-clear_bit.c): C function that sets the value of a bit to `0` at
  a given index.
  * If an error occurs - returns `-1`.
  * Otherwise - returns `1`.

* **5. 101**
  * [5-flip_bits.c](./5-flip_bits.c): C function that returns the number of bits needed
  to be flipped to get from one number to another.

* **6. Endianness**
  * [100-get_endianness.c](./100-get_endianness.c): C function that checks the endianness.
  * If big-endian - returns `0`.
  * If little-endian - returns `1`.

* **7. Crackme3**
  * [101-password](./101-password): File containing the password for the
  [crackme3](https://github.com/alx-tools/0x13.c) executable.

### Header File

* [main.h](./main.h): Header file containing prototypes for all functions written in the project.

### Test Files

* [tests](./tests): Folder of test files containing main.c and _putchar.c.
  * [main.c](./tests): files used to test functions
  * [_putchar.c](./tests/_putchar.c): C function that writes a character to `stdout`.
