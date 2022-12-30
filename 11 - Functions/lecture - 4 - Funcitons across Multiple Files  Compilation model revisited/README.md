# Zoom on Compilation process

We have multiple **"Source files"** --> **Pre-processing stage** : paste includes in place (looks for .h files and replaces this include with the content of such library to source file) --> this will give us **"Translation Unit - TU"** --> goes to compiler --> every translation unit creates an .o - object file after compilation (20 TU - 20.o) -->
.o files are processed with **Linker** that stitches the .o files in one binary file, that will be run in our system

So:

oneFileProgram.cpp --> preprocessing,compilation, linking --> translated .bin instruction file

The program can be split in multiple files

- comparisons.h : contains declaraion of max and min funcitons, operations.h : contains inct_mult funciton declaration
- comparisons.cpp : has definitions (*implementations*) of such declarations, operations.cpp : likewise
- main.cpp : file has included the header files at the beginning and knows their content after that include

One definition rule : we cant include files that have the same funciton implementation in the global namespace more than once.

- **The Linker** searches for definitions in all **TU** units (.cpp) files in the project. Doesn't have to live in a .cpp file with  the same name as the header
