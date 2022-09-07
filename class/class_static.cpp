#include<iostream>
using namespace std;

class Human{
public:
    static int a;//全部class裡面都只有一個a意思是h1.a跟h2.a都是取用到同一個a
    static int number; 
private:
    double b;

};
int Human::number=0;//static需要初始化，且只能初始化一次

int main(){
    int a;
    double b;

    Human h1,h2,h3;
    h1.a=3;
    cout<<h2.a<<endl;
    return 0;
}