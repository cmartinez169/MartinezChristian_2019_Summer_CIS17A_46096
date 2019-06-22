/* 
 * File:   main.cpp
 * Author: Christian Martinez
 * Created on June 21, 2019, 10:15 PM
 * Purpose: A program that converts Celsius to Fahrenheit
 */

#include <iostream> //input output library

using namespace std;

int main ()
{
	float cels, fahr; //declaration of variables
	
	cout << "What is the temperature in Celsius? ";  //question to ask for input of temperature integer.
	
	cin >> cels; //store input from above statement
	
	fahr = 9 / 5.0 * cels + 32; //conversion equation
	
	cout << "\n" <<  cels << " degrees Celsius equals " << fahr << " degrees Fahrenheit." << endl; //output of the conversion factor.
	
	cin.get();
        
        return 0;
}

