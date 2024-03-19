// #include <iostream>
// using namespace std;
 
// class A{
//    int a;      // 4 bytes
// }instanceA;
// class B: virtual public A{
//    int a;     // 4 bytes
// }instanceB;
// // class D: public B{
// //    int a;   // 4 bytes
// //    char x;
// //    char y[7];
// //    char z;
// // }instanceD;
// class C:virtual public A{
//    int a;      // 4 bytes
// }instanceC; 
// class ABCD:public C, public B {
//    int a; 
//    // 4 bytes
// };
 
// int main() {
//    ABCD obj;
//    cout << sizeof(instanceA) << endl;
//    cout << sizeof(instanceB) << endl;
//    //cout << sizeof(instanceD) << endl;
//    cout << sizeof(instanceC) << endl;
//    cout << sizeof(obj) << endl;
//    return 0;
// }
#include <iostream>
class A{

};

class B:public virtual A{
   int a;
};

class C: public virtual  A{
   int c;  
   };

class D:public virtual A{
   int y;
};
class F:public virtual A{
   int z;
};
class E: public B, public C,public D, public F{
   int d;
};
int main(){
   A a; 
   B b;
   C c;
   E d;
   std:: cout<< sizeof(a)<<"\n";
   std:: cout<< sizeof(b)<<"\n";
   std:: cout<< sizeof(c)<<"\n";
   std:: cout<< sizeof(d)<<"\n";
   return 0;   
}