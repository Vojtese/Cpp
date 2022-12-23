#include <iostream>
/**
  * @brief: Dynamic arrays
  * 
  **/

int main(){
  //Array dynamic allocation
  size_t size{10};

  //Different ways you can declare an array
  //dynamically and how they are initialized

  double *p_salaries {new double[size]};  //salaries array will contain garbage values

  int *p_students {new(std::nothrow) int[size]{}};  //All values initialized to 0 with braced initializer

  double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5}};  //allocating memory space
                                                                  // for an array of size double vars
                                                                  // width 1,2,3,4,5, and the
                                                                  // rest will be 0's
  
  //nullptr check and use the allocated array
  if(p_scores){
    //print out elements. Can use regular array access notation, or pointer arithmetic
    for ( size_t i{} ; i< size ; ++i){
      std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
    }
  }

  delete[] p_scores;
  p_scores = nullptr;

  delete[] p_students;
  p_students = nullptr;

  delete[] p_salaries;
  p_salaries = nullptr;

  //Pointers and arrays are different
  //pointers initialized with dynamic arrays are different form arrays : 
  // std::size doesn't work on them, and they don't support range based for loops

  double *temperatures = new double[size] {10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0};

  //std::cout << "std::size(temperatures) : " << std::size(temperatures) << std::endl;  //Error

  //Error : temperatures doesn't have properties that are needed for
  // the range based for loop to work
  for (double temp : temperatures){
    std::cout << "temperature : " << temp << std::endl;
  }

  // we say that the dynamically allocated array has decayed into a pointer, loses information

  return 0;
}