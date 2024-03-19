#include <iostream>
#include <vector>
using namespace std;
class Vehicle
{
private:
    string model;

public:
    Vehicle(){};
    Vehicle(string m) : model(m)
    {
        cout << "This is Vehicle" << model << endl;
    };
    virtual void run()
    {
        cout << "Vehicle is running" << endl;
    }
};
class Car : public Vehicle
{
private:
    string name;
    int version;

public:
    Car(string nameofcar, int ver)
    {
        cout << "This is a " << nameofcar << endl;
        this->name = nameofcar;
        this->version = ver;
    }
    void run()
    {
        cout << name << " Version " << version << " is running" << endl;
    }
};
class ManagementCar
{
private:
    ManagementCar() {}
    static ManagementCar *ptManage;
    vector<Car *> listmanagecar;

public:
    static ManagementCar *newManger()
    {
        if (ptManage == NULL)
        {
            ptManage = new ManagementCar();
        }
        return ptManage;
    }
    void setlistmanage(Car *newCar)
    {
        listmanagecar.push_back(newCar);
    }
    void runCar()
    {
        for (auto x : listmanagecar)
        {
            x->run();
        }
    }
    ~ManagementCar()
    {
        cout << "DELETE" << endl;
    }
};
ManagementCar *ManagementCar ::ptManage = NULL;
int main()
{
    Car *car1 = new Car("RollRoyce", 2023);
    Car *car2 = new Car("Lamboghini", 2021);
    Car *car3 = new Car("Bentley", 2024);
    ManagementCar::newManger()->setlistmanage(car1);
    // cout<< ManagementCar::newManger() <<endl;
    ManagementCar::newManger()->setlistmanage(car2);
    // cout<< ManagementCar::newManger() <<endl;
    ManagementCar::newManger()->setlistmanage(car3);
    ManagementCar::newManger()->runCar();
    // cout<< ManagementCar::newManger() <<endl;
    delete ManagementCar::newManger();

    return 0;
}
