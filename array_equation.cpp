#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Please Enter the n power of the equation:"<<endl;
    cin>>n;

    double coeffficient[n+1];
    for (int i=0;i<n+1;i++){
        cin>>coeffficient[n-i];
    }

    double x;
    cin>>x;
    double sum=0.0;
    for (int i=0;i<n+1;i++){
        sum=sum+coeffficient[i]*pow(x,i);
    }
    cout<<"Put it into x:"<<sum<<endl;

    return 0;
}