#include<iostream>
using namespace std;

int main(){
    double height;
    double weight;
    //使用者輸入身高、體重
    cout<<"Please Enter Your Height(m):";
    cin>>height;
    cout<<"Please Enter Your Weight(kg):";
    cin>>weight;
    double BMI=weight/height/height;
    cout<<"BMI="<<BMI<<endl;

    return 0;
}