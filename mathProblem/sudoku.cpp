#include<iostream>
#include<fstream>
using namespace std;

void Output(int **);

int main(){
    //1.讀檔  3.寫檔（輸出答案）
    ifstream ifs;
    ifs.open("數獨.txt",ios::in);
    if (!ifs){
        cout<<"讀檔失敗"<<endl;
        return 0;
    }
    int sudoku[9][9];
    for (int i=0;i<9;i++){
        for (int j=0;j<9;j++){
            ifs>>sudoku[i][j];
        }
    }
    ifs.close();

    for (int i=0;i<9;i++){
        for (int j=0;j<9;j++){
            cout<<sudoku[i][j];
        }
    };
    //2.解題

    return 0;
}