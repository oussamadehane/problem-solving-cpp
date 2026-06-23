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

int MyFloor(float Number)
{
	
	if (Number > 0)
		return int(Number);
	else
		return int(Number) - 1;
}

int main()
{
	
	
	cout << MyFloor(ReadNumber());
	return 0;

}
