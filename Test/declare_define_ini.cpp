#include <iostream>

using namespace std;
int x;
//int x =5;
void definition(){
    cout<< "Hello I'm Defintion!"<<endl;
}
int main(){
    definition();
    //int *p1=&x;
    x=5;
    return 0;
}
// KHông thể định nghĩa 1 biến ở bên ngoài các hàm
// Khi muốn viết hàm hay biến bên ngoài hàm, bắt buộc phải có name a type (tên của kiểu dữ liệu)
// Khai báo biến tức là thông báo trong chương trình biến sử dụng đó đã tồn tại. trong trường hợp sử dụng mà chưa khai báo.
//-> tức là định nghĩa hoặc dùng luôn mà chưa có khai báo. thì cần thiết phải khai báo ngay trên đầu chương trình.
// không thể khai báo 2 lần ở bất kỳ đâu. khi khai báo lại biến trong scope giống với 1 biến global thì có nghĩa là 2 biến đo khác nhau hoàn toàn. 
