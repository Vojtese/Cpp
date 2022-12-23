#include <iostream>
/**
  * @brief: Dynamic memory allocation
  * 
  **/

int main(){
  //Rule 1: dont try to use a pointer, that is not initialized
  //Rule 2: dont try to work with a pointer, that points to nullptr, thats also does not work
  // How we've used pointers so far
  /*int number {22};

  int *p_number = &number;

  std::cout << std::endl;
  std::cout << "Declaring pointer and assigning address : " << std::endl;
  std::cout << "number : " << number << std::endl;
  std::cout << "p_number : " << p_number << std::endl;
  std::cout << "&number : " << &number << std::endl;
  std::cout << "*p_number : " << *p_number << std::endl;

  int *p_number1; //uninitialized pointer, junk address
  int number1{12};
  p_number1 = &number1;
  std::cout << std::endl;
  std::cout << "Uninitialized pointer : " << std::endl;
  std::cout << "*p_number1 : " << *p_number1 << std::endl;

  // DONT USE UNINITIALIZED pointer
  // writing into uninitialized pointer through dereference
  int *p_number2; // it can be address of other part of the program
  *p_number2 = 55;  //writing junk to it
  std::cout << std::endl;
  std::cout << "Writing into uninitialized pointer through dereference" << std::endl;
  std::cout << "p_number2 : " << p_number2 << std::endl;
  std::cout << "*p_number2 : " << *p_number2 << std::endl;

  // Initialized pointer to null
  int *p_number3 {};  //Initialized with pointer equivalent to zero : nullptr pointer pointing nowhere
  //*p_number3 = 33; // BAD,CRASH

  std::cout << std::endl; 
  std::cout << "Reading and writting through nullptr : " << std::endl;
  //std:;cout << "p_number3 : " << p_number_3 << std::endl;  // reading from nullptr
  //std::cout << "*p_number3 : " << *p_number3 << std::endl;  // crashm, bad
*/

  
  /*{
    int local_scope_var {33}; // lifetime through scope mechanism
  }*/

  //Allocate dynamic memory through 'new'
  //Initialize the pointer with dynamic memory. Dynamically allocate
  // memory at run time and make a pointer point to it

  int *p_number4 {nullptr};
  p_number4 = new int;  // Dynamically allocate space for a single int on the heap
                        // This Memory belongs to our program from now on. The system
                        // can't use it for anything else, until we return it.
                        // After this line executes, we will have a valid memory location
                        // allocated. The size of the allocated memory will be such that it
                        // can store the type pointed to by the pointer
  *p_number4 = 77;  // Writing into dynamically allocated memory in HEAP
  std::cout << std::endl;
  std::cout << "Dynamically allocated memory : " << std::endl;
  std::cout << "*p_number4 : " << *p_number4 << std::endl;

  { // limited to this scope, at the end of }, out of the scope, but not for the *local_ptr_var
    // it will be allocated outside the local scope
    int local_var {33};
    int *local_ptr_var = new int;  
  }

  //Releasing and Resetting
  int *p_number5 {nullptr};
  p_number5 = new int;
  //*p_number = 55;
  delete p_number5; // memory is not our
  p_number5 = nullptr;  // reset it to nullptr, that it has no valid data in it
                        // allways reset it to nullptr, when not needed
  
  //Initialize with 'new' upon pointer declaration
  //It is also possible to initialize the pointer with a valid
  // address up on declaration. Not with a nullptr
  int *p_number6 {new int}; // Memory allocation contains junk value
  int *p_number7 {new int (22)}; // use direct initialization
  int *p_number8 {new int { 23 }}; // use uniform initialization

  std::cout << std::endl;
  std::cout << "Initialize with valid memory address at declaration : " << std::endl;
  std::cout << "p_number6 : " << p_number6 <<std::endl;
  std::cout << "*p_number6 : " << *p_number6 <<std::endl; // junk value

  std::cout << "p_number7 : " << p_number7 <<std::endl;
  std::cout << "*p_number7 : " << *p_number7 <<std::endl;

  std::cout << "p_number8 : " << p_number8 <<std::endl;
  std::cout << "*p_number8 : " << *p_number8 <<std::endl;

  // Remember to release the memory
  delete p_number6;
  p_number6 = nullptr;

  delete p_number7;
  p_number7 = nullptr;

  delete p_number8;
  p_number8 = nullptr;

  p_number6 = new int (81); //allocating new memory on the HEAP, pointer is reused
  std::cout << "*p_number6 : " << *p_number6 << std::endl;  // 81 - new memory on heap
  //again
  delete p_number6;
  p_number6 = nullptr;

  // Bad : calling DELETE twice
  int *p_number9 {new int {77}};

  //use the pointer 
  std::cout << std::endl;
  std::cout << "deleting twice : BAD" << std::endl;
  std::cout << "p_number9 : " << p_number9 << std::endl;
  std::cout << "*p_number9 : " << *p_number9 << std::endl;

  // Remeber to release any dynamically allocated place of memory
  delete p_number9;
  delete p_number9; // anything can happen -- killed program
  p_number9 = nullptr;

  int *p_number10 = new int;

  delete p_number10;
  delete p_number10;
  p_number10 = nullptr;

  std::cout << "After BAD deleting twice" << std::endl;


  return 0;
}