// C++ program to show the working of vtable and vptr 
#include <iostream> 
using namespace std; 

class Base { 
public: 
	virtual void function1() 
	{ 
		cout << "Base function1()" << endl; 
	} 
	virtual void function2() 
	{ 
		cout << "Base function2()" << endl; 
	} 
	virtual void function3() 
	{ 
		cout << "Base function3()" << endl; 
	} 
}; 
class Derived1 : public Base { 
public: 
	void function1() : Base function1()
	{ 
		cout << "Derived1 function1()" << endl; 
	} 
}; 
class Derived2 : public Derived1 { 
public: 
	void function2() 
	{ 
		cout << "Derived2 function2()" << endl; 
	} 
}; 
int main() 
{ 
	// Base* ptr1 = new Base(); 
	// Base* ptr2 = new Derived1(); 
	// Base* ptr3 = new Derived2(); 
	// // calling all functions 
	// ptr1->function1(); 
	// ptr1->function2(); 
	// ptr1->function3(); 
	// ptr2->function1(); 
	// ptr2->function2(); 
	// ptr2->function3(); 
	// ptr3->function1(); 
	// ptr3->function2(); 
	// ptr3->function3(); 
    Base obj1;
    Derived1 obj2;
    ((Base)obj2).function3();
	return 0; 
}
