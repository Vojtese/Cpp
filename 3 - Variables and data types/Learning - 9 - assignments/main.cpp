#include <iostream>
/**
  * @brief: assignments
  **/
int main(){

  int var1{123};  // Declare and initialize
  std::cout << "var1 : " << var1 << std::endl;

  var1 = 55;  // Assign
  std::cout << "var1 : " << var1 << std::endl;
  
  std::cout << std::endl;

  std::cout << "-------------------" << std::endl;

  double var2{44.55};  // Declare and initialize
  std::cout << "var2 : " << var2 << std::endl;

  var2 = 99.99;  // Assign
  std::cout << "var2 : " << var2 << std::endl;
  
  std::cout << std::endl;

  std::cout << "-------------------" << std::endl;

  bool state{false};  // Declare and initialize
  std::cout << std::boolalpha;
  std::cout << "state : " << state << std::endl;

  state = true; //assign
  std::cout << "state : " << state << std::endl;

  // auto type declaration
  // carefoul about auto assignments
  auto var3 {333u}; // Declare and initialize with type deduction

  var3 = -22; // assign negative number

  std::cout << "var3 : " << var3 << std::endl;
  
  return 0;
}