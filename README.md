*This project has been created as part of the 42 curriculum by esalman.*

# ft_printf

## Description

**ft_printf** is a custom implementation of the standard C `printf()` function. The project focuses on learning variadic functions, low-level output handling, and modular C design.

The project builds a static library `libftprintf.a` that reproduces the behavior of `printf()` for the mandatory conversions required by the 42 subject.

Supported conversions:
`c s p d i u x X %`

---

## Instructions

### Compilation

```bash
make
```

This generates:

```bash
libftprintf.a
```

### Cleaning

```bash
make clean
make fclean
make re
```

### Usage

```c
#include "ft_printf.h"
```

```bash
gcc main.c libftprintf.a
```

---

## Algorithm and Data Structure

### Parsing Algorithm

The format string is processed using a single-pass linear scan.

1. Iterate through the string character by character
2. When `%` is found:

   * Read the next character as the format specifier
   * Route it to the correct handler function
3. Otherwise:

   * Print the character directly using `write()`

**Time Complexity:** O(n)
**Space Complexity:** O(1)

---

### Variadic Argument Handling

The project uses C variadic functions:

```c
va_start()
va_arg()
va_end()
```

This allows dynamic argument extraction based on format specifiers.

---

### Number Conversion Algorithm

Numbers are printed using recursive decomposition:

* Division by base (10 or 16)
* Recursive call
* Print remainder

This guarantees correct digit order without using buffers or dynamic memory.

---

## Resources

* `man 3 printf`
* GNU C Library Documentation
* `stdarg.h` reference
* 42 ft_printf subject PDF
* C Variadic Functions Documentation

### AI Usage

AI was used for:

* Concept clarification
* Documentation structuring
* Debugging support


AI was not used for direct code generation.
All implementation logic and coding decisions were made by the author as part of the learning process.
