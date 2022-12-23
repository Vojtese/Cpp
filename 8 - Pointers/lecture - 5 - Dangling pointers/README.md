# Dangling pointer
 * is a pointer that doesn't point to valid memory address. Trying to dereference and use a dangling pointer will result in undefined behaviour
## When it happens
 1. Uninitialized pointer
 2. Deleted pointer
 3. Multiple pointers pointing to same memory

## Solutions
 1. Initialize your pointes
 2. Reset pointers after delete
 3. For multiple pointers to same address, make sure the owner pointer is very clear