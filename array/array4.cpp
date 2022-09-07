#include<iostream>
using namespace std;

int main(){

    double grades[10];
    double sum=0;
    for (int i=0;i<10;i++){
        cin>>grades[i];
        sum=sum+grades[i];

    }
    double average=sum/10;
    cout<<"Average="<<average<<endl;


    return 0;
}