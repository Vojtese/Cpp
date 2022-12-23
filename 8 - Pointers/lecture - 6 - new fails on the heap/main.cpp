#include <iostream>
/**
  * @brief: New fails
  * 
  **/

int main(){
  
  // Simulating memory allocaction failure
  //try to allocate a insanely huge array in one go
  //unhandled new failure : crash
  int *lots_of_ints1 {new int[100000000000000000]}; // may give an error about eceeding array size

  // use a huge loop to try and exhaust the memory capabilities
  // of your system. When new fails, your program is going to forcefuly termiante

  for(size_t i{} ; i < 10000000000 ; ++i){
    int *lots_of_ints2 { new int[1000000]};
  }

  // Handling the exception

  // Handle the problem in a way that makes sense for your application
  // for example if you were trying to allocate memotry to store color information
  // for your application, and allocation fails, you could opt for showing some
  // feedback message to the user, and rendering your app in balkc/white

  for (size_t i{} ; i < 1000000000000 ; ++i){
    try{
      int *lots_of_int3 {new int[10000000]};
    }catch(std::exception& ex){
      std::cout << "Cought exception ourselves : " << ex.what() << std::endl;
    }
  }

  //std::nothrow : ideal if you don't want exceptions thrown when new fails
  for (size_t i{} ; i < 100000000000 ; ++i){
    int *lots_of_int4 {new(std::nothrow) int[1000000]};

    if(lots_of_int4 == nullptr){
      //Don't try to dereference and use lots_of_int4 in here
      // you'll get UB. No memory has really been allocated here
      // It failed and returned nullptr because of the std::nothrow setting
      std::cout << "Memory allocation failed"  << std::endl;
    }else{
      std::cout << "Memory allocation succeeded" << std::endl;
    }
  }

  return 0;
}