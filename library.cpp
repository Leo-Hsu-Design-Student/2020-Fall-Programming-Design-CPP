/*將文字轉成class diagram(modeling)：
（一）若看到中文名詞，有兩種可能---1.class 2.attribute(data member)。
書---class，屬性---書名、作者、書號、價格。
管理員---class：底下有輸入的函數，讓管理員輸入書的資料
資料庫---class：底下應該有一個vector儲存很多本書、function Add(書)：void、ListAllBooks():return books
（二）找關鍵動詞---函數！：輸入、新增Add

關係線：
若只是箭頭---有關聯association
若是虛線箭頭---dependency表示沒有reference到，只是藉由這個參數才跑而已**最佳解！因為沒有reference到很多東西，類似全域變數、區域變數的關係，這個只有區域變數的
關係，因為是用參數形式引入
若有實心菱形與箭頭---組成，若沒有底下的物件，則上面物件不存在
若有空心菱形與箭頭---組成,若沒有底下的物件，則上面物件仍存在
*/

#include<iostream>
#include<vector>
using namespace std;
class Book{
public:
    string name;
    string author;
    string ISBN;
    double price;
    int index;

private:

};




class Database{
public:
    Database(){

    }
    ~Database(){

    }
    void Add(Book b){
        b.index=books[books.size()-1].index+1;
        books.push_back(b);
    }
    void Remoove(int index){

    }
    void ListAllBooks(){
        for (int i=0;i<books.size();i++){
            cout<<books[i].name<<" "
                <<books[i].author<<" "
                <<books[i].ISBN<<" "
                <<books[i].price<<endl;
        }
    }

private:
    vector<Book> books;
};





class User{
public:
    User(Database db){
        this->db = db;
    }
    bool Input(){
        int cmd;
        cin>>cmd;
            if (cmd==-1)
                return false;
            else if (cmd==0){
                Book book;
                cin>>book.name>>book.author>>book.ISBN>>book.price;
                db.Add(book);
            }
            else if (cmd==1){
                db.ListAllBooks();
            }    
    return true;
    }
private:
    Database db;
};




int main(){
    Database db;
    User u(db);
    while(u.Input()){

    }

    return 0;
}

