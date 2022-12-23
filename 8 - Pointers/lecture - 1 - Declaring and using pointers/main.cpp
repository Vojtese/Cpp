#include <iostream>
/**
  * @brief: Declaring and using pointers in C++
  *                           address     Var name      value
  *                           1000
  * int *p_var1-->1004        1004        var1          22
  *                           1008
  *                           1012
  * points on the address of a variables address in memory
  * 
  **/

int main(){
  //Declaration of pointers
  int * p_number {};  // can only store address of a variable of type int
  double * p_fractional_number {};  // can only store an address of a variable of type double

  //Explicitely initialize to nullptr
  int * p_number1{nullptr};   // pointing anywhere, Dont use pointers that contain nullpointers
  int * p_fractional_number1{nullptr};

  // all the addresses have the same size --> all the pointer variables have the same size
  std::cout << "Size of Number pointer : " << sizeof(p_number) 
      << ", size of int : " << sizeof(int) << std::endl;

  std::cout << "Size of fractional_number pointer : " << sizeof(p_fractional_number) 
      << ", size of double : " << sizeof(double) << std::endl;

  std::cout << "Size of Number1 pointer : " << sizeof(p_number1) 
      << ", size of int : " << sizeof(int) << std::endl;

  std::cout << "Size of fractional_number1 pointer : " << sizeof(p_fractional_number1) 
      << ", size of double : " << sizeof(double) << std::endl; 
  
  //position of * doesn't matter
  int*  p_number2 {nullptr};
  int * p_number3 {nullptr};
  int  *p_number4 {nullptr}; // all workt, int *p_number format is easier to understand for multiple variables declared on the same line

  int *p_number5{}, other_int_var{};  // pointer, regular int
  int* p_number6{}, other_int_var6{}; // confusing as you wonder if other_int_var6 is also a pointer to int. It is not. Same as previous
  std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << std::endl;
  std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
  std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;
  std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << std::endl;
  // It is better to separate these declarations on different lines
  int *p_number7{};
  int other_int_var7{}; // No room for confusion

  // assigning data to pointer variables

  //we know that pointers store addresses of variables
  int int_var {43};
  int *p_int{&int_var}; // the address of operator &

  std::cout << "Int var : " << int_var << std::endl;
  std::cout << "p_int (address in memory) : " << p_int << std::endl;

  // you can also change the address stored in a pointer any time
  int int_var1 {65};

  int_var1 = 126;

  p_int = &int_var1;
  std::cout << "p_int (with different address) : " << p_int << std::endl;

  // Pointer only stores the type for which it was declared
  int *p_int1{nullptr};
  double double_var{33};

  // p_int1 = &double_var1; // compile error, we cant store an address of double to int pointer

  //Dereferencing a pointer : 
  int *p_int2 {nullptr};
  int int_data {56};
  p_int2 = &int_data;
  std::cout << "value : " << *p_int2 << std::endl;

  

  return 0;
}