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

bool IsPerfectNumber(int Number)
{
	int Count = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number%i==0)
		{
			Count += i;
		}
	}
	return Count==Number;
}

void PrintIsPerfectNumber(int Number)
{
	if (IsPerfectNumber(Number))
	{
		cout << " Is Perfect Number " << endl;
	}
	else
		cout << " Is not Perfect Number" << endl;
}



int main()
{
	PrintIsPerfectNumber(ReadPositiveNumber("Please Enter A positive Number : "));
	system("pause>0");
}
