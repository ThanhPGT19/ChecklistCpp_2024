#include<iostream>
using namespace std;
class Employee {
  private:
    // Data members
    int salary, experience; 
    static int count;
    int ID;
  public:
    // Parameterized constructor
    Employee(int x1, int y1) : salary{x1},experience{y1} { 
      cout<< "Para constructor"<<endl;
      count++;
      ID = count;
    }
    //Copy constructor
    Employee(const Employee &new_employee) {
      salary = new_employee.salary;
      experience = new_employee.experience;
    }

    void display() {
      cout << "Salary: " << salary << endl;
      cout << "Years of experience: " << experience << endl;
    }
    ~Employee(){
        cout<<"Destructor here!!!! ID: "<< ID <<endl;
    }

};//Employee_t(11,22);
int Employee::count = 0;
// Employee &newFunc(Employee &e, int kn, int l){
//     e.setter(kn,l);
//     return e;    
// }
class Calc
{
private:
    int m_value = 0;
 
public:
    Calc(int value=0): m_value(value) {}
 
    Calc& add(int value) { m_value  += value;  return *this; }
    Calc& sub(int value) { m_value -= value;  return *this; }
    Calc& mult(int value) { m_value *= value;  return *this; }
 
    int getValue() { return m_value ; }
};

int main() {
Calc *c =new Calc;
int res=c->getValue();
cout<< res<<endl;
c->add(5);
res=c->getValue();
cout<< res<<endl;
return 0;
}
