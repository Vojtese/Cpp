#include <iostream>
/**
  * @brief: while loop
  **/
 

int main(){
  
  const unsigned int COUNT {10};

  unsigned int i {0};

  while ( i < COUNT){
      std::cout << "I love c++" << std::endl;
      ++i;
  }
  
  return 0;
}