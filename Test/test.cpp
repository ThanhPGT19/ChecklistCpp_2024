#include<iostream>
using namespace std;

class okchua{
public:
    okchua(){
        cout<< "CONstruc 1"<<endl;
    }
    ~okchua(){
        cout<< "Destruct 1"<<endl;
    }
private:
    int a;
};
class deonroi{
public:
    deonroi(){
        cout<< "construc 2"<<endl;
        }
        deonroi(deonroi &abc){
            cout<<"copy constructor 2 day nay"<<endl;
        }
        ~deonroi(){
            cout<< "Destruc 2"<<endl;
        }
private:
     int ok;
};
//okchua deonroi ::ok;
int main(){
    cout<<"Before"<<endl;
    if(1){
    deonroi deoon;
    deonroi deoon2=deoon;
    }
    cout<<"After"<<endl;
    return 0;
}