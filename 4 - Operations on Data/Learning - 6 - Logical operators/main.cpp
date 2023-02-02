#include <iostream>
/**
  * @brief: logical operators
  **/
int main(){

  bool a {true};
  bool b {false};
  bool c {true};

  std::cout << std::boolalpha;
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;
  std::cout << "c : " << c << std::endl;


  // AND true if none is false
  std::cout << std::endl;
  std::cout << "Basic AND operations" << std::endl;

  std::cout << "a && b : " << (a && b) << std::endl;
  std::cout << "a && c : " << (a && c) << std::endl;
  std::cout << "a && b && c : " << (a && b && c) << std::endl;

  // OR true if at least one is true
  std::cout << std::endl;
  std::cout << "Basic OR operations" << std::endl;

  std::cout << "a || b : " << (a || b) << std::endl;
  std::cout << "a || c : " << (a || c) << std::endl;
  std::cout << "a || b || c : " << (a || b || c) << std::endl;

  // NOT negates the value
  std::cout << std::endl;
  std::cout << "Basic NOT operations" << std::endl;

  std::cout << "!a : " << !a << std::endl;
  std::cout << "!b : " << !b << std::endl;
  std::cout << "!c : " << !c << std::endl;

  // combine logical operators
  std::cout << "!(a && b) || c : " << (!(a && b) || c) << std::endl;

  // logical and rational operators combined

  int d{45};
  int e{20};
  int f{11};

  std::cout << std::endl;
  std::cout << "Relational and logic operations on integers" << std::endl;
  std::cout << "d : " << d << std::endl;
  std::cout << "e : " << e << std::endl;
  std::cout << "f : " << f << std::endl;

  std::cout << std::endl;

  std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl;
  std::cout << "(d == e) || (e <= f) : " << ((d == e) || (e <= f)) << std::endl;
  std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl;
  std::cout << "(d > e) || (d < f) : " << ((d > e) || (d < f)) << std::endl;
  std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl;
  std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;
  std::cout << "(!a) && (d == e) : " << ((!a) && (d && e)) << std::endl;


  return 0;
}