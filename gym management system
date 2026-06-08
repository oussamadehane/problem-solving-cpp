#include<iostream>
#include<string>

using namespace std;
//atuhors: Dehane Oussama
//this program is for the gym management system, it will help the gym to manage their members and their payments.
//visual studio 2022
void ShowMenu() {
	cout << "Welcome to the Gym Management System" << endl;
	cout << "1. Add a new member" << endl;
	cout << "2. Check Subsucription " << endl;
	cout << "3. Show Prices" << endl;
	cout << "4. Exit" << endl;
	cout << "Please enter your choice: \n";
}


void DisplayPrices() {
	cout << "Prices: " << endl;
	cout << "1. Monthly: 1800 DA" << endl;
	cout << "2. VIP : 4000 DA" << endl;
}

int main() {
	int choice;
	string name;
	int age;
	string subscriptionType;
	double paymentAmount;
	while (true) {
		ShowMenu();
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Enter member's name: ";
			cin >> name;
			cout << "Enter member's age: ";
			cin >> age;
			cout << "Enter subscription type (Monthly/VIP): ";
			cin >> subscriptionType;
			cout << "Enter payment amount: ";
			cin >> paymentAmount;
			cout << "Member added successfully!" << endl;
			break;
		case 2:
			cout << "Checking subscription..." << endl;
			// Here you can add code to check the subscription status of a member
			break;
		case 3:
			DisplayPrices();
			break;
		case 4:
			cout << "Exiting the program. Goodbye!" << endl;
			return 0;
		default:
			cout << "Invalid choice. Please try again." << endl;
		}
	}
	return 0;
}
