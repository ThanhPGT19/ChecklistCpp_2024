// #include<iostream>

// class thanh{
//     public:
//     virtual void func1()=0;
// };

// class Phan :public thanh{
//     public:
//     void func1(){
//         std:: cout <<"Phan Thanh"<<std::endl;
//     }
//     virtual void Hi(){
//         std::cout<<"Hi"<<std::endl;
//     }
// };

// int main(){
//     thanh *pt = new Phan;

//     pt->func1();
//     pt->Hi();
//     return 0;
// }

// C++ code to demonstrate the working of 
// iterator, begin() and end() 
#include<iostream> 
#include<iterator> // for iterators 
#include<vector> // for vectors 
using namespace std; 
class caigi{
    public:
    virtual int func()=0;
};
class what_t:public caigi{

    public:
    what_t(int id){
        ID=id;
    }
    int ID;
    int func(){
        return ID;
    }
};
int main() 
{ 
	vector<caigi*> ar; 
	caigi *obj1 =new what_t(5);
    caigi *obj2 =new what_t(6);
    ar.push_back(obj1);
    ar.push_back(obj2);
	// Declaring iterator to a vector 
	vector<caigi*>::iterator ptr; 
	
	// Displaying vector elements using begin() and end() 
	cout << "The vector elements are : \n"; 
	for (ptr = ar.begin(); ptr != ar.end(); ptr++){ 
		int x =(*ptr)->func();
        cout<<x<<endl;
    }
	return 0;	 
} 
