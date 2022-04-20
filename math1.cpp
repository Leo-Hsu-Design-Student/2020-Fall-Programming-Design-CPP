#include<iostream>
using namespace std;

int main(){
    int price;
    cout<<"Please Input The Price Of The Product:";
    cin>>price;
    if (price>2000){
        cout<<"This is how much you should pay:"<<int(price * 0.7)<<endl;}//Force to the other type
    else {
        cout<<"This i s how much you should pay:"<<price<<endl;
    }

    return 0;
}