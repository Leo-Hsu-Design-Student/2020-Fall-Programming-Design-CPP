#include<iostream>
using namespace std;

int main(){

    int* ptr;//動態配置只需要有儲存指標的記憶體空間
    ptr=new int;
    *ptr=20;
    delete ptr;
    //若有兩個ptr但其實只有一個delete---memory leak
    //practice
    int *ptr1,*ptr2,*ptr3;
    ptr1=new int(400);
    ptr2=new int(200);
    ptr3=new int(100);
    cout<<ptr1<<": "<<*ptr1<<endl;
    cout<<ptr2<<": "<<*ptr2<<endl;
    cout<<ptr3<<": "<<*ptr3<<endl;
    delete ptr1;
    delete ptr2;
    delete ptr3;

    int a;//靜態宣告
    ptr1=&a;
    //會出錯delete ptr1;

    ptr1=new int ;
    *ptr1=10;
    ptr2=ptr1;
    delete ptr2;
    //會出錯*ptr1=100;

    //動態陣列
    int *p=new int[10];
    for (int i=0;i<10;i++){
        p[i]=i;
    }

    int **p2=new int*[10];
    for (int i=0;i<10;i++){
        p2[i]=new int[20];
    }
    for (int i=0;i<10;i++){
        for (int j=0;j<20;i++){
            p2[i][j]=i*20+j;
            cout<<p2[i][j]<<endl;
        }
    }
    for (int i=0;i<10;i++){
        delete[] p2[i];
    }

    return 0;
}