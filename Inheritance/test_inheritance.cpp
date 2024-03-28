#include<iostream>

using namespace std;
class A{
    public:
    virtual void c() = 0;

};
class B : A {
    public:
    void c (){
        cout<<"ok"<<endl;
    }
};
 int main(){
    B b;
    return 0;
 }