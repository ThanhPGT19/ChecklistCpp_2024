#include<iostream>
// Eager Single_ton
class Single_ton{
    private:
    Single_ton(){
        std::cout<<"Hello im constructor of Singleton!!!"<<std::endl;
    }
    static Single_ton obj;
    Single_ton(const Single_ton&){};
    public:
    static Single_ton &Create_OBJ_singleTon();
    void func(){
        std:: cout<< "Created OBJ of SingleTon Successfull"<<std::endl;
    }
};

Single_ton Single_ton :: obj;
Single_ton& Single_ton ::Create_OBJ_singleTon(){
    std::cout << "You want my instance, i'm yours" << std::endl;
    return obj;
}

int main(){
    //Single_ton obj = Single_ton(Single_ton ::Create_OBJ_singleTon());
    Single_ton ::Create_OBJ_singleTon().func();
   // obj.func();

}