#include<iostream>

using namespace std;



int RandomNumber(int min, int max) {
	return rand() % (max - min + 1) + min;
}


int main() {
	int min, max;
	cout << "Enter the minimum value: ";
	cin >> min;
	cout << "Enter the maximum value: ";
	cin >> max;
	int randomNum = RandomNumber(min, max);
	cout << "Random number between " << min << " and " << max << ": " << randomNum << endl;
	return 0;
}
