#include <iostream>
#include <iomanip>
/**
  * @brief: Fractional numbers
  * float has 4 bytes size, 7 digits precision, 2*Nbytes - 1
  * double has 8 bytes size, 15 digits precision and is recomened as default, 2*Nbytes - 1
  * long double has 12 bytes size, and precision is greater then double
  **/
int main(){

  float num1 {1.2345678901234567890f};
  double num2 {1.2345678901234567890};
  long double num3 {1.12345678901234567890L};
  
  // printing sizes
  std::cout << "sizeof float : " << sizeof(float) << std::endl;
  std::cout << "sizeof double : " << sizeof(double) << std::endl;
  std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

  // printing out precision numbers
  std::cout << std::setprecision(20); // control the precision from std::cout
  std::cout << "num1 is : " << num1 << std::endl; // 7 precision
  std::cout << "num2 is : " << num2 << std::endl; // 15 precision
  std::cout << "num3 is : " << num3 << std::endl; // 15+ precision

  // Float problems
  double num4 {192400023.0L};
  std::cout << "num4 : " << num4 << std::endl;

  // Scientific notation
  double num5 {192400023};
  double num6 {1.92400023e8};
  double num7 {1.924e8};

  double num8 {0.00000000003498};
  double num9 {3.498e-11};
  std::cout << "num5 is : " << num5 << std::endl;
  std::cout << "num6 is : " << num6 << std::endl; 
  std::cout << "num7 is : " << num7 << std::endl;
  std::cout << "num8 is : " << num8 << std::endl; 
  std::cout << "num8 is : " << num9 << std::endl; 

  // Infinity and NaN
  double num10 { -5.6 };
  double num11{}; // init 0
  double num12{}; // init 0

  // Infinity
  double result { num10 / num11};

  std::cout << num10 << "/" << num11 << " yields " << result << std::endl;
  std::cout << result << " + " << num10 << " yields " << result + num10 << std::endl;

  //NaN
  result = num11 / num12;
  
  std::cout << num11 << "/" << num12 << " = " << result << std::endl;

  return 0;
}