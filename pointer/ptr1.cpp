#include<iostream>
using namespace std;

void swap(int,int);
void swap_(int*,int*);
void swap__(void*,void*,int);


int main(){

    int a=10,b=15;
    cout<<a<<" "<<b<<endl;
    swap__(&a,&b,sizeof(int));//傳送記憶體位置
    cout<<a<<" "<<b<<endl;

    double c=3.14,d=6.28;
    cout<<c<<" "<<d<<endl;
    swap__(&c,&d,sizeof(c));
    cout<<c<<" "<<d<<endl;
    return 0;
}

void swap(int q, int w){
    int tmp=q;
    q=w;
    w=tmp;
    cout<<q<<" "<<w<<endl;
}
void swap_(int* ptr1,int* ptr2){
    int tmp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=tmp;
    cout<<*ptr1<<" "<<*ptr2<<endl;
}

//如何只交換區段去交換變數
void swap__(void* ptr1,void* ptr2,int len){//先用void* 去儲存所有資料型態
    char* p1=(char*)ptr1;
    char* p2=(char*)ptr2;

    for (int i=0;i<len;i++){
        char tmp=*p1;
        *p1=*p2;
        *p2=tmp;

        p1=p1+1;
        p2=p2+1;
    }

}
