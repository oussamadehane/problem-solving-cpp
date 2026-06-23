#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;



int RandomNumber(int Min, int Max)
{
	int RandomNumber = rand() % (Max - Min + 1) + Min;
	return RandomNumber;
}


int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);return Number;
}


void ReadArray(int Arr[50], int& Length)
{
	cout << " Enter The Size Of Array : " << endl;
	cin >> Length;

	for (int i = 0; i < Length; i++)
	{
		Arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int Arr[50], int Length)
{
	cout << endl;
	for (int i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}



void SearchForNumber(int Arr[50], int Length)
{
	int SearchNumber = ReadPositiveNumber("Enter the Number You Search : ");
	for (int i = 0; i < Length; i++)
	{
		if (SearchNumber == Arr[i]) {
			cout << "the Number you Search " << SearchNumber << " is in Index " << i << " In order to " << i+1 <<  endl;
			return;
		}

	}
	cout << " the Number Not Found ";
	
}


int main()
{
	srand((unsigned)time(0));

	int Arr[50]; int Length;
	ReadArray(Arr, Length);
	PrintArray(Arr, Length);
	

	SearchForNumber(Arr, Length);
	return 0;

}
