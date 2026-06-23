#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;



int RandomNumber(int Min, int Max)
{
	int RandomNumber = rand() % (Max - Min + 1) + Min;
	return RandomNumber;
}


void Fill_Array_With_Random_Numbers(int Arr[50], int& Length)
{
	cout << " How Many Elements Do You Want : " << endl;
	cin >> Length;

	for (int i = 0; i < Length; i++)
	{
		Arr[i] = RandomNumber(-100, 100);
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

int Count_Only_Negative_Numbers_In_Array(int Arr[50], int Length)
{
	int Counter = 0;
	for (int i = 0; i < Length; i++)
	{
		if  (Arr[i] < 0)
		{
			Counter++;
		}
	}
	return Counter;
}



int main()
{
	srand((unsigned)time(NULL));

	int Arr[50]; int Length;
	Fill_Array_With_Random_Numbers(Arr, Length);
	PrintArray(Arr, Length);

	cout << " Negative  Numbers In This Array Are : ";
	cout << Count_Only_Negative_Numbers_In_Array(Arr, Length);

	return 0;

}
