#include <iostream>

using namespace std;

int main(){

    int mda[2][3] = {{2,3,4},{5,9,4}};

    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << mda[x][y] << " " ;
        }
        cout << endl;
        
    }
    

    return 0;
}