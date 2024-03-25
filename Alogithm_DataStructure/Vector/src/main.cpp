#include "vector.h"
int main(){
    vector <int> a;
    vector <int> b;
    b.push_back(1);
    b.push_back(2);
    a.push_back(5);
    a.push_back(6);
    a.push_back(8);
    a.insert(1,90);
    std::cout<<"__________"<<std::endl;
    a.printvector();
    std::cout<<"__________"<<std::endl;
    b.printvector();
    std::cout<<"__________"<<std::endl;
    b=a;
    a.printvector();
    std::cout<<"__________"<<std::endl;
    b.printvector();
    //a.printvector();
    return 0;
}
