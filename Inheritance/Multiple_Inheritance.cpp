#include <iostream>
using namespace std;
class Vehicle {
public:
	Vehicle() { cout << "Constructor of Vehicle\n"; }
	// ~Vehicle(){cout<< "Destructor of Vehicle\n";}
};
class FourWheeler {
public:
	FourWheeler(){cout << "Constructor of 4 wheeler Vehicle\n";}
	//virtual ~FourWheeler(){cout << "Destructor of 4 wheeler Vehicle\n";}
};
class Car : public Vehicle,public FourWheeler{
	public:
	Car(){cout<<"Constructor of Car\n";}   
	//~Car(){cout<<"Destructor of Car\n";}   
};
int main()
{
	Vehicle *car1 = new Car;
	return 0;
}
