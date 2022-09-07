#include<iostream>
#include<sstream>
using namespace std;

int main(){
    int d;
    string a;
    string b="1";
    string c="0";
    a=b+c;
    cout<<a<<endl;

    string Name="Kobe";
    cout<<Name[3]<<endl;//You have to know \0 is the end of the string!

    return 0;
}