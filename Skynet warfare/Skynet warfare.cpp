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
	int l = 0, pAttempts =0, lAttempts = 0,  bAttempts = 1, r = 0, rAttempts = 0;
	int guess = 0;


	while (r != person) {
		r = rand() % 64 + 1;
		rAttempts += 1;
	}

	// loop the code until it finds the player
	while (top >= bottom) {
		//set the binary search
		int hunt = ((top - bottom) / 2) + bottom;
		//if area searched is lower reinput variables to search higher
		if (hunt < person) {
			bottom = bottom + hunt, bAttempts += 1;
		}
		//if the area searched is higher reinput variables to search lower
		if (hunt > person) {
			top = top - hunt, bAttempts += 1;
		}
		//if player is found
		else if (hunt = person) {
			bAttempts += 1;
		}
	}
	while (l != person) {
		lAttempts += 1;
		l += 1;
	}
	cout << "Welcome to Skynet\nWe have entrusted you and our algorithms.\nYou must find the enemy at all costs.\nYour life depends on finding them\n";
	cout << "We have your family.\n Enter in a number 1-64 to find them.\n\n";
	system("pause");
	while (guess != person) {
		cout << "Your guess was " << guess << ".\n That was incorrect.";
		cout << "What is your next guess dear user\n";
		cin >> guess;
		pAttempts += 1;
	}
	if (guess = person) {
		cout << "They were found at location " << person << ".\n";
		cout << "It took you " << pAttempts << " tries.\n Good Work\n";
		cout << "Our linear search took " << lAttempts << ".\n";
		cout << "Our binary search took " << bAttempts << ".\n";
		cout << "Our random search took " << rAttempts << ".\n";
	}
}



