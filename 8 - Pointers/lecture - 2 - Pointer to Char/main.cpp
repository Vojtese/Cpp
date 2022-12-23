#include <iostream>
/**
  * @brief: Pointer to char
  * 
  **/

int main(){
  
  //Declaring pointers to char
  //Can use normal pointer to char like we've been doing for
  //double, int and anything else 
  char *p_char_var {nullptr};
  char char_var {'A'};

  p_char_var = &char_var;

  std::cout << "The value stored in p_char is : " << *p_char_var << std::endl;

  char char_var1 {'C'};
  p_char_var = & char_var1;

  std::cout << "The value stored in p_char is : " << *p_char_var << std::endl;

  //initialize with string literal
  //pointer to char can also do this : 
  // initialize with a string literal : C-string
  // first character of the array 'H' is pointed to by *p_message
  // "Hello World!" is turned to character array and *p_message points to the first character of the array, strings are "character pointers"
  // array of const chars - this can cause problems for not using const char *ptr
  const char *p_message {"Hello World!"};

  // Printing out
  // What do we get when we print this out
  std::cout << "the message is : " << p_message << std::endl; // this is WHY character pointers are speciall : outputs = "the message is : Hello World!"

  //dereferencing?
  std::cout << "The value stored at p_message is : " << *p_message << std::endl;

  // The string literal is made up of const char. Trying to modify any of them will result in a problem
  //*p_message = 'B'; // We want to have Bello World!
  //std::cout << "The message is after modification : " << p_message << std::endl;

  // Can modify the pure array initialized with string literal
  char message2[] {"Hello There"};
  message2[0] = 'T';
  std::cout << "message2 : " << message2 << std::endl;



  

  return 0;
}