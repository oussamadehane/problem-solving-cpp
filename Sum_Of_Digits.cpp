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

int SumOfReversNumber(int Number)
{
	int Remainder = 0,Sum = 0;
	while (Number>0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum += Remainder;
	}
	return Sum;
}


int main()
{
	cout << "The Sum of Number  is : " << SumOfReversNumber(ReadPositiveNumber("Please enter a positive Number : "));
	system("pause>0");
}
