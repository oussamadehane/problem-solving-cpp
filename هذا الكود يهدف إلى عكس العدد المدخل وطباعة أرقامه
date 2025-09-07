#include<iostream>
#include<string> // Used to properly handle std::string

using namespace std;

// This function reads a positive integer from the user.
int ReadPositiveNumber(string message)
{
	int Number = 0;
	do
	{
		cout << message;
		cin >> Number;
	} while (Number <= 0); 
	return Number;
}

// This function reverses a given integer.
int ReverseNumber(int Number)
{
	int Remainder = 0;
	int ReversedNumber = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		ReversedNumber = ReversedNumber * 10 + Remainder;
	}
	return ReversedNumber;
}

// This function prints each digit of a number on a new line.
void PrintDigitsInOrder(int Number)
{
	cout << "\n";
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}

int main()
{
	int UserNumber = ReadPositiveNumber("Enter a positive number: ");
	int ReversedNum = ReverseNumber(UserNumber);
	PrintDigitsInOrder(ReversedNum);
	return 0;
}
