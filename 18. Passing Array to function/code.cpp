#include <iostream>

using namespace std;

void arrprint(int arr[],int n){

    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    

}


int main(){

    int ary[3]= {4,7,2};

    arrprint(ary,sizeof(ary)/sizeof(ary[0]));

    return 0;
}

