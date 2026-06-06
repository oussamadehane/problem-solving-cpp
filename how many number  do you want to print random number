#include<iostream>

using namespace std;


int RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (To - From + 1) + From;return RandomNumber;
}


void PrintRandomNumbers(int HowManyNumbers, int From, int To)
{
	for (int i = 0; i < HowManyNumbers; i++)
	{
		cout << RandomNumber(From, To) << "\t";
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int HowManyNumbers, From, To;
	cout << "How many random numbers do you want to generate? ";
	cin >> HowManyNumbers;
	cout << "From: ";
	cin >> From;
	cout << "To: ";
	cin >> To;
	PrintRandomNumbers(HowManyNumbers, From, To);
	system("pause");
}
