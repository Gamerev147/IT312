/*
	Travis Carpenter
	SNHU, Software Development w/C++ .NET
	Professor Huda Mustafa
	July 20, 2022

	The approach I took for this is fairly straight forward. I ask the user for input. Then,
	generate two random numbers until their total is the user's number. For each iteration of the loop,
	the attempts integer is increased. Thus, producing correct output of two dice.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	//Initialize dice values
	int totalDieValue = 0, firstDice = 0, secondDice = 0, attempts = 0, userNum;

	//Initialize the random clock
	srand(time(NULL));

	//Output menu
	cout << "------ Roll Two Dice ------" << endl;
	cout << "Enter a number between 2 and 12: " << endl;

	//Get user input
	cin >> userNum;

	//Keep rolling until the user number is hit
	while (totalDieValue != userNum) {
		//Assign the die with random values
		firstDice = 2 + rand() % 11;
		secondDice = 2 + rand() % 11;

		totalDieValue = firstDice + secondDice;

		//Output the results
		cout << "You entered: " << userNum << endl;
		cout << "First Dice: " << firstDice << endl;
		cout << "Second Dice: " << secondDice << endl;
		cout << "Die Total: " << totalDieValue << endl;
		cout << "--------------------------" << endl;
		
		//Increment attempts
		attempts++;
	}

	//Output results
	cout << "Attempts: " << attempts << endl;
	cout << "Done." << endl;

}
