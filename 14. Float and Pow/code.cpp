#include <iostream>
#include <cmath>

using namespace std;


int main(){

    float a,p=10000,r=0.03;

    for(int day=0;day<=30;day++){
        a= p*pow(1+r,day);
        cout << day << "---" << a << endl;
    }

    return 0;
}