#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;


int RandomFunc(int Min, int Max)
{
	return rand() % (Max - Min + 1) + Min;
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

void FillArrayWithOrderNumber(int Arr[50], int Length)
{
	
	for (int i = 0; i < Length; i++)
	{
		Arr[i] = i+1;
	}
}

void PrintArray(int Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
}

void ShuffleArray(int Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		swap(Arr[RandomFunc(1, Length) - 1], Arr[RandomFunc(1, Length) - 1]);
	}

}


void OrderArray(int Arr[50], int Length)
{
	for (int i = 0; i < Length-1; i++)
	{
		for (int j = i+1; j < Length; j++)
		{
			if (Arr[i]>Arr[j])
			{
				swap(Arr[i],Arr[j]);
			}
		}
	}
}




int main()
{

	srand((unsigned)time(NULL));
	int Arr[50];
	int Length = ReadPositiveNumber("Enter the Number :");

	FillArrayWithOrderNumber(Arr,Length);
	PrintArray(Arr, Length);
	cout << "\n-------------------------------------------------\n";
	ShuffleArray(Arr, Length);
	PrintArray(Arr, Length);

	cout << endl;

	OrderArray(Arr, Length);
	PrintArray(Arr, Length);
	
	return 0;

}
