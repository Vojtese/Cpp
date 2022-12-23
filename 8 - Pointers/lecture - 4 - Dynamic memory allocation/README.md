# Dynamic memory allocation
* to use a heap storage, if stack memory isnt enough


* So far we used only memory allocated on the stack. We are going to see how one can allocate memory from the heap, and some of the differences between these mechanisms.

|Stack|Heap|
|-----|----|
|* Memory is finite|* Memory is finite|
|* The Developer isn't in full control of the memory lifetime|* The developer is in full control of when memory is allocated and when it's released|
|* Lifetime is contolled by the cope mechanism|* lifetime is contolled explicitly through *new* and *delete* operators|

* in Stack we cant decide when int var will be deleted
* in Heap we can