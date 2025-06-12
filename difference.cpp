#include<iostream>
using namespace std;
int main()
{
    int num1,num2,diff;
    cout<<"enter no 1: ";
    cin>>num1;
    cout<<"enter no 2: ";
    cin>>num2;
    cout<<endl;
    diff=num1-num2;
    cout<<"the difference is: "<<diff<<endl;
    cout<<"do you wana do this again if you want the enter 1 otherwise 0."<<endl;
    bool opt=true;
    cin>>opt;
    if (opt!=0)
    {
        goto jump;
    }
    else
    {
        return 0;
    }
    
    jump:
        
    cout<<"enter no 1 again: ";
    cin>>num1;
    cout<<"enter no 2 again: ";
    cin>>num2;
    cout<<endl;
    diff=num1-num2;
    cout<<"the difference is now: "<<diff<<endl;
        
    return 0;
}