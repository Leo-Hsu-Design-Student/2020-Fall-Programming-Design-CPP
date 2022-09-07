#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int, double> m1;
    cout<<m1.size()<<endl;
    m1[30]=3.14;
    m1[100]=213.231; 
    cout<<m1.size()<<endl;
    cout<<m1[30]<<" "<<m1[100]<<endl;

    map<string,string> url;
    url["wiki"]="1";
    url["Google"]="2";
    url["NTU"]="3";
    
    map<string, vector<int> > dsa;
    map<string, map<string, int> > grade;
    //name          subject grade

}