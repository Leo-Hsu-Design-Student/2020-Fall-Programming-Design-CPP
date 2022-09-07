#include<iostream>
#include<string>
using namespace std;
class Dog{
public:
    Dog(){//其實會自動幫你寫（若為空）

    }

private:
};

class Human{
public:
    Human(string initialName, string birth, string bloodDad, string bloodMom){//constructor跟class同名，規定一定要同名。
        _name=initialName;
        _birth=birth;
        if (bloodDad=="O" && bloodMom=="O"){
            _blood="O";
        }
        //constructor沒有回傳型態>>規定自動把constructor的void省略，一定是void啊
        //必定是public成員
    }

    void SetName(string newName){/*void為傳回值*/
        _name=newName;
    }
    string GetName(){return _name;}
    string GetBirth(){return _birth;}
    string GetBlood(){return _blood;}

private:
    string _name;
    string _birth;
    string _blood;
};//Remember the ';'

int main(){
    Human H1("小白","1996/12/12","O","O"),H2("Black","1992/12/12","A","B"),H3("John","2001/2/1","AB","AB");
    cout<<H1.GetName()<<endl;

    //constructor:初始化(self)

    //destructor:刪除空間





    return 0;
}