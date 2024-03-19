// Thiết lập lớp PhanSo để biểu diễn khái niệm phân số với hai thành phần dữ liệu tử số, 
// mẫu số và các hàm thành phần cộng, trừ, nhân, chia hai phân số,
//  các hàm thành phần xuất, nhập, định giá trị cho phân số. 
//  Viết chương trình cho phép nhập vào hai phân số, 
//  in ra kết quả các phép toán cộng, trừ, nhân, chia hai phân số kể trên.
#include <iostream>
#include <string>
using namespace std;
class Phanso{
    public:
        Phanso(float t, float m): Tuso{t},Mauso{m}{}
        void cong(Phanso &ps){
            float ts= ps.getts();
            float ms= ps.getms();
            float tongTS = (this->Tuso*ms + ts*this->Mauso);
            float tongMS = (this->Mauso*ms);
            float tong = tongTS/tongMS;
            cout<< to_string(tongTS)+"/"+to_string(tongMS)<<endl;
            cout<< "Tong 2 phan so la: "<< tong<<endl;
        }
        float getts(){return this->Tuso;}
        float getms(){return this->Mauso;}
    private:
        float Tuso;
        float Mauso;
};
int main(){
    Phanso *ps1 = new Phanso(3,4);
    Phanso *ps2=new Phanso(4,5);
    ps1->cong(*ps2);
    return 0;
}