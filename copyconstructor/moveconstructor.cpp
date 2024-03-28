#include <iostream>
#include <memory>
using namespace std;
class Array
{
private:
	unique_ptr<int> pt;
	int a;
public:
	Array(int n,int va)
	{
		cout<<"Hello constructor"<<endl;
		pt = std::make_unique<int>(n);
		a= va;
		cout << a<< endl;
	}

	void getPointer()
	{
		std::cout << pt.get() << std::endl;
	}
	Array(Array &value){
		cout<< "Copy constructor!!"<<endl;
		this->pt = value.pt;
		value.pt = nullptr;
	}
	Array(Array&& value)
	{
		cout<< "Move constructor"<<endl;
		this->a=value.a;
		this->pt = std::unique_ptr<int>(move(value.pt));
	}
	void getter2(){
		cout <<a<<endl;
	}
	void cao(){
		cout<< "ok"<<endl;
	}
};

int main()
{
	Array b(6,8);
	b.getPointer();
	Array a(move(b));
	Array a(5,4);

	//Array c(b);
	//Array c(b);
	//Array obj1(static_cast<Array&&>(b));
	// b.getter1();
	// c.getter1();
	int ref = 4;
	int &lRef = ref;
	int&& a = lRef;
	a.getPointer();
	return 0;
}