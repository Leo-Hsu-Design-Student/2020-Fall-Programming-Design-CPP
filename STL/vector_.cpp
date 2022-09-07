#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v1;
    cout<<v1.size()<<endl;

    v1.push_back(100);
    v1.push_back(400);
    cout<<v1.at(0)<<endl;
    //iterator迭代器，也是一個class
    for (int i=1;i<11;i++){
        v1.push_back(i);
    }
    v1.erase(v1.begin(),v1.end());//包含下界不包含上界
    //刪除之後編號會重新編
    v1.clear();
    //vector可以儲存各種資料型態
    vector<vector<int> > twodi;
    twodi.push_back(v1);
    for (int i=0;i<10;i++){
        vector<int> tmp;
        twodi.push_back(tmp);
    }

    return 0;
}