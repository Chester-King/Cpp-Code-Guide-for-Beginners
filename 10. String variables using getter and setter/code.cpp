#include <iostream>
#include <string>

using namespace std;

class Sclass{

    public:
        void setVar(string s){
            var=s;
        }
        string getVar(){
            return var;
        }


    private:

        string var;

};

int main(){

    Sclass obj;
    cout << obj.getVar() << endl; // Nothing gets printed
    obj.setVar("This is a String");
    cout << obj.getVar() << endl;


    return 0;

}