#include <iostream>
/**
  * @brief: array of characters
  **/

int main(){
  /*
  //Declare array
  char message [5] {'H', 'e', 'l', 'l', 'o'};

  //print out the array through looping
  std::cout << "message : ";
  for ( auto c : message){
    std::cout << c;
  }
  std::cout << std::endl;
  std::cout << "size : " << std::size(message) << std::endl;

  //can also modify elements of the char array

  std::cout << std::endl;
  std::cout << "Modify array data : " << std::endl;

  message[1] = 'a';

  //print out the array
  std::cout << "message : ";
  for ( auto c : message) {
    std::cout << c;
  }
  std::cout << std::endl;
  */
  //cool things
  /*
  char message [5] {'H', 'e', 'l', 'l', 'o'}; // this has no null character appended to this!!!
  std::cout << "message : " << message << std::endl;  // direct print out
  */
  //propper C string definition - \0 - null termination string - proper null termination - for c string
  char message [] {'H', 'e', 'l', 'l', 'o', '\0'};
  std::cout << "message : " << message << std::endl;  // direct print out
  std::cout << "size : " << std::size(message) << std::endl;   
  // auto fill of null termination -- not initialized positions are filled with '\0' strings, compiler append it to it
  char message2[6] {'H', 'e', 'l', 'l', 'o'};
  std::cout << "message2 : " << message2 << std::endl;  // direct print out
  std::cout << "size : " << std::size(message2) << std::endl;   

  //deceiving stuff
  char message3 [] {'H', 'e', 'l', 'l', 'o'}; // this is not a c string, as there is not null character
  std::cout << "message3 : " << message3 << std::endl;  // direct print out
  std::cout << "size : " << std::size(message3) << std::endl;  // some garbage after hello 

  // Literal C strings - with double "" -- recommended way in C++
  std::cout << std::endl;
  char message4 [] {"Hello"}; // An implicit '\0' character is appended to the end of the string, making it c string
  std::cout << "message4 : " << message4 << std::endl;
  std::cout << "size : " << std::size(message4) << std::endl;

  //Can even have spaces between characters
  std::cout << std::endl;
  char message5[] {"Hello World!"};
  std::cout << "message5 : " << message5 << std::endl;
  std::cout << "size : " << std::size(message5) << std::endl;

  // arrays of chars are special
  std::cout << std::endl;
  int numbers[] {1,2,3,4,5,6,7,8,9,0};
  std::cout << "numbers : " << numbers << std::endl;
  return 0;
}