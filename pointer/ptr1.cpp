#include<iostream>
using namespace std;

void swap(int, int);
void swap_(int*, int*);
void swap__(void*, void*, int);
void test(int*, int[]);


int main(){

    int a = 10, b = 15;
    cout << a << " " << b << endl;
    swap__(&a, &b, sizeof(int));//傳送記憶體位置
    cout << a << " " << b << endl;

    double c = 3.14, d = 6.28;
    cout << c << " " << d << endl;
    swap__(&c, &d, sizeof(c));
    cout << c << " " << d << endl;

    int *ptr;
    int arr[10] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    test(ptr, arr);
    ptr = arr;
    test(ptr, arr);
    *ptr = 99;
    test(ptr, arr);

    return 0;
}

void swap(int q, int w){
    int tmp = q;
    q = w;
    w = tmp;
    cout << q << " " << w << endl;
}

void swap_(int* ptr1, int* ptr2){
    int tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
    cout << *ptr1 << " " << *ptr2 <<endl;
}

//如何只交換區段去交換變數
void swap__(void* ptr1, void* ptr2, int len){//先用void* 去儲存所有資料型態
    char* p1 = static_cast<char*>(ptr1);
    char* p2 = static_cast<char*>(ptr2);

    // swap 1 byte by 1 byte
    for (int i= 0; i < len; i++){
        char tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;

        p1++;
        p2++;
    }
}

void test(int *ptr, int arr[]) {
    cout << "print ptr " << ptr << endl;
    cout << "value of ptr " << *ptr << endl;
    cout << "print array " << arr << endl;
    cout << "value of array " << *arr << endl;
    cout << "reference of array " << &arr << endl;
    cout << "\n" << endl;
}
