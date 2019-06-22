/* 
 * File:   main.cpp
 * Author: Christian Martinez
 * Created on June 22, 2019, 11:25 PM
 * Purpose: A program that reads a text file that contains weather data, the program will then create a weather report.
 */

#include <iostream>  //input output command library
#include <fstream>  //library to read write to files
using namespace std;

int main()
{
	int month = 3, day = 30;			//variables for months and years
	char weather[month][day];			// Creation of arrays

	int Sun, Rain, Cloudy; 			//variables for the different weather patterns.
	int totalSun = 0;			// Variable for total sunny days
	int totalRain = 0;			// variable for total rainy days
	int totalCloudy = 0;			// variable for total cloudy days
	int mostRain = 0;			// variable for most rainy days
		
	ifstream Read;					// Open the text file Rain or Shine
	Read.open("RainOrShine.txt");	// Opens the file attached
	if (!Read)
		cout << "The File could not be opened, please check again!";
	else
	{	// Function to read the text file to create weather report
		for (int row = 0; row < month; row++)
		{
                    for (int col = 0; col < day; col++)
                    {
                    	Read >> weather[row][col];
                    }
		}
	}
	Read.close();		//closes the file
        
	// create the table for the user to see
	cout << "\n           Weather Report For the Last 3 months\n"
		 << "--------------------------------------------------\n";
	for (int row = 0; row < month; row++)
	{
		Sun = Rain = Cloudy = 0;
		for (int col = 0; col < day; col++) //loop to create each month
		{	
			switch (weather[row][col])
			{
                            case 'S' : Sun++;
						break;
                            case 'R' : Rain++;
                            			break;
                            case 'C' : Cloudy++;
						break;
			}
		}

		
		cout << "\nIn ";  //shows the month
		if (row == 0)
			cout << "June.\n";
		else if (row == 1)
			cout << "July.\n";
		else if (row == 2)
			cout << "August.\n";

		cout << "Rainy for: " << Rain <<" days\n"                //shows the days that were rainy sunny and cloudy
			 << "Sunny for: " << Sun  <<" days\n"
			 << "Cloudy for: " << Cloudy <<" days\n"; 

		//formulas to calculate total days it was rainy sunny or cloudy
		totalSun += Sun;
		totalRain += Rain;
		totalCloudy += Cloudy;

		// Displays the month with the most rain
		if(mostRain > Rain)
			mostRain = row;
	}

	// Shows the totals for each month
	cout << "\nFor all three months it was\n"
		 << "Rainy for: " << totalRain << " days\n"
		 << "Sunny for: " << totalSun  << " days\n" 
		 << "Cloudy for: " << totalCloudy << " days\n"; 

	// Shows which month had hte most rain
	cout << "\nThe month with the most rain was: ";
		if (mostRain == 0)
			cout << "June.\n\n";
		else if (mostRain== 1)
			cout << "July.\n\n";
		else if (mostRain== 2)
			cout << "August.\n\n";

	return 0;
}
