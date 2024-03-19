#include <iostream>
using namespace std;
class A{
    private:
    int *pt;
    public:
    A(A &&b){
        cout<< "Move constuctor"<<endl;
        b.pt=nullptr;
    }
    A(A &b){
        cout<< "constuctor"<<endl;
    }
    A(){}
    ~A(){
        cout<< "Destructor 1"<<endl;
    }
    void ok(){
        cout<< "OK"<<endl;
    }
};

int main(){
    A a;
    A b(A);
    b.ok();
    return 0;
}