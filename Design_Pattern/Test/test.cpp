#include <iostream>
int main(){
    int n=3;
    //std::cin>>n;
    long long sum=1;
    for(int i=1; i<=n;i++){
        sum = sum*i;
    }
    std:: cout<< sum<<std::endl;
    return 0;       
}