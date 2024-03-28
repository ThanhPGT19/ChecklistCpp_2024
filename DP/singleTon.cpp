#include <iostream>
#include <vector>
using namespace std;
class Car
{
private:
    string name;
    string version;

public:
    Car(string n, string v){
        cout<< "Constructor"<<endl;
        this->name = n;
        this->version =v;
    }
    void run(){
        cout<< this->name+ " " <<this->version <<" is running"<<endl;
    }
};
class NewManager
{
public:
    static NewManager *create_singleton()
    {
        if (QuanLy == NULL)
        {
            QuanLy = new NewManager();
        }
        return QuanLy;
    }
    void set_list_car(Car *c){
        List_car.push_back(c);
    }
    void run_list_car(){
        for(auto x : List_car){
            x->run();
        }
    }

private:
    static NewManager *QuanLy;
    vector <Car*> List_car;
};
NewManager *NewManager ::QuanLy = NULL;
int main()
{
    Car *c1 =new Car("Kia Morning","2021");
    Car *c2 =new Car("Mercedez","2024");
    Car *c3 =new Car("Porsche","2023");
    NewManager ::create_singleton()->set_list_car(c1);
    NewManager ::create_singleton()->set_list_car(c2);
    NewManager ::create_singleton()->set_list_car(c3);
    NewManager ::create_singleton()->run_list_car();
    return 0;
}