#include<iostream>
#include<string>
using namespace std;

class Dog{
public:

private:
};

class Human{
public:
    string name;
    string bloodtype;
    string birth;//證明Human具有以上屬性

    void SetLineID(string ID){/*void為傳回值*/
        Line_ID=ID;
    }
    string GetLineID(){
        return Line_ID;
    }

private://差別在於權限，若是寫到private裡頭，則須透過詢問才能得知。在這個標籤底下的函數只能被自己的class底下自己定義的函數存取
//只能在本類別底下
    string Line_ID;//證明有些參數為read-only
};//Remember the ';'

int main(){
    Human H1;//Equivalent to "int a;" 宣告human類別的物件，其名稱為H1
    H1.name="小王";
    H1.bloodtype="o";
    H1.birth="1996/02/02";
    H1.SetLineID("myntu");

    Human H2;
    H2.name="小華";
    H2.bloodtype="AB";
    H2.birth="1998/10/02";

    cout<<H1.name<<" "<<H1.bloodtype<<" "<<H1.birth<<" "<<H1.GetLineID()<<endl;
    cout<<H2.name<<" "<<H1.bloodtype<<" "<<H1.birth<<endl;
    H2.SetLineID("I am sleepy");
    cout<<H2.GetLineID()<<endl;;
    //會compile不過，H2.LineID="Hi";需要透過Set Get函數
    
    return 0;
}