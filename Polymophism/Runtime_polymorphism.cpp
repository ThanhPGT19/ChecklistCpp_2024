#include <iostream>
using namespace std;
class Base{
    int c = 9;
    public:
    Base(){
        cout<<"Constructor from BASE"<<endl;
    }
    virtual void Hello (){
        cout << "Hello form BASE "<<endl;
    }
    virtual void tet(){
        cout<< "HOLIDAY"<<endl;
    }
    ~Base (){
        cout<< "Destructor from BASE"<<endl;
    }
};
class Derived : public Base{
    public:
    Derived(){
        cout<<"Constructor from DERIVED"<<endl;
    }
    void Hello(){
        cout<<"Hello from Derived" <<endl;
    }
    void tet(){
        cout<< "HOLIDAY from Derived"<<endl;
    }
    ~Derived(){
        cout<< "Destructor form Derived"<<endl;
    }
};
int main(){
    Base *pt = new Base;
    cout<< "_________"<<endl;
    pt->tet();
    //obj1.t();
    // delete pt;
    return 0;
}