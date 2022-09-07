#include<iostream>
using namespace std;

int main(){
    bool isBreak = false;//flag
    for (int i = 0;i<10;i++){
        for (int j=10;j>0;j=j-1){
            cout<<i<<" "<<j<<endl;
            if (j==5){
                isBreak=true;
                break;
            }
        }
        if (isBreak){
            break;
        }
    }

    return 0;
}