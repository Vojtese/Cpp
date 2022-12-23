#include <iostream>
/**
  * @brief: nullptr safety
  * 
  **/

int main(){
  
  // Verbose nullptr check
  int *p_num{}; // initialized nullptr through {}
  p_num = new int(7);
  /*if(!(p_num==nullptr)){
    std::cout << "p_num points to a VALID address : " << p_num << std::endl;
    std::cout << "*p_num : " << *p_num << std::endl;
  }else{
    std::cout << "p_num points to a INVALID address." << std::endl;
  }*/
  //Compact nullptr check
  if(p_num){
    std::cout << "p_num points to a VALID address : " << p_num << std::endl;
    std::cout << "*p_num : " << *p_num << std::endl;
  }else{
    std::cout << "p_num points to a INVALID address." << std::endl;
  }
  //Calling delete on a pointer containing nullptr\

  //Calling delete on a nullptr is OK
  int *p_num1 {};
  delete p_num1;  //This won't cause any problem
                  // if p_num1 contains nullptr

  // So no need to overdo something like
  /*if(p_num1) {
    delete p_num1;
    p_num1 = nullptr;
  }*/


  return 0;
}