//
// Created by tobi on 1/31/26.
//

#include <iostream>
using namespace std;

int readNumber() {
    int number_input;
    cin >> number_input;

    return number_input;
}

int writeAnswer(int n1, int n2) {

    int answer = n1 + n2;
    cout << "Okay, so I have added these numbers together and get:\n>" << answer << endl;

    return 0;
}