/* 
 * File:   main.cpp
 * Author: Christian Martinez
 * Created on June 21, 2019, 10:56 PM
 * Purpose: Program that predicts teh size of a population of organisms.
 */

#include <iostream> //inupt output library

using namespace std;

int main ()
{
    //declaration of variables
    int starting, avg_daily, days;
    
    //ask user for starting population
    cout <<"What is the starting number of organisms for this population?: ";
    cin >> starting;
    
    //if statements to make sure input is within parameters
    if (starting <2)
       {
        cout << "Invalid number, please enter a number greater than 2: ";
        cin >> starting;
        
        if (starting < 2)
        {
            cout <<" Please try again, sorry"; 
            cin.get();
            return 0;
    }
    }
    
    //ask for average daily population
    cout << "Enter average daily size of population: ";
    cin >> avg_daily;
            if (avg_daily < 0) //making sure daily population bigger than 0
            {
                cout <<" Error, please enter a number greater than 0: ";
                cin >> avg_daily;
            }
    avg_daily = (avg_daily * starting) / 100;
    cout<< "Enter the number of days: "; //input for total number of days
    cin >> days;
    for (int i = 0; i<days; i++) //loop for the number of total days
    {
        starting = starting + avg_daily;
        cout << "Day " << i + 1 << " total number of organimsms is:" << starting << "\n";
    }
    
    return 0;
    }

    