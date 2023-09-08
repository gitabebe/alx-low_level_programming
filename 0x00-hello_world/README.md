# 0x00. C - Hello, World

## Tasks

* **0. Preprocessor**
  * [0-preprocessor](./0-preprocessor): a script that runs a C file saved in the variable `$CFILE` through the preprocessor and save the result into another file`c`.

* **1. Compiler**
  * [1-compiler](./1-compiler): a script that compiles a C file `$CFILE`  but does not link, saves the result in an output file of the same name but with a `.o` extension instead of `.c`.
    * Example: If the C file is `main.c`, the output is `main.o`.

* **2. Assembler**
  * [2-assembler](./2-assembler): a script that generates the assembly code of a C code saved in the variable `$CFILE`; saves the result in an output file of the same name but with a `.s` extension.
    * Example: If the C file is `main.c`, the result is `main.s`.

* **3. Name**
  * [3-name](./3-name): a script that compiles a C file saved in the variable `$CFILE` and creates an executable `cisfun`.


* **4. Hello, puts**
  * [4-puts.c](./4-puts.c): C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line, using the function `puts`.

* **5. Hello, printf**
  * [5-printf.c](./5-printf.c): C program that prints exactly `with proper grammer, but the outcome is a piece of art,`, followed by a new line, using the function `printf`.

* **6. Size is not grandeur, and territory does not make a nation**
  * [6-size.c](./6-size.c): C program that prints the size of various types on the computer it is compiled and run on.

* **7. Intel**
  * [100-intel](./100-intel): a script that generates the assembly code in Intel syntax of a C file saved in the variable $CFILE; saves the result in an output file of the same name but with a `.s` extension.
    * Example: If the C file is `main.c`, the output is `main.s`.

* **8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity**
  *[101-quote.c](./101-quote.c): a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
    * not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
    * program should return 1
