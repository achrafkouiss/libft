*This project has been created as part of the 42 curriculum by `akouiss`.*

# Libft – Your First C Library

**Libft** is a foundational C project where you create your own library of general-purpose functions. This library reimplements essential C standard library functions and adds additional utilities, including linked list management, to build a versatile toolkit for future projects.

---

## Description

The goal of **Libft** is to develop a deep understanding of how common C functions work by implementing them from scratch. You will create:

1. **Libc Function Reimplementations** – Functions such as `ft_strlen`, `ft_memcpy`, `ft_isalpha`, `ft_toupper`, and memory management functions like `ft_calloc` and `ft_strdup`.
2. **Additional Utility Functions** – Functions for string manipulation (`ft_substr`, `ft_strjoin`, `ft_split`, `ft_strtrim`, `ft_itoa`) and iteration over strings (`ft_strmapi`, `ft_striteri`).
3. **File Descriptor Output Functions** – `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd` for writing characters, strings, and numbers to any file descriptor.
4. **Linked List Functions** – `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and `ft_lstmap` to manage dynamic lists of generic data.

By building this library, you gain **hands-on experience** with memory allocation, pointer management, C structures, modular programming, and the rules of the **42 Norm**.

---

## Instructions

To compile the library:

```bash
make
```

This will create:

* `libft.a` – your static library
* Object files for each source file

Available Makefile rules:

| Rule     | Description                                       |
| -------- | ------------------------------------------------- |
| `all`    | Compile the library (`libft.a`)                   |
| `clean`  | Remove object files                               |
| `fclean` | Remove object files and the library               |
| `re`     | Rebuild the library from scratch                  |
| `bonus`  | Compile bonus linked list functions (if included) |

Once compiled, you can link `libft.a` with your C programs:

```bash
gcc main.c -L. -lft -o my_program
```

---

## Library Structure

* **Source Files:** `ft_*.c` containing your function implementations.
* **Header File:** `libft.h` containing function prototypes and linked list structure:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

* **Makefile:** To automate compilation and management of the library.

---

## Features & Highlights

* Reimplements **standard C library functions** with the `ft_` prefix.
* Adds **useful string, memory, and utility functions** for general-purpose programming.
* Provides **linked list management**, including iteration and mapping functions.
* Fully compliant with the **42 Norm** and memory-safe practices.
* Includes a Makefile with proper compilation flags: `-Wall -Wextra -Werror`.

---

## About

This repository **showcases my implementation of Libft** with working examples of all functions and optional linked list utilities. It serves both as a **learning artifact** and as a **reusable C library** for future projects.

