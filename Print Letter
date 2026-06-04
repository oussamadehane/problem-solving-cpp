#include<iostream>

using namespace std;

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



void PrintCapitalLetter(int Number)
{
	for (int  i = 65; i < Number+65-1; i++)
	{
		cout << char(i) << endl;
	}
}

void PrintSmallLetter(int Number)
{
	for (int i = 97; i < Number + 97 - 1; i++)
	{
		cout << char(i) << endl;
	}
}


int main()
{
	int Number = ReadPositiveNumber("Enter a positive number: ");
	PrintCapitalLetter(Number);
	PrintSmallLetter(Number);
	return 0;
}
