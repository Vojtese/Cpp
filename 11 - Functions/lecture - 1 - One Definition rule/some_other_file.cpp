
//Variable : declaration and definition, we cant have more definitions of such variable
//double weight {};   // linker error to main.cpp
/*double add(double a, double b){ // linker error
  return a + b;
}*/
/*struct Point    // multiple definitions, linker error
{
  double m_x;
  double m_y;
};*/

/*int Person::person_count = 8;   // init static variable

Person::Person(const std::string &names_param, int age_param)
    : full_name{names_param}, age{age_param}{
        ++person_count;
    }*/
#include "person.h"

//double weight {};






double add(double a, double b){
    return a + b;
}

int Person::person_count = 8;

Person::Person(const std::string& names_param, int age_param)
    : full_name{names_param}, age{age_param}{
        ++person_count;
}