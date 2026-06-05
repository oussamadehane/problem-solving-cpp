#include<iostream>
#include<string>


using namespace std;


string GetPassword()
{
	string password;
	cout << "Enter your password: ";
	cin >> password;
	return password;
}

bool GuessPassword( string password)
{
	int Counter = 0;
	string GuessWord = "";
	for (char i = 'A'; i <= 'Z'; i++)
	{
		for (char j = 'A'; j <= 'Z'; j++)
		{
			for (char k = 'A'; k <= 'Z'; k++)
			{
				GuessWord += i;
				GuessWord += j;
				GuessWord += k;
				Counter++;
				if (GuessWord == password)
				{
					cout << "Password is: " << GuessWord << endl;
					cout << "Number of tries: " << Counter << endl;
					return true;
				}
				GuessWord = "";
			}

		}
	}
	return false;
}

int main()
{
	string password = GetPassword();
	if (!GuessPassword(password))
	{
		cout << "Password not found" << endl;
	}
	return 0;
}
