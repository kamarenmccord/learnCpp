//
// Created by tobi on 1/15/26.
//
#include <iostream>
#include <vector>
using namespace std;

int sort_array(int arr[], int n = ARRAY_LENGTH) {
    // get global arary and sort it in place using a method
    //note uses o(n^2) quadratic (dont use large array)
    for (i = 0; i<n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j<n; j++) {
            if (my_array[j] < my_array[min_idx]) {
                min_idx = j;
            }
        }

    }

    return 0;
}


int array_len() {
    //count each item using an o(n) method and return the int

    return 0;
}


int main() {
    // get an array of random numbers
    int ARRAY_LENGTH {25};
    vector<int> my_array {rand_generator(ARRAY_LENGTH)};

    // random array needs order
    sort_array(my_array, ARRAY_LENGTH);

    //array length was determined when generating it

    //pick a number and search the array

    //print index or let user know number does not exist

    return 0;
}