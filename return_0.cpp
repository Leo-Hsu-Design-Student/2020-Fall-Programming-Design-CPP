#include<iostream>
#include<math.h>
using namespace std;

int main(){

    double a;
    cin>>a;
    if(a<0){
        cout<<"請輸入大於等於０的數"<<endl;
        //return 0; if here is the return 0, then it won't run after this.
    }
    double b =sqrt(a);
    cout<<b<<endl;

    return 0;//return 0.-1.-1.4.5.6 it is alright. As long as it is the int() type.
}