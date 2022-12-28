#include <iostream>
/**
  * @brief: const reference
  * 
  **/

int main(){
  
  // Non const reference

  std::cout << std::endl;
  std::cout << "Non const reference : " << std::endl;
  int age {27};
  int &ref_age{age};

  std::cout << "age : " << age << std::endl;
  std::cout << "ref_age : " << ref_age << std::endl;

  // Can modify original value through reference

  std::cout << std::endl;
  std::cout << "Modify original variable through reference : " << std::endl;

  ref_age++;  //modify through reference
  
  std::cout << "age : " << age << std::endl;
  std::cout << "ref_age : " << ref_age << std::endl;

  //Const reference
  // const applies to reference variable name. Not to original variable
  std::cout << std::endl;
  std::cout << "Const reference : " << std::endl;

  age = 30;
  const int &const_ref_age{age};

  std::cout << "age : " << age << std::endl;
  std::cout << "const_ref_age : " << const_ref_age << std::endl;

  //try to modify through const reference
  //const_ref_age = 31; //Error

  //Duplicate const reference behaviour with pointers
  //can achieve the same thing as const ref with pointer : const pointer to const data
  //remember that a reference by default is like a const pointer. all we need
  //to do is make the pointer point to const data

  const int *const const_ptr_to_const_age {&age};

  //*const_ptr_to_const_age = 32; // error

  //No such thing
  //const int &const weird_ref_age{age};  //error


  return 0;
}