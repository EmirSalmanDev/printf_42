_This project has been created as part of the 42 curriculum by esalman._
## Description

**Libft** is a foundational project of the 42 curriculum. The goal is to recreate a personal C library by reimplementing commonly used standard C library functions, as well as additional utility functions and basic linked list operations.

This project helps build a deep understanding of memory management, pointers, strings, and data structures in C. The resulting static library, `libft.a`, is designed to be reused in future 42 projects.

## Library Overview

The library includes:

### Part 1 – Libc Functions

Reimplementations of standard libc functions, such as:

* Character checks (`ft_isalpha`, `ft_isdigit`, ...)
* String operations (`ft_strlen`, `ft_strchr`, `ft_strncmp`, ...)
* Memory manipulation (`ft_memset`, `ft_memcpy`, `ft_memmove`, ...)
* Conversion and allocation (`ft_atoi`, `ft_calloc`, `ft_strdup`)

### Part 2 – Additional Functions

Utility functions not directly available in libc, including:

* String manipulation (`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`)
* Conversions (`ft_itoa`)
* Functional string operations (`ft_strmapi`, `ft_striteri`)
* File descriptor output functions (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`)

### Part 3 – Linked List Functions

Basic singly linked list utilities using the `t_list` structure:

* Node creation and insertion (`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`)
* List inspection (`ft_lstsize`, `ft_lstlast`)
* Memory management (`ft_lstdelone`, `ft_lstclear`)

## Instructions

### Compilation

To compile the library, simply run:

```bash
make
```

This will generate the static library `libft.a` at the root of the repository.

### Makefile Rules

The Makefile supports the following rules:

* `make` or `make all` – compile the library
* `make clean` – remove object files
* `make fclean` – remove object files and `libft.a`
* `make re` – rebuild everything

The project is compiled using:

* Compiler: `cc`
* Flags: `-Wall -Wextra -Werror`

### Usage

Include the header and link the library in your project:

```c
#include "libft.h"
```

```bash
cc your_program.c -L. -lft
```

## AI Usage

AI tools were used **only as a learning aid**, specifically for:

* Understanding concepts and function behavior
* Clarifying edge cases
* Writing example test cases
* Organizing Readme.md

**AI was not used to generate or write any source code in this project.**

This usage fully complies with the 42 AI guidelines and focuses on reinforcing understanding rather than providing solutions.

## Resources

* `man` pages (e.g., `man strlen`, `man memcpy`)
* 42 Intranet Libft subject PDF
* Youtube

## Notes

* All files are written in accordance with the 42 Norm.
* No global variables are used.
* All dynamically allocated memory is properly freed when required.
* The library is built using `ar` as required by the subject.

---

This project serves as a strong foundation for future C programming projects within the 42 curriculum.
