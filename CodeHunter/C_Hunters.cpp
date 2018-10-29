//Creator Information:
/*
 *Name: Hunter Derrick
 *Start Date: 10/28/2018
 *Completion Date: 10/28/2018
 *Professor Name: Tony Hinton
 *Class: CSC215 @ UAT
 *Project Name: Debugging Skills - Code Hunter
 */
//Project Task: 
/*
 *	Create a new C++ project in Visual Studio and name it Code Hunter.
	Copy and paste the code below into your new project's main CPP file replacing all of its existing code.
	Run your code hunter program and type in a sentence for it to analyze. 
	You should see the analysis printed out along with  WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!
	Use your new debug skills to fix this program so when you run it and type in a sentence to analyze you see the analysis printed out along with the message  This program self checking has found this Analysis to be valid.
	Once the program is working and you have tested it a few times, create a new repository in your GitHub account called Code Hunter.
	Add your solution and files to your new Code Hunter Repository on GitHub.
	Take a screen shot of this project in GitHub
	Take a screen shot of the program working with the correct message. 
	Comment where and how you fixed the code in each place in your .CPP file. 
 */


 // CodeHunter.cpp : Defines the entry point for the console application.

//#include "stdafx.h"   <--This was an immediate error found.
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string textToAnalyze;
	int foo = 0;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	int bar = 0;

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);

	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels; // ERROR FOUND: Change this to ++ Vowels.
		}
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
			++consonants;  //ERROR FOUND: This was commented out. Now it is counting consonants.
		}
		//ERROR FOUND: Digits are not being counted. No
		/*
		 *else if (textToAnalyze[i] >= 0 && textToAnalyze[i] <= 9)
		{
			++digits;
		}
		 */
		
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		else
		{
			++unknownCharacters;
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	//cout << "Digits: " << digits << endl;  ERROR FOUND: NO NEED FOR THIS TO BE HERE.
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}