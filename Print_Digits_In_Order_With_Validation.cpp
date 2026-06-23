#include<iostream>
#include<string>
#include<limits>


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
			cout << " You Have Entred A String :  " << endl;
		}
		else
		{
			system("color 07");
		}
	} while (Number <= 0);return  Number;
}


int ReverseNumber(int Number)
{
	int Remainder = 0;
	int Number2 = 0;
	while (Number>0)
	{
		Remainder = Number % 10;
		Number  = Number/ 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}



void Print(int Number)
{
	int Remainder = 0;
	while (Number>0)
	{
		Remainder = Number % 10;
		Number  = Number/10;
		cout << Remainder << endl;
	}
}



int main()
{
	Print(ReverseNumber(ReadPositiveNumber(" enter a Number ")));
	system("pause>0");
}
