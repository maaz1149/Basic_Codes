#include<iostream>
#include<iomanip>
using namespace std;

//show the output formatt.//

int main()
{
    cout<<"formatting the output:"<<endl;
    double pi =3.1415;
    cout<<"the value of pi is: "<<pi<<endl;
    cout<<" The value of pi 4 decimal place of total width 8   : |"<<setw(8)<<pi<<"|"<<endl;
    cout<<" The value of pi 4 decimal place of total width 10   : |"<<setw(10)<<pi<<"|"<<endl;
    
    cout<<scientific;
    cout<<"the value of pi in scientific is: "<<pi<<endl;

    bool done = false;
    cout<<"the vale of status is: "<<done<<endl;

    cout<<boolalpha;
    cout<<"status in alphabet: "<<done<<endl;
    return 0;

}