#include <iostream>
/**
  * @brief: prefix and postfix + and -
  **/
int main(){

  int value {5};

  // increment by one
  value = value + 1;
  std::cout << "Value is : " << value << std::endl;

  value = 5;  // reset to 5

  // decrement by one
  value = value - 1;
  std::cout << "Value is : " << value << std::endl;

  value = 5;

  std::cout << "The value is incrementing : " << value++ << std::endl;
  std::cout << "The value is : " << value << std::endl;

  std::cout << std::endl;

  // decrement with postfix

  //reset value to 5
  value = 5;

  std::cout << "The value is decrementing : " << value-- << std::endl;
  std::cout << "The value is : " << value << std::endl;

  value = 5;

  ++value;
  std::cout << "The value is prefix++ : " << value << std::endl;

  value = 5;
  std::cout << "The value is prefix in place : " << ++value << std::endl;

  std::cout << std::endl;

  //Prefix : Decrementing
  value = 5;
  --value;
  std::cout << "The value is decrementing prefix-- : " << value << std::endl;

  //reset value to 5
  value = 5;
  std::cout << "The value is (prefix-- in place) : " << --value << std::endl;

  return 0;
}