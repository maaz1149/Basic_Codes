#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"enter the year: ";
    cin>>year;

    if ((year%4==0 && year%100 !=0) || (year%400==0)) 
    {
        cout<<year<<" is leap year."<<endl;
    }
    else
    {
        cout<<year<<" is not leap year."<<endl;
    }
    
    return 0;
}