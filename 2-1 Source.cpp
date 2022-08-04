/*
	Travis Carpenter
	SNHU - Programming w/ C++ .NET
	Professor Huda Mustafa
	Monday, July 4, 2022

	The code below utilizes two functions for handling the honor level and printing.
	Input is taken from the user as a numerical value. For each input value, a corresponding
	GPA value is given. The average is then calculated on the given GPA values. Finally,
	according the the average GPA, a corresponding honor level is set to true or false.

	The only issue I had was having booleans displayed as 0 or 1. This was quickly fixed
	by a Google search. I realized I could use 'boolapha' to output the true or false string.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

//Initialize Global Variables
int gradeCounter = 0;
int gradeTotal = 0;
float averageGPA;

//Initialize Honor Levels
bool summaCumLaude = false;
bool magnaCumLaude = false;
bool cumLaude = false;
bool noHonors = false;

//Function Stubs
void GetHonorLevel();
void PrintGPA();

//Main
int main() {
	float nextGrade;

	//Input loop
	cout << "Enter 4 grades as numerical values: " << endl;
	while (gradeCounter < 4) {
		cin >> nextGrade;

		if (nextGrade >= 90) {
			gradeTotal += 4;
			gradeCounter++;
		}
		else if (nextGrade >= 80) {
			gradeTotal += 3;
			gradeCounter++;
		}
		else if (nextGrade >= 70) {
			gradeTotal += 2;
			gradeCounter++;
		}
		else if (nextGrade >= 60) {
			gradeTotal += 1;
			gradeCounter++;
		}
		else {
			cout << "Enter a passing grade in numerical value." << endl;
		}
	}

	//Determine level of honors
	GetHonorLevel();
}

void GetHonorLevel() {
	//Cast gradeTotal to float and get the average GPA
	averageGPA = static_cast<float>(gradeTotal) / 4;
	
	//Determine honor level
	if (averageGPA >= 3.9) {
		summaCumLaude = true;
	}
	else if (averageGPA >= 3.8 && averageGPA <= 3.89) {
		magnaCumLaude = true;
	}
	else if (averageGPA >= 3.65 && averageGPA <= 3.79) {
		cumLaude = true;
	}
	else if (averageGPA < 3.65) {
		noHonors = true;
	}

	//Print the GPA and honor level
	PrintGPA();
}

void PrintGPA() {
	//Print the GPA as well as corresponding honor level
	cout << "------------------------------------------" << endl;
	cout << "Your GPA: " << averageGPA << endl;
	cout << boolalpha <<"Graduating Summa Cum Laude " << summaCumLaude << endl;
	cout << boolalpha <<"Graduating Magna Cum Laude " << magnaCumLaude << endl;
	cout << boolalpha <<"Graduating Cum Laude " << cumLaude << endl;
	cout << boolalpha <<"Graduating With no Honors " << noHonors << endl;
}
