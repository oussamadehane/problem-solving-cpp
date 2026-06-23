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
	cout << " Enter The Elemnts Of Array : " << endl;
	for (int i = 0; i < Length; i++)
	{
		cout << "Elemnt Number [" << i + 1 << "] : ";
		cin >> Arr[i];
	}
	cout << endl;
}


void PrintArray(int Arr[50], int Length)
{
	cout << endl;
	for (int  i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
}


int main()
{
	int Arr[100];
	int  Length;

	ReadArray(Arr,Length);
	PrintArray(Arr ,Length);
	return 0;
}
