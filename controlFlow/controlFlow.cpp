#include<iostream>
using namespace std;

int main(){
    char alpha;
    cout<<"Please Enter A Character:"<<endl;
    cin>>alpha;
    if (alpha=='y' || alpha=='Y'){
        cout<<"Great"<<endl;
    }
    else{
        cout<<"Worse"<<endl;
    }

    return 0;
}