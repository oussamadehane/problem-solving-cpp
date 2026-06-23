#include<iostream>

using namespace std;


int RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (To - From + 1) + From;return RandomNumber;
}

enum MyCharType
{
	SamallLetter = 1, CapitalLetter = 2,
	SpecialCharacter = 3, Digit = 4
};

char RandomChar(MyCharType Type)
{
	char RandomChar;
	switch (Type)
	{
	case SamallLetter:
		RandomChar = RandomNumber(97, 122);
		break;
	case CapitalLetter:
		RandomChar = RandomNumber(65, 90);
		break;
	case SpecialCharacter:
		RandomChar = RandomNumber(33, 47);
		break;
	case Digit:
		RandomChar = RandomNumber(48, 57);
		break;
	default:
		break;
	}
	return RandomChar;
}


void RandomPassword(int Length)
{
	for (int i = 0; i < Length; i++)
	{
		int Type = RandomNumber(1, 4);
		cout << RandomChar((MyCharType)Type);
	}
}

int main()
{
	srand((unsigned)time(NULL));
	RandomPassword(10);
	
	system("pause");
}
