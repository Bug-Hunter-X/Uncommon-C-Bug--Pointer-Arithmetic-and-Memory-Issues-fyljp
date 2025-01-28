# Uncommon C Bug: Pointer Arithmetic and Memory Issues

This repository demonstrates a potential bug related to pointer arithmetic and memory management in C. The code may work in simple cases, but can lead to unexpected behavior or crashes when handling more complex scenarios or larger amounts of memory. The solution provides a safer alternative.

**Bug:**
The `bug.c` file contains C code that assigns a value to a pointer and then uses the pointer to modify a variable. While this code is simple and might appear to work in some situations, it is generally unsafe, as we are not properly validating whether the pointer is valid.

**Solution:**
The `bugSolution.c` file offers a revised approach to address the potential problems.  Further enhancements and error checking could improve this. 