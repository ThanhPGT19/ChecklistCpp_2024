// C++ program without declaring the
// move constructor
#include <iostream>
#include <vector>
using namespace std;
class Move {
private:
	int* data;
public:
	Move(int d)
	{
		data = new int;
		*data = d;
		cout << "Constructor is called for "<< d << endl;
	};
	Move(const Move& source): Move{ *source.data}
	{	
		//this = new Move(*source.data);
		// data = new int;
        // *data=*(source.data);
		cout << "Copy Constructor is called - "<< "Deep copy for "<< *source.data<< endl;
		cout<<"zzz__________zzz"<<endl;
	}
	Move(Move&& source): data{ source.data }
    {
        cout << "Move Constructor for "<< *source.data << endl;
        source.data = nullptr;
    }
	~Move()
	{
		if (data != nullptr)
			cout << "Destructor is called for "<< *data << endl;
		else
			cout << "Destructor is called"<< " for nullptr"<< endl;
		delete data;
	}
	void getter(){
		cout<< *data<<endl;
	}
};
int main()
{
	vector<Move> vec;
    cout<< "1_______"<<endl;
	vec.push_back(Move{10});
    cout<< "2_______"<<endl;
	vec.push_back(Move{20});
    cout<< "3_______"<<endl;
	// // int i=4;
	// // cout<<"xyz__________"<<endl;
	// // for(auto x : vec){
	// // 	cout<<"abc__________"<<endl;
	// // 	x.getter();
	// // 	cout<<i<<"__________"<<endl;
	// // 	i++;
	// // }
	// // cout<<"xyz__________"<<endl;
	// // vector<int>a;
	// // a.push_back(5);
	// // cout<<&a[0]<<endl;
	// // a.push_back(10);
	// // cout<<&a[0]<<endl;
	return 0;
}
