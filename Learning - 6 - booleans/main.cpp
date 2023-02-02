#include <iostream>
#include <iomanip>
/**
  * @brief: Booleans - 8bits in memory
  **/
int main(){

  bool redLight {true};
  bool greenLight {true};

  if(redLight == true){
    std::cout << "Stop!" << std::endl;
  }else{
    std::cout << "Go through!" << std::endl;
  }

  if(greenLight){
    std::cout << "The light is green!" << std::endl;
  }else{
    std::cout << "The light is NOT green!" << std::endl;
  }

  // Printing out a bool, 1-->true, 0-->false
  std::cout << std::endl;
  std::cout << "redLight : " << redLight << std::endl;
  std::cout << "greenLight : " << greenLight << std::endl;


  // Print out true and false
  std::cout << std::endl;
  std::cout << std::boolalpha;
  std::cout << "redLight : " << redLight << std::endl;
  std::cout << "greenLight : " << greenLight << std::endl;
  std::cout << "sizeof boolean : " << sizeof(redLight) << std::endl;
  return 0;
}