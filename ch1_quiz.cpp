//
// Created by tobi on 1/14/26.
//
// Write a program that asks the user to enter a number, and then enter a second number. The program should tell
// the user what the result of adding and subtracting the two numbers is.
//

#include <iostream>

int sums(int num1, int num2) {
    return num1 + num2;
}

int subs(int num1, int num2) {
    return num1 - num2;
}

int newl() {
    std::cout << "\n";
    return 0;
}

int main() {

    int user_num1;
    int user_num2;

    std::cout << "Enter 1st number:\n> ";
    std::cin >> user_num1;
    newl();

    std::cout << "Enter 2nd number:\n> ";
    std::cin >> user_num2;
    newl();

    std::cout << user_num1 << " + " << user_num2 << " = " << sums(user_num1, user_num2);
    newl();
    std::cout << user_num1 << " - " << user_num2 << " = " << subs(user_num1, user_num2);

    return 0;
}