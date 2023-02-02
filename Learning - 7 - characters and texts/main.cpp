#include <iostream>
#include <iomanip>
/**
  * @brief: characters and text
  * char: '5' has an int value of 53
  * if we write '5' - '0' a 53-48 or the int 5
  * if we write c = 'B'+32; then it stores as 'b'
  **/
int main(){

  // ascii encoding
  char value = 65;  // ascii - A

  std::cout << "value : " << value << std::endl;
  std::cout << "value(int) : " << static_cast<int>(value) << std::endl;

  return 0;
}