//Write a C++ program that swaps two numbers.//
#include<iostream>
using namespace std;

int main(){
    int num1,num2,temp;
    cout<<"enter num1: ";
    cin>>num1;
    cout<<"enter num2: ";  
    cin>>num2;
    temp = num1;
    num1=num2;
    num2=temp;
    cout<<"after swap the num1 is: "<<num1<<endl;
    cout<<"after swap the num2 is: "<<num2<<endl;

    return 0;
}