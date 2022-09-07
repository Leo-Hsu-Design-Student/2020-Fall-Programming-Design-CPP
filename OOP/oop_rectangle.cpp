#include<iostream>
using namespace std;
class Rectangle{
public:
    void setlength(int l);
    float getlength();
    void setwidth(int w);
    float getwidth();
    float perimeter();
    float area();

private:
    float length;
    float width;
};

int main(){
    Rectangle rect;
    float l,w;
    cin>>l>>w;
    rect.setlength(l);
    rect.setwidth(w);
    cout<<"Perimeter="<<rect.perimeter()<<endl;
    cout<<"Area= "<<rect.area()<<endl;

    return 0;
}

    void Rectangle::setlength(int l){//Ordinarily no return value
        length=l;
    }
    float Rectangle::getlength(){
        return length;
    }
    void Rectangle::setwidth(int w){//Ordinarily no return value
        width=w;
    }
    float Rectangle::getwidth(){
        return width;
    }
    float Rectangle::perimeter(){
        return 2*(length+width);
    }
    float Rectangle::area(){
        return length*width;
    }

