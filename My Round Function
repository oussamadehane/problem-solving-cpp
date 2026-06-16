#include<iostream>
#include<cmath>

using namespace std;

float ReadNumber()
{
	float Number = 0;
	cout << " Enter Your Number : " << endl;
	cin >> Number;
	return Number;
}

float Fraction_Part(float Number)
{
	return Number - (int)Number;
}
float MyRoundFunction(float Number)
{
	int IntgerPart = int(Number);
	float FarctionPart = Fraction_Part(Number);
	if (abs(FarctionPart)>=0.5)
	{
		if (Number > 0)
		{
			return IntgerPart + 1;
		}
		else
			return IntgerPart - 1;
	}
	return IntgerPart;
}

int main()
{
	
	
	cout << MyRoundFunction(ReadNumber());
	return 0;

}
