#include<iostream>
#include<string>
#include<limits>
#include<cmath>


using namespace std;

int ReadNumberFromUser(string Message)
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
			cout << " You Have Entred A Text (: \n";
		}
		else
		{
			system("color 07");
		}
	} while (PositiveNumber <= 0);
	return PositiveNumber;
}

bool IsPrime(int Number)
{
	if (Number <= 1)return false;
	if (Number == 2)return true;
	if(Number % 2 == 0)return false;
	for (int i = 3; i <= sqrt(Number); i+=2)
	{
		if (Number % i == 0)
		{
			return false;
		}
	}
	return true;

}


void PrintAllPrimeNumberFrom1ToN(int Number)
{
	for (int i = 1; i <=Number ; i++)
	{
		if (IsPrime(i))
		{
			cout << i << endl;
		}
	}
}


int main()
{
	PrintAllPrimeNumberFrom1ToN(ReadNumberFromUser(" - Please Enter A Posirive Number :"));
	system("pause>0");
}
