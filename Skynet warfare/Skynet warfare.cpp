// Skynet warfare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//insert libraries

#include "pch.h"
#include <stdlib.h>
#include <stdio.h>   
#include <time.h>       
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>


//std - standard library
//shorten cout - console out and endl - end line
//shorten string and cin
using std::cout;
using std::cin;
using std::endl;
using std::string;


//main function
int main()
{
	//Random seed
	srand(time(NULL));

	//set variables and set the persons location
	int top = 64, bottom = 1, person = rand() % 64 + 1;
	int l = 0, person = 0, pAttempts =0, lAttempts = 0;
	string guess;


	//set values for where you are hidden and the hunt
	cout << "Welcome to Skynet\nWe have entrusted you and our algorithms.\nYou must find the enemy at all costs.\nYour life depends on finding them\n";
	cout << "We have your family.\n\n";
	system("pause");
	while (guess != person) {
		cout << "What is your guess dear user";
		cin >> guess;
		pAttempts += 1;
	}
	while (l != person) {
		l + 1;
		lAttempts += 1;
	}
	// loop the code until it finds the player
	while (top >= bottom) {
		//set the binary search
		int hunt = ((top - bottom) / 2) + bottom, bAttempts = 1;
		//tell player where the search was conducted
		cout << "We have searched at location " << hunt << "\n";
		//if the area searched is lower than the player tell them and reinput variables to search higher
		if (hunt < person) {
			bottom = bottom + hunt, bAttempts += 1;
			cout << "The enemy has been found at a higher location\n Now searching higher ground.\n";
			system("pause");
		}
		//if the area searched is higher than the player tell them and reinput variables to search lower

		if (hunt > person) {
			top = top - hunt, bAttempts += 1;
			cout << "The enemy has been found to be lower than our current search.\n Now searching lower ground.\n";
			system("pause");
		}
		//if player is found tell them and take them away
		else if (hunt = person) {
			bAttempts += 1;
			cout << "The enemy has been found.\n They will now be taken to a rehabilitation facility.\nYour family will now be released.\n";
			system("pause");
			//end the program
			return 0;
		}
	}
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
