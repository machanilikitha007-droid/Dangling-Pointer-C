# Dangling Pointer in C

**Author:** M.Likitha

## Description

This program demonstrates how a pointer can become invalid after dynamically allocated memory is released.

After `free()` is called, the pointer is set to `NULL` so that it is not used as a dangling pointer.

## Concepts Used

- Dynamic memory allocation
- `malloc()`
- `free()`
- Dangling pointers
- NULL pointer

## Sample Output

```text
Value before free: 100
Pointer is no longer pointing to allocated memory.

gcc dangling_pointer.c -o dangling_pointer
./dangling_pointer
