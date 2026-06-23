#include<iostream>

using namespace std;
string GetPassword()
{
	string password;
	cout << "Enter password: ";
	cin >> password;
	return password;
}


bool PrintAllWordsFromAAATOZZZ(string Password)
{
	int Counter = 0;string WordGuess = "";

	for (char i = 'A'; i <= 'Z'; i++)
	{
		for (char j = 'A'; j <= 'Z'; j++)
		{
			for (char k = 'A'; k <= 'Z'; k++)
			{
				WordGuess = WordGuess + i;
				WordGuess = WordGuess + j;
				WordGuess = WordGuess + k;
				Counter++;
				cout << " trail [ " << Counter << "]" << WordGuess << endl;
				if (WordGuess ==Password)
				{
					cout << "password is  " << WordGuess << "Founed after " << Counter << " Trail " << endl;
					return true;
				}
				WordGuess = "";
			}
		}
	}
	return false;
}

int main()
{
	PrintAllWordsFromAAATOZZZ(GetPassword());
	return 0;
}
