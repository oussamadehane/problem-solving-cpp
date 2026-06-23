#include<iostream>


using namespace std;


void Fill_Array_With_Numbers(int Arr[50], int& Length)
{
	Length = 6;
	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 30;
	Arr[3] = 30;
	Arr[4] = 20;
	Arr[5] = 10;
}


void Print_Array(int Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
}


bool Is_Palindrom_Array(int Arr[], int Length)
{
	for (int i = 0; i < Length / 2; i++)
	{
		if (Arr[i] != Arr[Length - i - 1])
		{
			return false;
		}
	}
		return true;
}


int main()
{

	int Arr[50]; int Length = 0;
	Fill_Array_With_Numbers(Arr, Length);
	Print_Array(Arr, Length);
	if (Is_Palindrom_Array(Arr, Length))
		cout << " yes Is Palindrom Array " << endl;
	else
		cout << " No its Not Palindrome Array " << endl;
	
	return 0;
}
