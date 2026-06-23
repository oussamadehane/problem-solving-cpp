#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;


int RandomFunc(int Min, int Max)
{
	return rand() % (Max - Min + 1 )+ Min;
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


void FillArrayWithRandomNumber(int Arr[50], int &Length)
{
	cout << " Enter The Size Of Array : " << endl;
	cin >> Length;
	for (int i = 0; i < Length; i++)
	{
		Arr[i] = RandomFunc(1, 100);
	}
}


void PrintArray(int Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
}

bool IsPrime(int Number)
{
	if (Number <= 1)return false;
	if (Number == 2)return true;
	if (Number % 2 == 0)return false;
	for (int i = 3; i <= sqrt(Number); i += 2)
	{
		if (Number % i == 0)
		{
			return false;
		}
	}
	return true;

}

void CopyArray(int OrgArr[50], int CopyArr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		OrgArr[i] = CopyArr[i];
		
	}
	
}


void PrintOnlyPrimeNumber(int Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		if (IsPrime(Arr[i])==true)
		{
			cout << Arr[i] << " ";
		}
	}
}


int main()
{
	srand((unsigned)time(NULL));

	
	int Arr[50];int ArrCopy[50]; int Length;
	FillArrayWithRandomNumber(Arr, Length);
	PrintArray(Arr, Length);


	cout << endl;
	
	CopyArray(ArrCopy, Arr, Length);
	PrintArray(ArrCopy, Length);
	cout << endl;
	cout << " The Prime Number in Array is : ";

	PrintOnlyPrimeNumber(ArrCopy, Length);
	return 0;

}
