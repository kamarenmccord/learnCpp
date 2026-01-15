//
// Created by tobi on 1/14/26.
//
#include <iostream>

int multi_nums(int someNum, int multiplyer) {
    // if the number entered is not a number
    // 0 is defaulted
    return someNum * multiplyer;
}

int main() {
    // init vars
    int users_number1;
    int users_number2;

    //get user input
    std::cout << "enter 1st number\n";
    std::cin >> users_number1;

    std::cout << "enter 2nd number\n";
    std::cin >> users_number2;

    //print the results
    std::cout << users_number1 << " * " << users_number2 <<"\n"
        << "is: " << multi_nums(users_number1,users_number2);

    //compile succesfully
    return 0;
}

/*
 * could avoid assigning a second var by calling function in the final cout
 * could do the users_numb*2 and avoid using a function all together
 *
 */

// going foward //
// updating function to muitply from the command line, changing the output promt text