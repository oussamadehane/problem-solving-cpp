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



bool CheckNumberFind(int Arr[50], int Length, int Number)
{
	for (int i = 0; i < Length; i++)
	{
		if (Number == Arr[i])
		{
			return true;
		}
	}
	return false;
	
}


int main()
{
	srand((unsigned)time(0));

	int Arr[50]; int Length;
	ReadArray(Arr, Length);
	PrintArray(Arr, Length);
	short NumberToCheck = ReadPositiveNumber(" Enter The Number You Want To Check : ");
	if (CheckNumberFind(Arr,Length,NumberToCheck))
	{
		cout <<  " the Number  You lookig For " << NumberToCheck <<" \n Yes Is Found ";
	}
	else
	{
		cout << " Not Found ";
	}
	
	return 0;

}
