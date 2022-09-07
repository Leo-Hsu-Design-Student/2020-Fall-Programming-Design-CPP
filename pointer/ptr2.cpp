#include<iostream>
using namespace std;

int main(){

    int a=0;
    double b=1.000;
    char c;

    cout<<&a<<endl;//I want your address!

    int* /*宣告指標變數*/ a_ptr=&a, d/*d is a integer*/;//長度4-6bytes根據作業系統不同
    cout<<a_ptr<<endl;
    cout<<*a_ptr<<endl;
    double* b_ptr;//資料型態：double*
    char* c_ptr;//資料型態：char*（*不管寫在哪都不是變數名稱）
    //為何會有不同料型態與*合起來？由於不同資料型態的儲存大小不同，要讓指標變數知道存多少空間的記憶體位置。
    return 0;
}