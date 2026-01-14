//
// Created by tobi on 1/14/26.
//
#include <iostream>

int muilt_two(int someNum) {
    // if the number entered is not a number
    // 0 is defaulted
    return someNum * 2;
}

int main() {
    // init vars
    int users_number;
    int number_double;

    //get user input
    std::cout << "enter a number\n";
    std::cin >> users_number;

    //multiply by 2 using function
    number_double = muilt_two(users_number);

    //print the results
    std::cout << "this number times 2 is " << number_double;

    //compile succesfully
    return 0;
}