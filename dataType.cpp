#include<iostream>
#include<string>//提供儲存字串的功能
using namespace std;//std=standard

int main(){
    // declare a integer，宣告為整數後只能存整數int。float（單精度，小數第六位）、double（雙精度，可以到第十位）存浮點數
    int a =10;
    cout<<a<<endl;
    a=a+115;
    cout<<a<<endl;
    float b =3.14;
    double c=6.28;
    char d ='t';
    string e ="Hello Leo!";
    cout<<a<<" "<<b<<c<<d<<e<<endl;
    const int f =101;
    cout<<f<<endl;
    
    int g;
    cin>>g;
    cout<<g<<endl;
    return 0;
}