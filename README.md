# ft_printf

This project is a partial reimplementation of the C standard library function `printf`. It's a core project in the 42 school curriculum, designed to deepen understanding of C programming, especially variadic functions.

## About The Project

The `ft_printf` function mimics the behavior of the original `printf`. It takes a format string and a variable number of arguments, then writes the formatted output to the standard output.

This implementation is based on the included `libft` library, which contains a set of custom, re-coded standard C library functions.

## Supported Specifiers

The following conversion specifiers are supported:

*   `%c`: Prints a single character.
*   `%s`: Prints a string of characters.
*   `%p`: Prints a pointer address in hexadecimal format.
*   `%d`: Prints a decimal (base 10) number.
*   `%i`: Prints an integer in base 10.
*   `%u`: Prints an unsigned decimal (base 10) number.
*   `%x`: Prints a number in hexadecimal (base 16) lowercase format.
*   `%X`: Prints a number in hexadecimal (base 16) uppercase format.
*   `%%`: Prints a literal percent sign.

## How to Use

### 1. Compilation

To compile the project and create the static library (`libftprintf.a`), follow these steps:

1.  **Clone the repository:**
    ```sh
    git clone https://github.com/your-username/ft_printf.git
    ```
2.  **Navigate to the project directory:**
    ```sh
    cd ft_printf
    ```
3.  **Run the Makefile:**
    ```sh
    make
    ```
    This will compile all the necessary source files and create the `libftprintf.a` library file.

### 2. Usage in your C code

To use the `ft_printf` function in your own project:

1.  Include the header file `ft_printf.h` in your C source files.
2.  When compiling your project, link the `libftprintf.a` library.

**Example `main.c`:**
```c
#include "ft_printf.h"

int main(void)
{
    char    *str = "world";
    int     num = 42;
    void    *ptr = &num;

    ft_printf("Hello, %s!\n", str);
    ft_printf("The magic number is %d (or %i).\n", num, num);
    ft_printf("Its unsigned value is %u.\n", num);
    ft_printf("In hexadecimal, it's %x (lowercase) or %X (uppercase).\n", num, num);
    ft_printf("The address of the number is: %p\n", ptr);
    ft_printf("This is a test of the percent sign: %%%%\n");

    return (0);
}
```

**Compilation command:**
```sh
cc main.c -L. -lftprintf -o my_program
```
This command links your `main.c` with the `libftprintf.a` library (the `-L.` tells the compiler to look in the current directory for libraries, and `-lftprintf` links the library).

## Makefile Rules

The provided `Makefile` includes the following rules:

*   `make all` or `make`: Compiles the `ft_printf` library and `libft`.
*   `make clean`: Removes all object files (`.o`).
*   `make fclean`: Removes all object files and the final `libftprintf.a` library file.
*   `make re`: Runs `fclean` and then `all` to recompile the library from scratch.
