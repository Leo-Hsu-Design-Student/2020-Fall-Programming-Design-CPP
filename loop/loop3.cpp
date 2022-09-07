#include<iostream>//終極密碼
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    //遊戲開始，設定初始化
    //設定通關密碼
    srand(time(NULL));
    int answer=rand()%100+1;
    //設定猜謎密碼
    int lower_bound=1,upper_bound=100;
    cout<<"Please Enter A Number which is between"<<lower_bound<<"and"<<upper_bound<<endl;
    int code;
    while(true){
        cin>>code;
        if(code==answer){
            cout<<"Congratulations!YOU ARE RIGHT!"<<endl;
            break;
        }
        else if(code>upper_bound || code<lower_bound){
            cout<<"Follow the rule I told you!"<<endl;
            break;
        }
        else{
            if (code<answer){
                lower_bound=code+1;
                cout<<"Please Enter A Number Which is between"<<lower_bound<<"and"<<upper_bound;
                continue;
            }
            else if(code>answer){
                upper_bound=code-1;
                cout<<"Please Enter A Number Which is between"<<lower_bound<<"and"<<upper_bound;
                continue;
            }
        }

    }


    return 0;
}