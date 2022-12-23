#include <iostream>
/**
  * @brief: for loop
  **/

int main(){
  // iterator: unsigned int, starting point: i{}, Test: i < 10, Increment: ++i, loop Body: inside {}
  /*for (unsigned int i{}; i < 10 ; ++i){
    std::cout << "I love C++" << std::endl;
  }*/
  // size_t is representation for some unsigned int type representation: alias
  /*for (size_t i{}; i < 10 ; ++i){
    std::cout << "I love C++" << std::endl;
  }
 
  for (size_t i{0}; i < 10; ++i){
    std::cout << "i : " << i << ". Double that and you get " << 2*i << std::endl;
  }
  // single line, but better with braces
  for (size_t i{0}; i < 10; ++i)
    std::cout << "i : " << i << ". Double that and you get " << 2*i << std::endl;

  for (size_t i{0}; i < 10; ++i){
    std::cout << "i is usable here, the value is : " << i <<std::endl;
  }*/
  size_t j{};
  for (j; j < 10; ++j){   // j < 10 bad design
    std::cout << "j is usable here, the value is : " << j <<std::endl;
  }
  std::cout << "Loop done, the value of j : " << j << std::endl;
  
 const size_t COUNT {10};
 for (size_t j{}; j < COUNT; ++j){
  std::cout << "the value of j is : " << j <<std::endl;
 }

  return 0;
}