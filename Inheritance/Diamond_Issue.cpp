#include<iostream>
using namespace std;

class A
{
int x;
public:
A(){ cout<<"Constructor of A"<<endl;}
void setX(int i) {x = i;}
void print() { cout << x; }
};

class B: virtual public A
{
public:
//B(){ cout<<"Constructor of B"<<endl;}
B() {
    cout<<"Constructor of B"<<endl; 
    setX(10); }
};

class C:virtual public A 
{
public:
//C(){ cout<<"Constructor of C"<<endl;}
C() {
    cout<<"Constructor of C"<<endl; 
    setX(20); }
};

class D: public C, public B {
};

int main()
{
	D d;
	d.print();
	return 0;
}
