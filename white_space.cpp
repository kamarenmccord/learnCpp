//
// Created by tobi on 1/14/26.
//

//preprocessor directives
#include <iostream>
#include <string> //preprocessor directives must be delared on sepetrate new lines like this

int print(std::string myString = "Default text") {
    std::cout << myString << "\n";
    return 0;
}


//this example is valid but can be difficult to read
int crammed_example(){std::cout<<"Hello world\n";return 0;}

int main() {
    /* Notes
  when whitespace is required ex in int x (not intx) the compiler does not care how much
  white space is used.
    */

    // these are all valid delcarations
    int x;
    int         y;
    int
        z;

    // inside a string whitespace is taken literally as expected
    std::cout << "Hello world!\n";
    std::cout << "Hello   world!\n";

    //prints Hello world! not Hello \nworld!
    std::cout << "Hello "
    "world!\n";

    crammed_example();

    //statements can also be split over multple lines for example
    std::cout
        << "Hello world\n";

    //note i got tired of typing cout so im making a function called print
    print("Hello world");

    //math
    //operators should be placed on the newline
    std::cout << 3 + 4
        * 2 + 11
        + 34 + 22;

    return 0;
}