#include<iostream>
#include<string>
using namespace std;

int main(){
    string fname=" ";
    string lname=" ";
    string swap;
    cout<<"enter first name: "<<fname;
    cin>>fname;
    cout<<"enter last name: "<<lname;
    cin>>lname;

    cout<<"full name is: "<<fname<<" "<<lname<<endl;
    swap=fname+lname;

    cout<<"reverse name is: "<<lname<<" "<<fname<<endl;

    return 0;

}