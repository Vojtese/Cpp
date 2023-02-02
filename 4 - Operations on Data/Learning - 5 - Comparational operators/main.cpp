#include <iostream>
/**
  * @brief: comparational operators
  **/
int main(){

  int num1 {45};
  int num2 {60};

  std::cout << "num1 : " << num1 << std::endl;
  std::cout << "num2 : " << num2 << std::endl;

  std::cout << std::endl;
  std::cout << "Comparing variables" << std::endl;

  std::cout << std::boolalpha;

  //stress the need for parenthesses here

  std::cout << "num1 < num2 : " << (num1 < num2) << std::endl;
  std::cout << "num1 <= num2 : " << (num1 <= num2) << std::endl; 
  std::cout << "num1 > num2 : " << (num1 > num2) << std::endl;
  std::cout << "num1 >= num2 : " << (num1 >= num2) << std::endl;
  std::cout << "num1 == num2 : " << (num1 == num2) << std::endl;
  std::cout << "num1 != num2 : " << (num1 != num2) << std::endl;

  return 0;
}