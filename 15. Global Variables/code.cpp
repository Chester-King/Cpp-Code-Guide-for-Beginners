#include <iostream>

using namespace std;

int k=4;

int main(){

    int k=5;
    cout << ::k << endl; // Accessing global k using unary operator. Prints 4
    cout << k << endl; // Accessing local k. Prints 5


}