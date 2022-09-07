#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;

    for (int i=0; i<n; i=i+1){//i++就是i=i+1 //這個是計數器
        sum=sum+(i+1);
    }
    cout<<"1+2+3+...+您輸入的數字＝"<<sum<<endl;

    return 0;
}