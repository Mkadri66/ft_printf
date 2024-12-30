# ft_printf

![42](https://img.shields.io/badge/42-School-blue)
![C](https://img.shields.io/badge/Language-C-green)
![License](https://img.shields.io/badge/License-MIT-yellow)

**ft_printf** is a custom implementation of the standard C library function `printf`. This project is part of the 42 School curriculum and aims to deepen my understanding of variadic functions, string formatting, and memory management in C.

---

## 📋 Table of Contents

1. [Introduction](#-introduction)
2. [Features](#-features)
3. [How to Use](#-how-to-use)
4. [Compilation](#-compilation)
5. [Author](#-author)
6. [License](#-license)

---

## 🌟 Introduction

The **ft_printf** project is a recreation of the `printf` function from the C standard library. It handles various format specifiers and provides a flexible way to format and print data to the standard output. This project helped me master key concepts in C programming, such as:

- Variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`).
- String manipulation and formatting.
- Memory management and optimization.

---

## 📜 Features

### Supported Format Specifiers

- **`%c`** : Print a single character.
- **`%s`** : Print a string.
- **`%p`** : Print a pointer address.
- **`%d`** / **`%i`** : Print a signed integer.
- **`%u`** : Print an unsigned integer.
- **`%x`** / **`%X`** : Print an unsigned integer in hexadecimal (lowercase/uppercase).
- **`%%`** : Print a percent sign.

### Additional Features (not implemented in this repo)

- Handles basic flags: `-`, `0`, `.`, `*`, and `#`.
- Supports minimum field width and precision.
- Manages edge cases and invalid formats gracefully.

---

## 🛠 How to Use

1. Clone this repository:
 ```bash
 git clone https://github.com/Mkadri66/ft_printf

2. Go to repository:
```bash
cd ft_printf
```
Example Usage
```bash
  #include "ft_printf.h"
 
  int main(void)
  {
      ft_printf("Hello, %s!\n", "world");
      ft_printf("The answer is %d.\n", 42);
      ft_printf("Pointer: %p\n", (void *)0x123456);
      return 0;
  }
```

## 🔧 Compilation 

To compile the library, use the provided Makefile:
  ```bash
  make
  ```
    
This generates a ft_printf.a file (static library).

You can execute the code with this command : 
  ```bash
  ./ft_printf
  ```

To clean up object files:
   ```bash
   make clean
   ```

To clean up object files and the library:
   ```bash
   make fclean
   ```
    
To recompile everything:
   ```bash
   make re
   ```

## 👤 Author
 [Mkadri66](https://github.com/Mkadri66)

## 📄 License
This project is licensed under the MIT License. See the LICENSE file for details.
     
