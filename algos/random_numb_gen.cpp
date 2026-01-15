//
// Created by tobi on 1/14/26.
//
// make an arr with some random nums
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

//#define print

int main() {
    const int MIN_VAL = 1;
    const int MAX_VAL = 100;
    const size_t ARRAY_SIZE = 10;

    // use vector for dynamic sizing or array for fixed size
    vector<int> random_numbers(ARRAY_SIZE);

    //set up random number generation facilities
    random_device rd;
    mt19937 engine(rd());
    uniform_int_distribution<int> dist(MIN_VAL, MAX_VAL);

    // fill array with numbers using a loop or std::generate
    generate(random_numbers.begin(), random_numbers.end(), [&]() {
        return dist(engine);
    });

    // print numbers optional
//#ifndef print
    cout << "Generated random numb: " << endl;
    for (int number : random_numbers) {
        cout << number << " ";
    }
    cout << endl;
//#endif

}