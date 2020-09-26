#include <iostream>

using namespace std;

int main(){

    // sizeof is used to find the size of any variable in bytes

    // this can be used to find the number of elements in an array

    int ary[13];

    int n= sizeof(ary)/sizeof(ary[0]);

    cout << "Number of elements in ary are : " << n << endl; 

    return 0;
}