# general workflow
* a program -> compiler compiles the code into -> .bin representation of cpp program
* then on windows a .exe file can be run 
* When it is active, it is loaded in the RAM (**Real memory**) in a **PROGRAM AREA**
    *   Lot's of programs running on OS --> quickly run out of memory for each program
    *   That creates an idea for **Virtual Memory**  : *a trick that fools your program into thinking it is the only program running on your OS, and all memory res. belong to it*
    *   That virtual alocated memory is called **Memory map**
    *   Each program is abstracted into a process, and each process has access to the memory range 0~(2^N)-1 where N is 32 on 32 bit systems and 64 on 64-bit systems.

## Update on a program execution model
* .bin -> execute in cpu in MMu - memory management unit -> it translates the process between **Virtual Memory** map of each process and **Real memory** RAM (Random access memory)
* The entire program is not loaded in real memory by the CPU and **MMU**. Only parts that are about to be executed are loaded. Making effective use of **real memory**, a valuable and lacking resource.
* parts that are not being used, are discarded from the memory and stored on the **hard drive** instead

## Example for simultaneous app running

- When we have multiple programs, let say 4 that have their own **.bin** file with their own separate **memory maps**
- If we execute them, the **MMU** will assign them separate sections on the **Real ram** in our computer. And they will use this sections allocated on the **RAM** --> **Virtual memory**
- **Virtual memory**: the memory map is a standard formt defined by the **OS**. All programs written for that OS must conform it. It is usually divided into some sections.
- Structure of the program is defined by the OS, that is going to be running that programm.

## Memory map
|System | Address| Content|
|:----|:----:|----:|
|Stack|0...8...|X..| 
|Heap |0...1024...|X...|
|Data | ...|...|
|Text | (2^n)-1|X|

* **Stack** is going to store a **Local** variables, function calls, ...
* **Heap** is additional memory that can be queried for at *run time* -> important for **Dynamic memory**, additional memory for the program, that we can use, if we run out of the stack memory and other usecases
* **Data** 
* **Text** stores actual binary of our program, so the CPU can execute it


