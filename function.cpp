#include<iostream>
using namespace std;

int pow(int,int);
int max(int,int,int,int);
void Helloworld();
int factorial(int);//遞迴函式

int main(){
    
    int a=3,n=2;
    int result=pow(a,n);
    cout<<result<<endl;

    int e=5,b=123,c=3124,d=-34;
    int maxvalue=max(e,b,c,d);
    cout<<maxvalue<<endl;
    Helloworld();
    int f=5;
    int fact=factorial(f);
    cout<<fact<<endl;

    return 0;
}

int pow(int a,int n){//The a declared here is not the same as the a declared above. 區域變數！Only survive in its own {}!


    int base=1;
    for(int i=0;i<n; i++){
        base=base*a;
    }
    return base;
}

int max(int e,int b,int c, int d){
    
    int maxvalue=e;
    if (maxvalue<b){
        maxvalue=b;
    }
    if (maxvalue<c){
        maxvalue=c;
    }
    if (maxvalue<d){
        maxvalue=d;
    }
    return maxvalue;
}

void Helloworld(){
    for (int i=0;i<10;i++){
        cout<<"Hello, world!"<<endl;
    }
    return;// void() can't return anything else.
}

int factorial(int n){
    if (n==1){
        return 1;
    }
    return n*factorial(n-1);
}
