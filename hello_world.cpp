#include <iostream>

int main()
{
    std::cout << "hello world"; // you can write a comment here
    return 0;
}

/* The Discetion

the include line tells the computer we would like to
use the contents of the io stream library which is part of the
cpp standard libarary. here it allows us to read and write to the console 
without this line std::cout and std::cin do not work

blank spaces are ignored by the compiler and helps for human readability

line 3 sets up the main function. the main function is required
for every cpp program to function oritwill fail to link. this function will 
produce a value whose type is an int (integer)

the {} brackets tell the computer the limitational boundries of the main function 
otherwise called the body

the first statement ran is std::cout which is character output "printing things in quotes"
the << operator allows us to display information on the console. 

then we have a return statement returning the value of 0. when a program finishes running
the program sends back a value to the os in order to indicatewhether it ran
sucessfully or not. this is also the final statement in our program.

*/
