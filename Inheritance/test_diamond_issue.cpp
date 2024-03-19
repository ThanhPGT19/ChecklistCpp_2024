#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void checkadd(){
        cout<< &a<<endl;
    }
};
class B:virtual public A  {
    public:
    void cheking(){
        checkadd();
    }
};
class C: virtual public A  {
    public:
    void cheking(){
        checkadd();
    }
};
class D: public B, public C{
    public:
    void checker(){
        checkadd();
    }
};
int main(){
    A a;
    B b;
    C c;
    D d;
    a.checkadd();
    b.cheking();
    c.cheking();
    d.checker();
    return 0;
}