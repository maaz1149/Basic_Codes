#include<iostream>
using namespace std;
//divident and remainder://
int main()
{
    int num1,num2,quo,rem;
    cout<<"enter the number 1: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2;
    quo=num1/num2;
    cout<<"the quotent is: "<<quo<<endl;
    rem=num1%num2;
    cout<<"the remainder is: "<<rem<<endl;
    return 0;
}