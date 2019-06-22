/* 
 * File:   main.cpp
 * Author: Christian Martinez
 * Created on June 21, 2019, 10:41 PM
 * Purpose: A program that converts dollar amount to japanese yen and euros
 */

#include <iostream> //library for input output 
#include <iomanip> //library to use setprecision for decimals
using namespace std;

//start of program

int main ()
{
	const double YEN_PER_DOLLAR = 107.00; //constant varibale for conversion of dollar to Yen
	const double EUROS_PER_DOLLAR = 0.88; //constant varibale for conversion of dollar to Euro
	double dollars, yen, euros; //variables for inputs
	
	//command to ask for input of dollar amount
	cout << "Enter the amount in US Dollars to be converted to Yen and Euros: ";
	cin >> dollars;
	
	cout << "\n";
	
	yen = dollars * YEN_PER_DOLLAR; //formula to convert dollars to yen.
	
	euros = dollars * EUROS_PER_DOLLAR; //formula to convert dollars to euros.
	
	cout << setprecision(2) << fixed; //set decimal places to 2 
	
	cout << dollars << " US Dollars is " << yen << " Japanese Yen\n\n"; //display to user the amount of yen
	
	cout << dollars << " US Dollars is " << euros << " European Euros\n"; //display to user amount of euros
	
	return 0;
}

	
	