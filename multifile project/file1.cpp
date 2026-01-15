//
// Created by tobi on 1/14/26.
//

#include <iostream>
#include "common.h"


//using a forward declaration we can ref the function located in file2.cpp
int add(int x, int y);

int main() {
    std::cout << "sum of 3 & 4 is: " << add(3,4) << "\n";
    std::cout << "color Blue is " << BLUE;
    return 0;

}