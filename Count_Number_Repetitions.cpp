#include<iostream>
#include<string>

using namespace std;


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
	cout << " Fill The Elemntes Of Array : " << endl;
	for (int i = 0; i < Length; i++)
	{
		cout << " Elments [ " << i + 1 << " ] : " << endl;
		cin >> Arr[i];
	}
}

void PrintArray(int Arr[50], int Length)
{
	cout << endl;
	for (int  i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
}


int CheckTheNumberReptedInArray(int Arr[50], int Length)
{
	short NumberToCheck = ReadPositiveNumber(" Enter The Number You Want To Check : ");
	int Count = 0;
	for (int i = 0; i < Length; i++)
	{
		if (Arr[i]==NumberToCheck)
		{
			Count++;
		}
	}
	cout << " the Number " << NumberToCheck << " is  repeted " << endl;
	return Count;
}

int main()
{

	int Arr[50]; int Length;
	ReadArray(Arr, Length);
	PrintArray(Arr, Length);
	cout  << CheckTheNumberReptedInArray(Arr, Length) << endl;
	return 0;

}
