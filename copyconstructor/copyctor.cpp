#include <iostream>
#include <string>
using namespace std;

class Ctor
{
protected:
    int c=5;
private:
    int *pt;
    int value;
    string s;

public:
//int c=5;
    Ctor()
    {
        cout << "Default Constructor" << endl;
    }
    Ctor(int val, string s)
    {
        cout << "Hello constuctor\n";
        pt = new int;
        *pt =99;
        value = val;
        this->s = s;
    }
    Ctor(Ctor &con)
    {
        cout << "Hello Shallow copy constuctor\n";
        this->pt = con.pt;
        this->value = con.value;
        this->s = con.s;
    }
    Ctor(Ctor &con,int val1)
    {
        cout << "Hello Deep copy constuctor\n";
        this->pt = new int;
         val1 = *(con.pt);
        *(this->pt) = val1;
        this->value = con.value;
        this->s = con.s;
    }
    ~Ctor(){
        delete this->pt;
    }
    void getTT()
    {
        cout << this->s << " " << this->value<<" "<<(this->pt)<<" "<<*(this->pt)<<endl;
    }
    void setter(string news){
        this->s =news;
    }
};
class con : public Ctor{
    public:
    int tesst (){
        cout<< c <<endl;
        return 0;
    }
};
int main()
{
    // Ctor ob1(7, "OBJ1");
    // Ctor ob2 = ob1;//Shallow copy
    // Ctor ob3(ob1,1);//Deep copy
    // ob2.setter("OBJ2");
    // ob3.setter("OBJ3");
    // ob1.getTT();
    // ob2.getTT();
    // ob3.getTT();
    // con con1;
    // con1.tesst();
    // Ctor *pt1 =new Ctor(5,"THANH");
    // //Ctor *pt2 = new Ctor(*pt1);
    // Ctor pt2 (*pt1);
    // cout<< pt1 <<endl<<&pt2<<endl;
    // pt1->getTT();
    // pt2.getTT();
    // delete pt1;
    // pt2.getTT();
    // pt1->getTT();
    Ctor ob1(5,"HELOO");
    int i=5;
    ob1.getTT();
    if(i=5){Ctor ob2 = ob1;
    ob2.getTT();}
    ob1.getTT();

    return 0;
}
