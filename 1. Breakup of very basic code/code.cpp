#include <iostream> // Pre Processor Directive - Including a file in out program. In this case including iostream

using namespace std; // We are going to use std library 

int main() // The entire thing under this main block is inside a function. Cpp code always starts with the main function
// here int is the return type and main is function name. Every line ends with a ;
{
    cout << "Hello world!"; // cout is an output stream object. << is a stream insertion operator. endl means go to the next line. 

    return 0; // Main function should always have return 0. If the program gets to return 0 then it means that your program ran successfully.
}