#include <iostream>

int max(int a, int b);  // Declaration  - prototype - before definition

int main(int argc, char **argv){
   
    int a{3};
    int b{4};

    std::cout << "max(" << a <<", " << b << ") : " << max(a,b) << std::endl;

    return 0;
}

int max(int a, int b){  // Definition
    if(a>b){
        return a;
    }else{
        return b;
    }
}
