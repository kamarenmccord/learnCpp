//
// Created by tobi on 1/31/26.
//

/*
Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer()
live in a separate file called “io.cpp”. Use a forward declaration to access them from main().

If you’re having problems, make sure “io.cpp” is properly added to your project so it gets compiled.

 */

#include <iostream>
#include "io.cpp"

using namespace std;

int readNumber();

int writeAnswer(int n1, int n2);

int main() {
    int user_num1;
    int user_num2;

    cout << "Enter a Number: " << endl;
    user_num1 = readNumber();

    cout << "\nEnter another number: " << endl;
    user_num2 = readNumber();

    writeAnswer(user_num1, user_num2);

    return 0;
}