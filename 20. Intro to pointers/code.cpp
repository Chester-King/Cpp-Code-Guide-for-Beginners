#include <iostream>

using namespace std;

int main(){

    int a = 7;

    cout << &a << " This is the memory which holds the value 7" << endl; // &a shows memory of variable a
    
    int *am; // Pointers are used to store memory values

    am= &a; // now am has the memory value of a

    cout << am << " This contains the memory value of a" << endl;

    // the above two should print the same memory address

    return 0;
}