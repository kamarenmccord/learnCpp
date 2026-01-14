#include <iostream>

int intOut(int intext){
    // function to print new line when using cout
    std::cout << intext << "\n";
    return 0;
}

int doubleOut(double intext){
    // function to print new line when using cout
    std::cout << intext << "\n";
    return 0;
}

int forFun(){
    //some math physics values
    double pi {3.14159};
    double gravity {9.8};
    double phi {1.61803};

    doubleOut(pi);
    doubleOut(gravity);
    doubleOut(phi);
    return 0;
}

int main()
{
    int width {5}; //set width to a integer

    intOut(width);
    width = 7; //change value

    intOut(width);

    // width 0 when forFun returns
    width = forFun();
    intOut(width);

    return 0;
}