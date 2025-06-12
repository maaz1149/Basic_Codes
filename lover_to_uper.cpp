#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string letter;
    cout<<"enter the letter: ";
    cin>>letter;
    cout<<endl;
    cout<<"the letter is: "<<letter<<endl;

   for (char&c : letter)
   {
    if (islower(c))
    {
        c=toupper(c);
    }
    
   }
   cout<<"converted letter is: "<<letter<<endl;

   return 0; 
}