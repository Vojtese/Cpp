#include <iostream>
/**
  * @brief: difference between pointers and references
  * 
  **/

int main(){
  
  //Declaration and reading
  double double_val {12.34};

  double &ref_double_val {double_val};  //Reference to double_val
  double *p_double_val {&double_val};   //Pointer to double_val

  //Reading
  std::cout << "double_val : " << double_val << std::endl;
  std::cout << "ref_double_val : " << ref_double_val << std::endl;  // dont need to go through dereferencing and *
  std::cout << "p_double_val : " << p_double_val << std::endl;
  std::cout << "*p_double_val : " << *p_double_val << std::endl;  // dereferencing

  // Writing
  std::cout << std::endl;
  std::cout << "Writing through pointer : " << std::endl;

  *p_double_val = 15.44;
  std::cout << std::endl;
  std::cout << "double_val : " << double_val << std::endl;
  std::cout << "ref_double_val : " << ref_double_val << std::endl;  // dont need to go through dereferencing and *
  std::cout << "p_double_val : " << p_double_val << std::endl;
  std::cout << "*p_double_val : " << *p_double_val << std::endl;

  // Writing through refeence

  ref_double_val = 18.44;
  std::cout << std::endl;
  std::cout << "double_val : " << double_val << std::endl;
  std::cout << "ref_double_val : " << ref_double_val << std::endl;  // dont need to go through dereferencing and *
  std::cout << "p_double_val : " << p_double_val << std::endl;
  std::cout << "*p_double_val : " << *p_double_val << std::endl;

  // Can't make a reference refer to something else
  double other_double_val {100.23};

  //This works, but it doesn't make ref_double_val reference other_double_val
  //it merely changes the value referenced by ref_double_val to 100.23
  //visualize this in slides
  ref_double_val = other_double_val;

  // If change ref_double_val now, other_double_val stays the same
  // proving that ref_double-val is not referencing other_double_val;
  ref_double_val = 333.33; 
  std::cout << std::endl;
  std::cout << "double_val : " << double_val << std::endl;
  std::cout << "ref_double_val : " << ref_double_val << std::endl;  // dont need to go through dereferencing and *
  std::cout << "p_double_val : " << p_double_val << std::endl;
  std::cout << "*p_double_val : " << *p_double_val << std::endl;
  std::cout << "other_double-val : "<< other_double_val << std::endl;

  // A pointer can point somewhere else
  std::cout << std::endl;
  std::cout << "A pointer can point somewhere else : " << std::endl;

  p_double_val = &other_double_val;
  std::cout << std::endl;
  std::cout << "double_val : " << double_val << std::endl;
  std::cout << "ref_double_val : " << ref_double_val << std::endl;  // dont need to go through dereferencing and *
  std::cout << "p_double_val : " << p_double_val << std::endl;
  std::cout << "*p_double_val : " << *p_double_val << std::endl;
  std::cout << "other_double-val : "<< other_double_val << std::endl;

  *p_double_val = 555.66;
  std::cout << std::endl;
  std::cout << "double_val : " << double_val << std::endl;
  std::cout << "ref_double_val : " << ref_double_val << std::endl;  // dont need to go through dereferencing and *
  std::cout << "p_double_val : " << p_double_val << std::endl;
  std::cout << "*p_double_val : " << *p_double_val << std::endl;
  std::cout << "other_double-val : "<< other_double_val << std::endl;

  // References are somewhat like const pointers
  //References behave like constant pointers, but they have
  // a much friendlier syntax as they don't require dereferencing
  // to read and write through referenced data

  double *const const_p_double_val {&double_val};

  //const_p_double_val = &other_double_val;   //error


  return 0;
}