/* 
 * File:   main.cpp
 * Author: Christian Martinez
 * Created on June 21, 2019, 10:56 PM
 * Purpose: Creates a table that converts temperature
 */


#include <iostream>

using namespace std;
double celsius(double F);   //creation of variable for function to be called later
int main()
{
    cout<<"Table of Celsius Temperature\n";                //ouput to create table layout
    cout<<"============================\n";
    cout <<"Fahrenheit \t Celsius\n";
    
    //create the table of the temperature form 0 to 20 of the equivalent temperatures
    
    for (double fahrenheitTemp=0; fahrenheitTemp<=20;    //creation of loop to add 0-20 entries
            fahrenheitTemp++)
    { 
        double celsiusTemp = celsius(fahrenheitTemp);   //calling the function to create the table
        cout << fahrenheitTemp<<"\t\t" 
                << celsiusTemp <<"\n\n";
    }
    return 0;
}
        


double celsius(double F)               //the function that we are calling in this program
{
    double celsius = ( 5 * (F - 32))/9;    //equation to make conversions
return celsius;
}
                
    

