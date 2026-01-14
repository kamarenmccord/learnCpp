//This program prints the C++ lang standard your computer is currently usingL, 
// learncpp.com tutorial 0.13

#include <iostream>

const int numStandards = 7;
//The C++26 stdCode is a placeholder since the exact code won't be determined until the standard isfinalized
const long stdCode[numStandards] = {199711L, 201103L, 201402L, 201703L, 202002L, 202302L, 202612L};
const char* stdName[numStandards] = {"Pre-C++11", "C++11", "C++14", "C++17", "C++20", "C++23", "C++26"};

long getCPPStandard()
{
    // Visual Studio is non-conforming in support for __cplusplus (unless you set a specific compiler flag, which you probably haven't)
    // In Visual Studio 2015 or newer we can use _MSVC_LANG instead
    // See https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/
#if defined (_MSVC_LANG) 
    return _MSVC_LANG;
#elif defined (_MSC_VER)
    // If we're using an older version of Visual Studio, bail out
    return -1;
#else
    return __cplusplus;
#endif
}

int main()
{
    long standard = getCPPStandard();
    if (standard == -1)
    {
        std::cout << "Error: unable to determine language standard\n";
        return 0;
    }
    for (int i=0; i<numStandards; ++i)
    {
        //if reported version is one of the finalezed standard codes
        //then we know exacly what version the compiler is running
        if (standard == stdCode[i])
        {
            std::cout << "your compiler is using " << stdName[i]
            << "(language standard code" << standard << "L)\n";
            break;
        }

        // if reported version is between 2 codes
        // this must be apreview / experimental support for the next version
        if (standard < stdCode[i])
        {
            std::cout << "Your compiler is using a preview/pre-release of " << stdName[i] << " (language standard code " << standard << "L)\n";
            break;
        }
    }
    return 0;
}