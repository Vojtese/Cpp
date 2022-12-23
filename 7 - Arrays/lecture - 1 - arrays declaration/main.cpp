#include <iostream>
/**
  * @brief: arrays declaration
  **/

int main(){
  
  // declaring an array
  int scores[10];
  // reading values
  std::cout << std::endl;
  std::cout << "Reading out score values (manually) : " << std::endl;
  std::cout << "scores[0] : " << scores[0] << std::endl;
  std::cout << "scores[1] : " << scores[1] << std::endl;
  //...
  std::cout << "scores[9] : " << scores[9] << std::endl;
  // array has clear boundaries from 0-9, outside has garbage or failure, we dont know what data memory we want to access
  // writing data to an array
  scores[0] = 20;
  scores[1] = 21;
  scores[2] = 22;
  //writing out of bounds BAD
  scores[22] = 300;

  std::cout << std::endl;
  std::cout << "Manually writing data in array : " << std::endl;
  for ( size_t i{0} ; i < 10 ; ++i){
    std::cout << "scores[" << i << "] : " << scores[i] << std::endl; 
  }


  std::cout << std::endl;
  std::cout << "Writing data in array with loop : " << std::endl;

  // write data
  for ( size_t i{0} ; i < 10 ; ++i){
    scores[i] = i *3;
  }

  // read out the data 
  for ( size_t i{0} ; i < 10 ; ++i){
    std::cout << "scores2[" << i << "] : " << scores[i] << std::endl; 
  }

  // initialize the array at declaration
  std::cout << std::endl;
  std::cout << "Declare and initialize at the same time : " << std::endl;

  double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

  // read out the data 
  for ( size_t i{0} ; i < 5 ; ++i){
    std::cout << "salary[" << i << "] : " << salaries[i] << std::endl; 
  }

  std::cout << "size of an int array : " << sizeof(scores) << std::endl;
  std::cout << "size of a double array : " << sizeof(salaries) << std::endl;

  // omitting the size of an array at declaration
  int class_sizes[] {10, 12, 15, 11, 18, 17, 22};

  for (auto value : class_sizes){ // range based for loop
    std::cout << "value : " << value << std::endl;
  }

  // constant arrays, can't be modified
  //const int multipliers [] { 22, 30, 15};
 // multipliers[1] = 20;

  //sum up scores array, store result in sum
  int sum {0};

  for ( int element : class_sizes){
    sum += element;
  }
  std::cout << "Score sum : " << sum << std::endl;

  return 0;
}