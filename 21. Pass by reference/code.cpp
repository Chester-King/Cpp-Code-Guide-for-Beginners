#include <iostream>

using namespace std;

void ref2(int *n){
    cout << "Value before change in ref2 " << *n << endl;
    
    *n=9; // changing the value at the address which is pointed by the pointer
}
void ref1(int *n){
    ref2(n); // repassing the pointer to ref2
}

int main(){

    int k=5,*ka; // value of k is 5
    ka= &k;      // ka is a pointer variable that has the address of k

    cout << k << " is the value of k " << endl;

    ref1(ka); // passing the pointer

    cout << k << " is the value of k after calling refs" << endl;
    return 0;
}