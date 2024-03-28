#include <iostream>

 using namespace std;
int v = 6;
int x = 5;
namespace
{
    //int x =6;
    class C
    {
        public:
        /* data */
        //int x = 3;
        void func()
        {
            //extern int x;
            cout << x << endl;
        }
    };

} // namespace name
int main()
{
    C c;
    c.func();
    c.func();
    cout << v << endl;
    return 0;
}
