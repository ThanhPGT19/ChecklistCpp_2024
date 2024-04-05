#ifndef A_H
#define A_H
#include<iostream>
#include "a.cpp"
class B{
    private:
    static int a;
    public:
    void func(){
        std:: cout<<"Hello "<<a<<std::endl;
        a++;
    }

};
int B::a=0;
// static void func1(){
//     std::cout<<"static func1111"<<std::endl;
// };

#endif