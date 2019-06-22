/* 
 * File:   main.cpp
 * Author: Christian Martinez
 * Created on June 21, 2019, 10:56 PM
 * Purpose: Program that calculates the days in any month in any year
 */

#include <iostream>
using namespace std;

int main()
{
    int year, month; // variables for month and year
    
    cout << "Enter a month (1-12): "; //asking for input of month
    cin >> month;
    
    if (month<1 || month>12) //make sure month entered is within parameters
    {
        cout << "\nError, invalid month inputed. Only 1-12 please.\n";
        return 0;
    }
    
    cout << "\nEnter a year: "; //ask user for year month lies in.
    cin >> year;
    
    if (year <= 0)
    {
        cout << "\nError, please enter a year greater than 0!";
                return 0;
    }
    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: //months with 221 days
            cout << "There are 31 days in this month\n";
            
            break;
            
        case 4: case 6: case 9: case 11: //months with 30 days
            cout <<"There are 30 days in this month\n";
            
            break;
            
        case 2:
            if(year%100==0 && year%400==0) //months that are divisible by 100 and 400 meaning it is leap year
                cout << "There are 29 days in this month\n";
            else if(year%100==0)
                cout << "There are 28 days in this month\n"; //
            else if(year%4==0)
                cout << "There are 29 days in this month\n";
            else
                cout << "There are 28 days in this month\n";
    }
    return 0;    
}

