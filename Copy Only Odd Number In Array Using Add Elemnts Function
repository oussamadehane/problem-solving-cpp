#include<iostream>
#include<string>


using namespace std;


int Random_Function(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void Fill_Array_With_Random_Number(int Arr[50], int &Length)
{
	cout << " Enter The Size Of Elements : ";
	cin >> Length;
	for (int i = 0; i < Length; i++)
	{
		Arr[i] = Random_Function(1, 100);
	}
}


void Print_Array(int Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
}

void Add_Elements_To_Array(int Number, int Arr[50], int &Length)
{
	Arr[Length] = Number;
	Length++;
}

void Copy_Array_With_Add_Elements_Function(int ArrOrginal[50],int ArrCopy[50],int LengthOrg,int &LengthCopy)
{
	for (int i = 0; i < LengthOrg; i++)
	{
		Add_Elements_To_Array(ArrOrginal[i], ArrCopy, LengthCopy);
	}
}
void Print_Only_Odd_Numbers_In_Array(int Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		if (Arr[i] % 2 != 0)
		{
			cout << Arr[i] << " ";
		}

	}
}

int main()
{
	srand((unsigned)time(NULL));
	int ArrOrginal[50];
	int LengthOrginal = 0;
	Fill_Array_With_Random_Number(ArrOrginal, LengthOrginal);
	Print_Array(ArrOrginal, LengthOrginal);
	
	cout << endl;
	int ArrCopy[50];
	int LengthCopy = 0;
	Copy_Array_With_Add_Elements_Function(ArrOrginal, ArrCopy, LengthOrginal, LengthCopy);
	Print_Array(ArrCopy, LengthCopy);
	cout << " \n The Odd Numbers In this Array is : \n  ";
	Print_Only_Odd_Numbers_In_Array(ArrCopy, LengthCopy);
	return 0;
}
