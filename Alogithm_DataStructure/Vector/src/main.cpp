#include "vector.h"
int main(){
    vector <int> a(4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(8);
    a.insert(1,90);
//    a.pop_back();
    vector <int> b=a;
    //b=a;
    a.printvector();
    std::cout<<"__________"<<std::endl;
    b.printvector();
    //a.printvector();
    return 0;
}
