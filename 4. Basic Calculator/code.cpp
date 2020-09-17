#include <iostream>

using namespace std;

int main(){

    int a,b,sum,dif,prod,div;

    cout << "Enter a number " << endl;
    cin >> a;

    cout << "Enter b number " << endl;
    cin >> b;

    sum = a+b;
    cout << "The sum is " << sum << endl;
    dif = a-b;
    cout << "The dif is " << dif << endl;
    prod = a*b;
    cout << "The prod is " << prod << endl;
    div = a/b;
    cout << "The div is " << div << endl;

    return 0;

}