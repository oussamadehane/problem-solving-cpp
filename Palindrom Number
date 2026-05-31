#include<iostream>
#include<limits>
#include<string>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
		if (cin.fail())
		{
			system("color 40");
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << " You Have ENTRED a String " << endl;
		}
		else
		{
			system("color 07");
		}

	} while (Number <= 0);return Number;
}


int ReverseNumber(int Number)
{
	int Remainder = 0;
	int Number2 = 0;
	while (Number>0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}

bool IsPalindromNumber(int Number)
{
	return Number == ReverseNumber(Number);
}

void PrintItsPlandromNumber()
{
	int Number = ReadPositiveNumber("Please enter a number : ");
	if (IsPalindromNumber(Number))
	{
		cout << " its Plaindrom number " << endl;
	}
	else
	{
		cout << " NO ITS nOT pLANDROM NUMBER " << endl;
	}
}


int main()
{
	PrintItsPlandromNumber();
	system("pause>0");
	return 0;
}
