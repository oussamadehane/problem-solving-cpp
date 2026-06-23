#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int RandomNumber(int Min, int Max)
{
	int RandomNumber = rand() % (Max - Min + 1) + Min;
	return RandomNumber;
}

enum EnCharType
{
	SmallLetter = 1, CapitaleLetter = 2, SpecialCharacter = 3, Number = 4
};


char GetRandomCharacter(EnCharType CharType)
{
	switch (CharType)
	{
	case SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	case CapitaleLetter:
		return char(RandomNumber(65, 90));
		break;
	case SpecialCharacter:
		return char(RandomNumber(33, 47));
		break;
	case Number:
		return char(RandomNumber(48, 57));
		break;
	default:
		break;
	}
}

int ReadPostiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}


string GenerateWord(EnCharType CharType, short WordLength)
{
	string Word = "";
	for (int i = 0; i < WordLength; i++)
	{
		Word += GetRandomCharacter(CharType);
	}
	return Word;
}


string GenerateKey()
{
	string Key = "";
	for (int i = 0; i < 4; i++)
	{
		Key = GenerateWord(CapitaleLetter, 4) + "-";
		Key = Key + GenerateWord(CapitaleLetter, 4) + "-";
		Key = Key + GenerateWord(CapitaleLetter, 4) + "-";
		Key = Key + GenerateWord(CapitaleLetter, 4) ;		
		if (i != 3)
			Key += "\n";
	}
	return Key;
}

void GenerateKeys()
{
	short NumberOfKeys = ReadPostiveNumber("Enter number of keys to generate: ");
	for (int i = 0; i < NumberOfKeys; i++)
	{
		cout << "Key " << i + 1 << ":\n" << GenerateKey() << endl;
	}
}

void FillArrayWithKeys(string Arr[50], int LENGTH)
{
	for (int i = 0; i < LENGTH; i++)
	{
		Arr[i] = GenerateKey();
	}
}

void PrintArray(string Arr[50], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << "key [ " << i + 1 << " ] : " << Arr[i] << endl;
	}
}
int main()
{
	srand((unsigned)time(0));
	string Arr[50]; int Length = ReadPostiveNumber("Enter how Many Keys : ");
	FillArrayWithKeys(Arr, Length);

	PrintArray(Arr, Length);
	return 0;
}
