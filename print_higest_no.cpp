#include<iostream>

using namespace std;

int main()
{
    int n,arr[50],temp;

    cout<<"enter total elements please: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"enter the number "<<i+1<<": ";
        cin>>arr[i];
    }
    
    cout<<endl;

    cout<<"the no are: ";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp; 
            }
            
        }
        
    }
    
    cout<<endl;

    cout<<"the sorted array is now: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"the first three no are: ";
    
    for (int i = 0; i < 2; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    
    return 0;    
}