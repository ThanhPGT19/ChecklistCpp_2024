#include <iostream>
using namespace std;
class Base{
    private:
        string name = "Thanh";
    public:
        string id = "abcd1234";
    protected:
        string company="FPT";

};

class Derived : private Base {
    public:
    void run(){
        cout<< id << company << endl;
    }
};
class  Derived2: public Derived
{
public:
void run1(){
    cout<<id<<endl;
}
};


int main(){
    Derived obj1;
    obj1.run();
   // obj1.id;
    return 0;
}