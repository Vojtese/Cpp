#include <iostream>
#include "compare.h"    //preprocessor


int main(int argc, char **argv){
   
    int a{3};
    int b{4};

    std::cout << "max(" << a <<", " << b << ") : " << max(a,b) << std::endl;

    return 0;
}

