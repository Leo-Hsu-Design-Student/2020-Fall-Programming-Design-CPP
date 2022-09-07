#include<iostream>
#include<fstream>//讀入同一層的檔案f=file
using namespace std;

int main(){

    int tmp;
    ifstream myfile;
    myfile.open("file.txt");
    int a, b, c;
    myfile>>a>>b>>c;
    cout<<a<<" "<<b<<" "<<c<<endl;

    myfile.close();

    return 0;
}