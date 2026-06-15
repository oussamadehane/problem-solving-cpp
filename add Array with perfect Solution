#include<iostream>

using namespace std;
int ReadNumber()
{
	int Number = 0;
	cout << " Enter A Number : " << endl;
	cin >> Number;
	return Number;
}

void AddArray(int Number, int Arr[50], int &Length)
{
	Arr[Length]= Number;
	Length++;
}


void InputUser(int Arr[50], int& Length)
{
	bool AddMore = true;
	do
	{
		AddArray(ReadNumber(), Arr, Length);
		if (Length>=50)
		{
			cout << "Array is full! Cannot add more.\n";
			break;
		}
		cout << "Do You Want Top Add More Choose Yes [1] Or No [0]";
		cin >> AddMore;
	} while (AddMore);
}


void PrintArr(int Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		
		cout << Arr[i] << " ";
	}
}


int main()
{
	int Arr[50];
	int Length = 0;

	InputUser(Arr, Length);

	cout << Length << endl;
	cout << " array elements : " << endl;
	PrintArr(Arr, Length);
	return 0;
}


