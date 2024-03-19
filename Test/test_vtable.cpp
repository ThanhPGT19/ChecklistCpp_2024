#include <iostream>
using namespace std;
class Top { public: int t; };
class Left : virtual public Top { public: int l; };
class Right : virtual public Top { public: int r; };
class Bottom : public Left, public Right { public: int b; };
int main(){

    Bottom *bot = new Bottom;
    bot->t =5;
    cout<<bot->t<<endl;
    return 0;
}