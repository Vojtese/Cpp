#include <iostream>
/**
  * @brief: playing with variables
  **/
int main(){

   /*int garbageVariable;

    int var1 { 10 };

    std::cout << "sizeof int : " << sizeof(int) << std::endl;   // in bztes, one byte = 8 bits
    std::cout << "garbageVariable : " << garbageVariable << std::endl;*/

    // Functional init
    /*
    int appleCount(5);
    int orangeCount(10);
    int fruitCount( appleCount + orangeCount );

    int narrowingConversionFunctional (2.9);        // braced initializer will not allow to store some rational number to the integer number


    std::cout << "apple count : " << appleCount << std::endl;   // in bztes, one byte = 8 bits
    std::cout << "orange count : " << orangeCount << std::endl;
    std::cout << "fruitCount : " << fruitCount << std::endl;   // in bztes, one byte = 8 bits
    std::cout << "narrowingConversionFunctional : " << narrowingConversionFunctional << std::endl;
    */

    int bikeCount = 2;
    int truckCount = 7;
    int vehicleCount = bikeCount + truckCount;
    int narrowingConversionAssignment = 2.9;

    std::cout << "bike count : " << bikeCount << std::endl;   // in bztes, one byte = 8 bits
    std::cout << "truck count : " << truckCount << std::endl;
    std::cout << "vehicleCount : " << vehicleCount << std::endl;   // in bztes, one byte = 8 bits
    std::cout << "narrowingConversionAssignment : " << narrowingConversionAssignment << std::endl;


    std::cout << "sizeof int : " << sizeof(int) << std::endl;   // in bztes, one byte = 8 bits
    std::cout << "size of truckCount : " << sizeof(truckCount) << std::endl;

    return 0;
}