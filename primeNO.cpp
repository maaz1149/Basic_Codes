#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number: ";
    cin>>num;
    
    bool isprime=true;

    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            isprime=false;
            break;
        }
        
    }

    if (isprime) 
    {
        cout << "The number " << num << " is prime." << endl;
    } 
    else 
    {
        cout << "The number " << num << " is not prime." << endl;
    }

    return 0;
}