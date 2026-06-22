#include<iostream>
#include<cstdlib>


using namespace std;


int RandomFunction(int Min, int Max)
{
	return rand() % (Max - Min + 1) + Min;
}


void FillArrayWithRandomNumber(int Arr[50], int& Length)
{
	cout << "Enter Number Of Elements : ";
	cin >> Length;
	for (int i = 0; i < Length; i++)
	{
		Arr[i] = RandomFunction(1, 100);
	}
}


void PrintArray(int Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}


void AddArrayElemnts(int Number,int Arr[50], int& Length)
{
	Arr[Length] = Number;
	Length++;
}


void CopyArrayWithAddArrayElements(int ArrOrg[50], int ArrCopy[50], int LengthOrg, int &LengthCopy)
{
	for (int i = 0; i < LengthOrg; i++)
	{
		AddArrayElemnts(ArrOrg[i], ArrCopy, LengthCopy);
	}
}


int main()
{
	srand((unsigned)time(NULL));
	int ArrOrg[50];int LengthOrg = 0;
	
	FillArrayWithRandomNumber(ArrOrg, LengthOrg);
	PrintArray(ArrOrg, LengthOrg);
	
	
	int ArrCopy[50];  int LengthCopy = 0;

	
	cout << "\n-------------------------------------------\n";
	CopyArrayWithAddArrayElements(ArrOrg, ArrCopy, LengthOrg, LengthCopy);
	PrintArray(ArrCopy, LengthCopy);
	return 0;
	
}
