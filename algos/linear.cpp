//
// Created by tobi on 1/14/26.
//
// an example on doing linear search

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> & arr, int x) {
    // iterate over the array in order
    // find the key x is located

    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == x) return i;
    return -1;
}

int main() {
    vector<int> arr = {2, 3, 4, 10, 40};
    int x {10};
    int res = search(arr,x);

    if (res == -1)
        cout << "element is not present in the array";
    else
        cout << "element is present at index " << res;
    return 0;
}