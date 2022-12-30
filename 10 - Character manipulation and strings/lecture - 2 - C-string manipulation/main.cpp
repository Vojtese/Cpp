#include <iostream>
#include <cstring>
/**
  * @brief: C-string manipulation
  * https://en.cppreference.com/w/cpp/header/cstring
  * 
  **/

int main(){
  
  //std::strlen : Find the length of a string
  /*const char message1 [ ] {"The sky is blue."};

  // Array decays into pointer when we use const char*
  const char *message2 {"The sky is blue."};
  std::cout << "message1 : " << message1 << std::endl;

  //strlen ignores null character
  std::cout << "strlen(message1) : " << std::strlen(message1) << std::endl;

  //Includes null character
  std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

  //strlen works with decayed character
  std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl;

  //Prints sizeof pointer
  std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;
*/
  //std::strcmp - signature : int strcmp ( const char *lhs, const char *rhs);
  //Returns negative value if lhs appears before rhs in lexicographical order,
  //Zero if lhs and rhs compare equal.
  //and positive value if lhs appears after rhs in lexicographical order.
  /*std::cout << std::endl;
  std::cout << "std::strcmp : " <<std::endl;
  const char *string_data1 {"Alabama"};
  const char *string_data2 {"Blabama"};

  //Print out the comparison
  std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " 
            << std::strcmp(string_data1, string_data2) << std::endl;
  
  string_data1 = "Alabama";
  string_data2 = "Alabamb";

  // Print out the comparison
  std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " 
            << std::strcmp(string_data1, string_data2) << std::endl;
  
  string_data1 = "Alacama";
  string_data2 = "Alabama";
  // Print out the comparison
  std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " 
            << std::strcmp(string_data1, string_data2) << std::endl;

  //std::strncmp - signature : int strcmp ( const char *lhs, const char *rhs, std::size_t count);
  // Compares n characters in the strings
  //Returns : negative value if lhs appears before rhs in lexicographical order,
  //Zero if lhs and rhs compare equal, or if count is zero.
  //and positive value if lhs appears after rhs in lexicographical order.
  //Print out the comparison
  size_t n{3};
  std::cout << std::endl;
  std::cout << "std::strncmp : " << std::endl;
  std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
            << std::strncmp(string_data1, string_data2, n) << std::endl;

  string_data1 = "aaaia";
  string_data2 = "aaance";
  // Print out the comparison
  std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
            << std::strncmp(string_data1, string_data2, n) << std::endl;     
  */
  //str::strchr : find first occurance
  std::cout << std::endl;
  std::cout << "std::strchr : " << std::endl;
  //doc : https://en.cpprefeerence.com/w/cpp/string/byte/strchr

  //we use std::strchr to find all the characters one by one

  const char *str { "Try not. Do, or do not. There is no try."};
  char target = 'T';
  const char *result = str;
  int iterations{};

  while ((result = std::strchr(result, target)) != nullptr) {
    std::cout << "Found : '" << target 
              << "' starting at '" <<result << "'\n";

    // Increment result, otherwise we'll find target at same location
    ++result;
    ++iterations;
  }
  std::cout << "iterations : " << iterations << std::endl;

  //std::strrchr : find last occurance

  std::cout << std::endl;
  std::cout << "std::strrchr : " << std::endl;
  //doc : https://en.cpprefeerence.com/w/cpp/string/byte/strrchr

  char input [] = "/home/user/hello.cpp";
  char *output = std::strrchr(input, '/');
  if (output)
    std::cout << output+1 << std::endl;   //+1 because we want to start printing past
                                          // the character found by std::strrchr.
  return 0;
}