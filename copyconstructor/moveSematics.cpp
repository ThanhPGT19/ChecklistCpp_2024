#include <bits/stdc++.h>
using namespace std;
vector<int> *CreateSortedArray(vector<int> *source)
{
    // vector<int> des;
	// [CODE] Thêm các phần tử của mảng "source" vào mảng "des"
	// [CODE] Thực hiện sắp xếp mảng "des"
    sort(source[0].begin(),source[0].end());
	return source;
}

int main()
{
	vector<int> v;


    cout<<"before::"<<endl;
	// // [CODE] Nhập dữ liệu cho mảng "inputtedArray"
    for(int i=0;i<10;i++){
        v.push_back(rand());
    }
	// // Giả sử inputtedArray có 100 triệu phần tử
    // cout<<&v<<endl;
    for(int i=0;i<10;i++){
       cout<< v[i]<<endl;
    }
    cout<<"after::"<<endl;
   // pair<int,int>p[30];
	vector<int> *sortedArray = CreateSortedArray(&v);
     for(int i=0;i<10;i++){
        cout<< sortedArray[0][i]<<endl;
     }
    // for(auto it=sortedArray->begin(); it!=sortedArray->end();it++){
    //     cout<< it <<endl;
    // }
    int x= sizeof(sortedArray);
    cout<<x<<endl;

     return 0;
}