#include<iostream>
using namespace std;

class Example{
public:
    Example(int i){
        index=i;
        cout<<"Create: "<<index<<endl;
        ptr=new int;
    }
    ~Example(){//不能有任何參數，也不能傳回任何值
        cout<<"Realease: "<<index<<endl;
        delete ptr;
    }
private:
    int index;
    int *ptr;
};
int main(){
    int a=3;
    Example e1(1);
    if (a>0){
        Example e2(2);
        Example e3(3);//destructor會先釋放後面宣告者，再釋放前面宣告者，怕後面者會用到前面者的參數
    }


    return 0;
}