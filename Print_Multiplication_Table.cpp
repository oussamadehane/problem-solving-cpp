#include<iostream>
#include<string>


using namespace std;

void PrintHeaderTable()
{
	cout << " \n\n\t\t\tTable Header Table Multiplication From 1 To 10\t\t\t \n\n\t";
	for (short i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << "\n-----------------------------------------------------------------------------------------\n";

}

void PrintMultiplication()
{
	PrintHeaderTable();
	for (short i = 1; i <=10 ; i++)
	{
		if (i <10)
		{
			cout << " " << i  << " |";
		}
		else
			cout << " " << i  << "|";
		for (short j = 1; j <=10 ; j++)
		{
			cout << "\t" << i * j ;
		}
		cout << endl;
	}
}
int main()
{
	PrintMultiplication();
	system("pause>0");
}
