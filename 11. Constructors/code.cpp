#include <iostream>
#include <string>

using namespace std;

class Sclass{

    public:
        Sclass(string sval){

            setVar(sval);

        }

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

    Sclass obj("This is a String");
    cout << obj.getVar() << endl;


    return 0;

}