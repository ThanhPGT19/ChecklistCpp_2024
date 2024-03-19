#include<iostream>
using namespace std;
    class Test1 { 
        const int x=188;
    public: 
        Test1() : x(100){}
        //Test1() { cout << "Test1::Test1()" << endl; } 
        virtual void ok() {
            cout<<x<<endl;
        };
    }; 
    class Test2 :public Test1 { 
    public: 
    }; 
int main(){
    Test1 a;
    a.ok();
    return 0;
}