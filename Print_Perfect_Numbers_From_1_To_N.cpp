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

void PrintIsPerfectNumberFrom1ToN(int Number)
{
	for (int i = 1; i < Number; i++)
	{
		if (IsPerfectNumber(i))
		{
		cout << i <<" Is Perfect Number " << endl;
		}
	
	}
	
}



int main()
{
	PrintIsPerfectNumberFrom1ToN(ReadPositiveNumber("Please Enter A positive Number : "));
	system("pause>0");
}
