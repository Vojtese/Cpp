#include <iostream>
/**
  * @brief: basic opperations: addition, subtraction, divide, modulus, multiply
  **/
int main(){

  // Addition
  int number1 {2};
  int number2 {7};
  int sum { number1 + number2 };
  //int otherSum = number1 + number2;

  std::cout << "The sum is : " << sum << std::endl;
  //std::cout << "Other sum is : " << otherSum << std::endl;

  //Subtraction
  int result = number2 - number1;
  std::cout << "Result is : " << result << std::endl;

  //Multiplication
  int product { number1 * number2 };
  //int otherProduct = number1 * 2 * number2;

  std::cout << "The product is : " << product << std::endl;
  //std::cout << "Other product is : " << otherProduct << std::endl;

  //Integer division
  int quotient { number1 / number2 };
  //int otherQuotient = number1 / 17;

  std::cout << "The quotient is : " << quotient<< std::endl;
  //std::cout << "Other quotient is : " << otherQuotient << std::endl;

  
  //Modulus
  int modulo = number2 % number1;

  std::cout << "The modulo is : " << modulo << std::endl;

  return 0;
}