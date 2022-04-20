#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cin>>a>>ch>>b;
    switch(ch){
        case '+':
                cout<<a+b<<endl;
                break;
        case '-':
                cout<<a-b<<endl;
                break;//Remember to use the "break", btw I think there is no need to have one in the last column
    }

    return 0;
}