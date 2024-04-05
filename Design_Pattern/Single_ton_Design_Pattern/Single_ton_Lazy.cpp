#include<iostream>
// Lazy Single_ton
class Single_ton{
    private:
    Single_ton(){
        std::cout<<"Hello im constructor of Singleton!!!"<<std::endl;
    }
    Single_ton(const Single_ton&){};
    public:
    static Single_ton &Create_OBJ_singleTon();
    void func(){
        std:: cout<< "Created OBJ of SingleTon Successfull"<<std::endl;
    }
};

Single_ton& Single_ton ::Create_OBJ_singleTon(){
    static Single_ton obj;
    std::cout << "You want my instance, i'm yours   "<< &obj << std::endl;
    return obj;
}
//int Single_ton ::count =0;
int main(){
    //Single_ton obj = Single_ton(Single_ton ::Create_OBJ_singleTon());
    Single_ton ::Create_OBJ_singleTon().func();
   // obj.func();

}