#include <iostream>
#include <string>
using namespace std;

/* implement */
class Calculate{
public:
    Calculate(){
        x=0;//initialization is so important!
    }
    void add(double a,double b){
        x=a+b;
    }
    void sub(double a,double b){
        x=a-b;
    }
    void mul(double a,double b){
        x=a*b;
    }
    void div(double a,double b){
        x=a/b;
    }
    double result(){
        return x;
    }
private:
    double x;

};

int main(){
	Calculate calculate;
	
	double value1, value2;
	string op;

	while(true){
		cin >> value1 >> op >> value2;
		if (op == "+"){
			calculate.add(value1, value2);
			cout << calculate.result() << endl;
		} else if (op == "-"){
			calculate.sub(value1, value2);
			cout << calculate.result() << endl;
		} else if (op == "*"){
			calculate.mul(value1, value2);
			cout << calculate.result() << endl;
		} else if (op == "/"){
			calculate.div(value1, value2);
			cout << calculate.result() << endl;
		} else {
			cout << "Wrong Operation Type";
		}
	}

	return 0;
}