#include<iostream>


using namespace std;


void Fill_Array_With_Numbers(int Arr[50], int& Length)
{
	Length = 6;
	Arr[0] = 10;
	Arr[1] = 10;
	Arr[2] = 20;
	Arr[3] = 20;
	Arr[4] = 30;
	Arr[5] = 30;
}


void Print_Array(int Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
}

short Find_Numbers_In_Array(int Number, int Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		if (Number == Arr[i])
		{
			return i;
		}
	}return -1;
}


bool Is_Number_In_Array(int Number, int Arr[50], int Length)
{
	return Find_Numbers_In_Array(Number, Arr, Length) != -1;
}

void Add_Elements_To_Array(int Number,int Arr[50], int &Length)
{
	Arr[Length] = Number;
	Length++;
}
void Print_Discint_Numbers(int ArrOriginal[50], int ArrDiscint[50], int LengthOriginal, int &LengthDiscint)
{
	for (int i = 0; i < LengthOriginal; i++)
	{
		if (!Is_Number_In_Array(ArrOriginal[i], ArrDiscint, LengthDiscint))
		{
			Add_Elements_To_Array(ArrOriginal[i], ArrDiscint, LengthDiscint);
		}
		
	}
}


int main()
{
	int arrOriginal[50];
	int LengthOriginal = 0;
	cout << endl;
	Fill_Array_With_Numbers(arrOriginal, LengthOriginal);
	Print_Array(arrOriginal, LengthOriginal);
	int arrCopy[50];
	int LengthCopy =0;
	cout << endl;
	Print_Discint_Numbers(arrOriginal, arrCopy,  LengthOriginal, LengthCopy);
	Print_Array(arrCopy, LengthCopy);
	return 0;
}
