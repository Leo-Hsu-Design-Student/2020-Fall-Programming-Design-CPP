#include<iostream>
using namespace std;

int main(){    
    for (int i=0;i<100;i++){
        int value=i+1;

        bool isPrimeNumber=true;
        for(int factor=1;factor<=value;factor++){
            if(value%factor==0){
                if(factor!=1 && factor!=value){
                    isPrimeNumber=false;
                    break;
                }
            }
        
        }
        if(isPrimeNumber){
            cout<<value<<endl;
        }
    }
        
    return 0;
}
