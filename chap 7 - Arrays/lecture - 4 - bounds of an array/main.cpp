#include <iostream>
/**
  * @brief: do while
  **/

int main(){

  const unsigned int COUNT {0};
  unsigned int i {0};  // init

  do{
    std::cout << "[" << i << "] : I Love C++" << std::endl;
    ++i; // increment
  }while(i < COUNT);  // test

  
  return 0;
}