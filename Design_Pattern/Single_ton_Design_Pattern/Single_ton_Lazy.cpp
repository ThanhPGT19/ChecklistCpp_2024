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

/*
Tại sao khi sử dụng biến static trong hàm thì khi gọi lại hàm đó nó ko khởi tạo 1 biến mới. mà dùng lại biến static đã khởi tạo ban đầu ????

- Vì static variable khởi tạo trước khi vào hàm main(). Khởi tạo trong compile time => khi chạy chương trình nó đã allocate biến đó trong bộ nhớ. 
=> Khi gọi hàm (trong runtime) thì đơn giản là nó sẽ lục biến đó trong bộ nhớ và sử dụng. chứ ko tạo ra biến khác. vì gọi hàm là ở runtime mà 
static variable đã được khởi tạo ngay khi build chương trình.

*/