#include <iostream>
/**
  * @brief: memory leaks
  * 
  **/

int main(){
  
  // Reassignment to stack address to active dynamic address pointer
  int *p_num {new int{67}};

  //Should delte and reset HERE

  int num{55};

  p_num = &num; // Now p_num points to address2, but address1 is still in use by our program
                // But our program has lost access to that memory location. Memory has been leaked.

  // Double allocation
  int *p_num1 {new int{55}};

  // use the pointer

  // should delete and reset here

  p_num1 = new int{44}; //memory with in{55} leaked

  //Pointer in a local scope
  {
    int *p_num2 {new int{57}};
  }// Memory with int{57} leaked, the pointer outside the scope dies, but the dynamic memory will not die and we lost access


  // Memory leaks are bad and we should avoid that --DELETE and RESET

  return 0;
}