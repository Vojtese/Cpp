#include <iostream>
/**
  * @brief: Declaring and Using references
  * 
  **/

int main(){
  //Modify data through original value
  int int_val {45};
  double double_val {33.65};

  int &ref_to_int_val_1{int_val}; // Assign through initialization
  int &ref_to_int_val_2 = int_val;  // assign through assignment
  double &ref_to_double_val_1 {double_val};

  // You have to declare and initialize in one statement
  // int &some_ref; //error

  std::cout << "int_val : " << int_val << std::endl;
  std::cout << "double_val : " << double_val <<std::endl;
  std::cout << "ref_to_int_val_1 : " << ref_to_int_val_1 << std::endl;
  std::cout << "ref_to_int_val_2 : " << ref_to_int_val_2 << std::endl;
  std::cout << "ref_to-double_val_1 : " << ref_to_double_val_1 << std::endl;

  std::cout << "&int_val : " << &int_val << std::endl;
  std::cout << "&double_val : " << &double_val <<std::endl;
  std::cout << "&ref_to_int_val_1 : " << &ref_to_int_val_1 << std::endl;
  std::cout << "&ref_to_int_val_2 : " << &ref_to_int_val_2 << std::endl;
  std::cout << "&ref_to-double_val_1 : " << &ref_to_double_val_1 << std::endl;

  std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
  std::cout << "sizeof(int&) : " << sizeof(int&) << std::endl;
  std::cout << "sizeof(ref_to_int_val_1) : " << sizeof(ref_to_int_val_1) << std::endl;

  //Modify data through original value ::: changes reflect even in references
  std::cout << std::endl;
  std::cout << "Modyfying data directly : " << std::endl; 
  double_val = 9.99;
  ref_to_int_val_1 = 10;
  
  std::cout << "int_val : " << int_val << std::endl;
  std::cout << "double_val : " << double_val <<std::endl;
  std::cout << "ref_to_int_val_1 : " << ref_to_int_val_1 << std::endl;
  std::cout << "ref_to_int_val_2 : " << ref_to_int_val_2 << std::endl;
  std::cout << "ref_to-double_val_1 : " << ref_to_double_val_1 << std::endl;

  std::cout << "&int_val : " << &int_val << std::endl;
  std::cout << "&double_val : " << &double_val <<std::endl;
  std::cout << "&ref_to_int_val_1 : " << &ref_to_int_val_1 << std::endl;
  std::cout << "&ref_to_int_val_2 : " << &ref_to_int_val_2 << std::endl;
  std::cout << "&ref_to-double_val_1 : " << &ref_to_double_val_1 << std::endl;

  std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
  std::cout << "sizeof(int&) : " << sizeof(int&) << std::endl;
  std::cout << "sizeof(ref_to_int_val_1) : " << sizeof(ref_to_int_val_1) << std::endl;
  
  return 0;
}