#include <iostream>
using namespace std;
static int count = 0;
class A
{
public:
   A()
   {
       count++;
       x = count;
       cout << "Constructor A " << x << endl;
   }
   ~A()
   {
       cout << "Destructor A " << x << endl;
   }

private:
   int x=0;
};
class B
{
public:
//    A &test()
//    {
//        // count ++;
//        cout << &a << endl;
//        return a;
//    }
      A test()
   {
       // count ++;
       cout << &a << endl;
       return a;
   }
   B()
   {
       cout << "Constructor B " << endl;
   }
   ~B()
   {
       cout << "Destructor B" << endl;
   }

private:
    //static A a;
    A a;
};
//A B::a;
int main()
{
   cout<< "Before"<<endl;
   if(1){
   B obj1;
   //A &obj2 = obj1.test(); // shift + alt +F
   A obj2 = obj1.test(); 
   cout << &obj2 << endl;
   }
   cout<< "After"<<endl;
   return 0;
}