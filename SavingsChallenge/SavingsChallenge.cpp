// SavingsChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//the first value: a, each week it is added by 50
	//nwk which week the user is on
	//fvalue the amount of money to be saved on the particular week
	double a = 50, d = 50, nwk, tsum, fvalue;


	//user input
	cout << "What week are you on?";
	cin >> nwk;

	//process
	fvalue = a + (nwk - 1) * d;// on stated week the user will save fvalue amount of money
	tsum = (nwk / 2) * (2*a + ((nwk - 1) * d));//by the end of the specified number of weeks the user will havae used (tsum) total sum of money 


	//output
	cout <<"In week "<< nwk << " you will have saved "<< fvalue << "\n";
	cout << "So far you have save a total of:" << tsum;
	

}


