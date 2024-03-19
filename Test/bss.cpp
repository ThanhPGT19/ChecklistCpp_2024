#include<iostream>
#include <vector>
using namespace std;
class  A
{
private:
    int a;
public:
     A(int B):a(B){
        cout<<"CONstructor"<<endl;
     };
    A(A const &obj){
        cout<<"COPYY"<<endl;
     }
     A(A &&obj){
        cout<<"MOVEEE"<<endl;
     }
    ~ A(){cout<<"Destructor "<<a<< endl;}
};


int main(){
    vector <A> vec;
    A obj1(9);
    vec.push_back(A(5));
    vec.push_back(obj1);
    vec.push_back(A(1));
return 0;
}