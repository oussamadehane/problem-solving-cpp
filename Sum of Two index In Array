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


void CopyArray(int OrgArr[50], int CopyArr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		OrgArr[i] = CopyArr[i];
		
	}
	
}


void SumOfTwoArray(int ArrOrg[50], int ArrCopy[50],int ArrSum[50], int Length)
{
	
	for (int i = 0; i < Length; i++)
	{
		ArrSum[i] = ArrOrg[i] + ArrCopy[i];
	}
}



int main()
{
	srand((unsigned)time(NULL));

	
	int Arr[50];int ArrCopy[50];int ArrSum[50];
	int Length = ReadPositiveNumber(" Enter The Size Of Array : ") ;
	FillArrayWithRandomNumber(Arr, Length);
	PrintArray(Arr, Length);
	cout << endl;

	CopyArray(ArrCopy, Arr, Length);
	PrintArray(ArrCopy, Length);

	SumOfTwoArray(Arr, ArrCopy, ArrSum, Length);
	cout << endl;
	PrintArray(ArrSum, Length);

	return 0;

}
