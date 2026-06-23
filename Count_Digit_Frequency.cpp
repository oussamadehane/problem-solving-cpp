#include<iostream>
#include<string>
#include<limits>
#include<cmath>


using namespace std;


int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;cin >> Number;
		if (cin.fail())
		{
			system("color 40");
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << " you Have Entred A String : " << endl;
		}
		else
		{
			system("color 07");
		}
	} while (Number <= 0);return Number;
}


int CountDigitFrequency(short DigitToCheck, int Number)
{
	int Remainder = 0;
	int CountFrequancy = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (DigitToCheck == Remainder)
		{
			CountFrequancy++;
		}
	}return CountFrequancy;
}
void Print()
{
	int Number = ReadPositiveNumber("Enter A positive Number : ");
	short DigitsToCheck = ReadPositiveNumber("enter didits :");
	cout << " the digits is repeted " << CountDigitFrequency( DigitsToCheck,Number);
}



int main()
{
	Print();
	system("pause>0");

}
