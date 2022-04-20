#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    int d=max(a,b);
    int c=a>b ? a:b;
    cout<< c<<endl;
    cout<< d<<endl;

    //sizeof
    cout<<sizeof(b)<<endl;
    return 0;
}