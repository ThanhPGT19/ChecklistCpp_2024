#include "vector.h"
int main(){
    vector <int> b;
    vector <int> a;
    b.push_back(1);
    b.push_back(2);
    a.push_back(5);
    a.push_back(6);
    a.push_back(8);
    a.insert(1,90);
    std::cout<<"Them Phan tu vao vector a______"<<std::endl;
    a.printvector();
    std::cout<<"Them Phan tu vao vector b_______"<<std::endl;
    b.printvector();
    std::cout<<"Gan b = a___in ra a"<<std::endl;
    b=a;
    a.printvector();
    std::cout<<"In ra b________"<<std::endl;
    b.printvector();

    //a.printvector();
   //make b.clear();
    return 0;
}
