#include <iostream>

int main(){
    std::cout << "Hello" << " world\n";
    std::cout << 4 << std::endl;
    int x {5};
    std::cout << "X is equal to " << x << std::endl;

    char someNum[5];
    std::cout << "enter a number \n";
    std::cin >> someNum;
    std::cout << "you entered " << someNum;
    
    return 0;
}

/*

std::endl is inefficent as it does 2 jobs
output a newline
and flushes the buffer (slow)

cpp periodically flushes the buffer anyways so its
more efficient to let it flush itself automatically

using \n will only move the cursor to a newline


*/