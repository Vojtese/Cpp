#include <iostream>
#include <limits>
#include <cmath>
/**
  * @brief: weird integral types with less than 4 byte size and cant handle basic arithmetic
  **/
int main(){

    short int var1 {10};
    short int var2 {20};

    char var3 {40};
    char var4 {50};

    std::cout << "size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "size of var2 : " << sizeof(var2) << std::endl;
    std::cout << "size of var3 : " << sizeof(var3) << std::endl;
    std::cout << "size of var4 : " << sizeof(var4) << std::endl;

    // conversion to int
    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "size of result1 : " << sizeof(result1) << std::endl;
    std::cout << "size of result2 : " << sizeof(result2) << std::endl;

    // NOTE: same behaviour for bitwise shift operators

  return 0;
}