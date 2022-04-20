#include<iostream>  
// #means 前置處理before compile
// 表示先把<iostream>的內容copy paste 過來，i menas input, o means output, and stream means 串流。
// <>裡頭表示檔案類型＝標題檔header
// () means 函數，所以main()是一個函數，{} means 裡面可能有很多函式 
using namespace std;
// namespace是命名空間，告訴以下內容為命名在std裡頭，否則會分不清楚cout是命名變數或是輸出。

int main(){
    //This is what I said.
    /*No wonder you like to use this icon.
    What a nice move.*/
//I can also use the Cmd +/
    cout<<"Hello \0World!"<<" Welcome to my kingdom!"<<endl<<endl;
    // cout=output,cin=input,endl=infinite且為換行符，若沒有他就會黏在一起
    // 雙引號表示字串，分號為一行終結
    return 0;
}
// g++ hello.cpp -o hello.exec
// ./hello.exec


// 常數是不能改變的值