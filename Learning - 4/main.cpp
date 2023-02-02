#include <iostream>
/**
  * @brief: modifiers
  * signed/unsigned data : [-2^n-1 ~ 2^n-1 - 1]  /  [0 ~ 2^n - 1] , where n is the number of bits for a type in memory 
  * short/long  2bytes in memory  /  4 ot 8 bytes just for decimal integers (not for fractional numbers like 2.9)
  **/
int main(){

  signed int value1 {10};
  signed int value2 {-300};

  std::cout << "value1 : " << value1 << std::endl;
  std::cout << "value2 : " << value2 << std::endl;
  std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
  std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

  unsigned int value3 {4};
  //unsigned int value4 {-5}; // compiler error

  // short and long
  short short_var {-32768} ; //  2 Bytes 
    short int short_int {455} ; // 
    signed short signed_short {122}; //
    signed short int signed_short_int {-456}; // 
    unsigned short int unsigned_short_int {456};
    
    int int_var {55} ; // 4 bytes
    signed signed_var {66};//
    signed int signed_int {77};//
    unsigned int unsigned_int{77};
    
    long long_var {88}; // 4 OR 8 Bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int{44};

    long long long_long {888};// 8 Bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};


        std::cout << "Short variable : " << short_var<<  " , size : "
          << sizeof (short) << " bytes" << std::endl;

        std::cout << "Short Int : " << short_int << " , size : "
          << sizeof (short int) << " bytes" << std::endl;

        std::cout << "Signed short : " << signed_short
          << " , size : " << sizeof (signed short) << " bytes" << std::endl;

        std::cout << "Signed short int :  " << signed_short_int
          <<  " , size : " << sizeof (signed short int) << " bytes" << std::endl;
        
        std::cout << "unsigned short int :  " << unsigned_short_int
          <<  " , size : " << sizeof (unsigned short int) << " bytes" << std::endl;
        
        std::cout << "---------------------" << std::endl;

        std::cout << "long long variable : " << long_long<<  " , size : "
          << sizeof (long long) << " bytes" << std::endl;

        std::cout << "long long Int : " << long_long_int << " , size : "
          << sizeof (long long int) << " bytes" << std::endl;

        std::cout << "Signed long long: " << signed_long_long
          << " , size : " << sizeof (signed long long) << " bytes" << std::endl;

        std::cout << "Signed long long int :  " << signed_long_long_int
          <<  " , size : " << sizeof (signed long long int) << " bytes" << std::endl;
          
        std::cout << "unsigned long long int :  " << unsigned_long_long_int
          <<  " , size : " << sizeof (unsigned long long int) << " bytes" << std::endl;
      
      std::cout << "---------------------" << std::endl;

  return 0;
}