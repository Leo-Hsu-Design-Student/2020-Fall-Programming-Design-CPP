#include<iostream>
using namespace std;

int main(){
    //Declare an array with 10 cells stored integers. #cells number 0-9
    int array[10];

    int array1[5]={1,2,3};
    int array2[]={4,3,2,1};//Automatically declare a 4 integer array for you.
    int array3[10]={0};//All is zero!
    int array4[10]={};
        for (int i=0;i<10;i++){
            array4[i]=1;
        }

    return 0;
}