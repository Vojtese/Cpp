#include <iostream>
/**
  * @brief: sizeof an array --> std::size()
  * query size of an array on runtime
  **/
 

int main(){
  
  int scores[] {10,12,15,11,18,17,22,23,24};

  // can get the size with std::size
  std::cout << "scores size : " << std::size(scores) << std::endl;

  // print data out
  for (size_t i{0} ; i < std::size(scores) ; ++i){
    std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
  }
  std::cout << std::endl;
  std::cout << "BEFORE C++17" << std::endl;
  std::cout << "sizeof an int : " << sizeof(int) << std::endl;
  std::cout << "sizeof an array : " << sizeof(scores) << std::endl;
  std::cout << "size where sizeof(array)/sizeof(arrayType): " << sizeof(scores)/sizeof(int) << std::endl;


  size_t count {sizeof(scores)/sizeof(scores[0])};
  

  std::cout << "Printing out array items : " << std::endl;
  for ( size_t i{0} ; i < count ; ++i){
    std::cout << "scores[" << i << "] : " << scores[i] << std::endl;      
  }

  // without std::size

  std::cout << "Using Plain old range based for loop " << std::endl;

  for ( auto score : scores){
    std::cout << "score : " << score << std::endl;
  }
  return 0;
}