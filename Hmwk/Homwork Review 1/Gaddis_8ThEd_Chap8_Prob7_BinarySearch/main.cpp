/* 
 * File:   main.cpp
 * Author: Christian Martinez
 * Created on June 21, 2019, 12:15 AM
 * Purpose: Creates a table that converts temperature
 */
#include <iostream> //input output library

#include <string>  //library to use string function to store string of characters

using namespace std;

int main()
 {
    const int nNAMES = 20; //total number of names for arrray

    string names[nNAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
        "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
        "Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
        "Looney, Joe", "Wolfe, Bill", "James, Jean", "Weaver, Jim",
        "Pore, Bob", "Rutherford, Greg", "Javens, Renee", "Harrison, Rose",
        "Setzer, Cathy", "Pike, Gordon", "Holland, Beth"};


    int i, j;  //variables for sorting array alphabetically

    string temp;

    for (i = 0; i < nNAMES - 1; i++)  //create the loop to populate array
 {

        for (j = i + 1; j < nNAMES; j++)
 {

            if (names[i] > names[j])
 {

                temp = names[i];

                names[i] = names[j];

                names[j] = temp;

            }

        }

    }

    string employee, last, first;  //variables to use for array with characters

    cout<< "Enter the last name: ";   //ask for input of last name

    cin >> last;

    cout << "Enter the first name: "; //ask for input of first name

    cin >> first;

    employee = last + ", " + first;   //employee is the combination of last and first name

    cout << employee << endl;

    int low = 0, mid, high = nNAMES - 1; //variables to sort array

    //function that will bring array and sort and find the "employee"
    while (low <= high)  /
 {

        mid = (low + high) / 2;

        if (employee < names[mid])

            high = mid - 1;

        else
 {

            if (employee > names[mid])

                low = mid + 1;

            else

                low = high + 1;

        }

    }

    if (employee == names[mid]) //function after inputs are stored to tell user if they are found within the list of people

        cout << "Found\n";

    else

        cout << "Not found\n";

    return 0;

}
