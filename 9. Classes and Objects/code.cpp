#include <iostream>

using namespace std;

// Defining class
class PrintMessage{

    public: // access specifier
        void msg1(){
            cout << "This is msg1" << endl;
        }
        void msg2(){
            cout << "This is msg2" << endl;
        }

};

int main(){

    PrintMessage obj1; // creating object
    // calling methods
    obj1.msg1();
    obj1.msg2();

    return 0;
}

