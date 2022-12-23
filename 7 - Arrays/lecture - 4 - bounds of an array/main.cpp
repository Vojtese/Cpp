#include <iostream>
/**
  * @brief: bounds of arrays
  **/

int main(){

  // --*******--, where *stands for places in memory 
  // of an array and - represent before and after an arrray in memory
  // - symbols outside bounds of an array
  int numbers[] {1,2,3,4,5,6,7,8,9,0};

  //read beyond bounds : will read garbage or crash your program
  std:: cout << "numbers[12]" << numbers[12] << std::endl;

  //Write beyond bounds. The compiler allows it. But you don;t own
  // the memory at index 12, so other programs may modify it and your
  // program may read bogus data at a later time. Or you can even
  // corrupt data used by other aprts o your program
  numbers[12999999] = 1000;
  std::cout << "numbers[12] : " << numbers[12] << std::endl; 

  
  return 0;
}