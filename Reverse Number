#include<iostream>
#include<string>
#include<limits>
#include<cmath>


using namespace std;


int ReadPositiveNumber(string Message)
{
	int PositiveNumber = 0;
	do
	{
		cout << Message << endl;
		cin >> PositiveNumber;
		if (cin.fail())
		{
			system("color 40");
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << " You Have Entred A string" << endl;

		}
		else
			system("color 07");
	} while (PositiveNumber <= 0);return PositiveNumber;
}

void PrintReversNumber(int Number)
{
	int Remainder = 0,Number2 = 0;
	while (Number>0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
		
	}
	cout << Number2;
}


int main()
{
	PrintReversNumber(ReadPositiveNumber("Please enter a positive Number : "));
	system("pause>0");
}
