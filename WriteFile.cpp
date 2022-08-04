/*
	Travis Carpenter
	SNHU, Software Development w/ C++ .NET
	Professor Huda Mustafa
	August 2, 2022
	
	Starting this assignment was the only trouble I had, as I thought we were required to use
	StreamReader and StreamWriter. This program is fairly simple. I first open a file stream,
	then get the number of players and rounds. These are written to a file, and the code
	continues.
	
	The only confusion I had was appending the scores to the file. I wished to have them
	appended next to the player's name, however I feel this is beyond the scope of this assignment.
	To get around this, I simply appended the scores organized by round.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {
	//Initialize players and rounds
	int players, rounds;

	//Create file stream
	string fileName = "names.txt";
	ofstream outFile;
	outFile.open(fileName);

	//Get player and round count
	cout << "Enter number of players: ";
	cin >> players;

	cout << "Enter number of rounds: ";
	cin >> rounds;

	//Get each player's name
	for (int i = 1; i <= players; i++) {
		string playerName;

		cout << "Enter Player " << i << " name: ";
		cin >> playerName;

		//Write the name to the file
		outFile << playerName << endl;
	}

	//Clear screen
	system("cls");

	//Play each round
	for (int r = 1; r <= rounds; r++) {
		cout << "Round " << r << endl;
		outFile << "Round " << r << " Scores" << endl;

		//Get each player score
		int currentPlayerScore;
		for (int p = 1; p <= players; p++) {
			cout << "Enter Player " << p << " score: ";
			cin >> currentPlayerScore;

			//write score to file
			outFile << currentPlayerScore << endl;
		}
	}

	//Close file stream
	outFile.close();
}
