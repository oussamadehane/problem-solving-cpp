#include<iostream>


using namespace std;

int ReadPostiveNumber()
{
	string Message = " Enter A Positive Number : ";
	int Number = 0;
	do
	{
		cout << Message << endl;cin >> Number;
	} while (Number <= 0);return Number;

}

void PrintInvertedPattern(int Number)
{
    char StartChar = 65 + Number - 1;

    for (char i = StartChar; i >= 65; i--)
    {
     
        for (int j = 1; j <= (i - 64); j++)
        {
            cout << i; 
        }
        cout << endl;
    }
}


int main()
{
    PrintInvertedPattern(ReadPostiveNumber());
	return 0;
}
