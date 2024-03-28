#include <iostream>
using namespace std;
inline int func(){
    static int a = 5;
    return a;
}
int main(){
    int a = func();
    cout << a << endl;
    return 0;
}