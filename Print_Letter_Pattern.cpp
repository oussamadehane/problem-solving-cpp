#include<iostream>

using namespace std;



// Author: Eng. Dehane Oussama
// written on: 04/06/2026
// written for: C++ Course 
// written in: Visual Studio 2022
// feature: This program reads a positive number from the user and prints a pattern of letters based on that number.
// Function to read a positive number from the user

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}



void PrintLetterPattern(int Number)
{
	cout << endl;

	for (int i = 65; i <= 65+Number-1; i++)
	{
		for (int j = 1; j <= i - 65 + 1; j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
    
}



int main()
{
	int Number = ReadPositiveNumber("Enter a positive number: ");
	PrintLetterPattern(Number);
	
	return 0;
}
