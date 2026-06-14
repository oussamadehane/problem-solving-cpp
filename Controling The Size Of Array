#include<iostream>


using namespace std;


int ReadNumber()
{
	int Number = 0;
	cout << " Enter A Number : ";
	cin >> Number;
	return Number;
}


void AddArrayElements(int Number,int Arr[50], int& Length)
{
		Length++;
		Arr[Length - 1] = Number;
}



void InptUserNumbersInArray(int Arr[50], int& Length)
{
	bool AddMore = true;
	do
	{
		AddArrayElements(ReadNumber(), Arr, Length);
		cout << " Do You Want To Add More Of Elements :  Yes [1] Or No [0]";
		cin >> AddMore;
	} while (AddMore);
}


void PrintArray(int Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
        cout << Arr[i] << " ";
	}
		
	cout << "\n";
}


int main()
{
	int Arr[50]; int Length = 0;
	
	InptUserNumbersInArray(Arr, Length);


	cout << "\nArray Length: " << Length << endl;
	cout << "Array elements: ";
	PrintArray(Arr, Length);
	return 0;
}
