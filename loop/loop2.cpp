#include<iostream>
using namespace std;

int main(){

    for (int i=0; i<1000; i++){//for loop可以用來計數，但while可以讓他一直跑下去
        //cout<<i<<endl;//debug用
        if ((i+1)%3==0 && (i+1)%5==0 && (i+1)%7==0){
            cout<<(i+1)<<endl;
        }
    }

    return 0;
}