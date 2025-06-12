#include <iostream>
using namespace std;

bool isleapyear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    int year1;
    int year2;
    cout << "enter year 1: ";
    cin >> year1;
    cout << "enter year 2: ";
    cin >> year2;
    cout << endl;

    if (year1 <= 0 || year2 <= 0 || year1 > 3000 || year2 > 3000 || year1 > year2)
    {
        cout << "you entered the invalid value." << endl;
        return 1;
    }

    bool foundleapYear = false;

    cout << "the leap years between " << year1 << " and " << year2 << "are " << endl;

    for (int year = year1; year1 <= year2; year++)
    {

        if (isleapyear(year))
        {
            cout << year << " ";
            foundleapYear = true;
        }
    }

    // If no leap years were found
    if (!foundleapYear)
    {
        cout << "There are no leap years between " << year1 << " and " << year2 << "." << endl;
    }
    else
    {
        cout << endl; // For a neat output format
    }
    
    return 0;
}