# When NEW fails
In some rare cases, the *new* operator will fail to allocate dynamic memory from the heap.
When that happens, and you have no mechanism in place to handle that failure, an exxception will be thrown and
the program crashes.

* New fails rarely in pactice and you'll see many programs that assume that it always works and don't check
for memory allocation failure in any way. Depending on your application, failed memory allocations can be very bad and you need to check and handle them.

## Checking for failed memory allocations
* Through the exception mechanism
* the std::nothrow setting