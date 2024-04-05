#include<iostream>

class Single_ton{
    private:
    Single_ton(){
        std::cout<<"Hello im constructor of Singleton!!!"<<std::endl;
    }
    static Single_ton * obj;
    Single_ton(const Single_ton&){};
    public:
    static Single_ton &Create_OBJ_singleTon();
    void func(){
        std:: cout<< "Created OBJ of SingleTon Successfull"<<std::endl;
    }
};

Single_ton* Single_ton :: obj =NULL;
Single_ton& Single_ton ::Create_OBJ_singleTon(){
    if(obj==NULL){
        obj = new Single_ton();
    }
    return *obj;
}

int main(){

    Single_ton ::Create_OBJ_singleTon().func();
    //Single_ton obj = Single_ton(Single_ton ::Create_OBJ_singleTon());
    //obj.func();

}