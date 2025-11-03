#include <iostream>

//Remains Global
using std::cout;
using std::cin;

int main () {
	int slices;
	cout << "Enter the number of slices:" << std::endl;
	cin >> slices; // used for input --> comes from iostream
	cout << "You have " << slices << " slices of pizza." << std::endl;
}


//Simple calc
int main () {
	int num1, num2;
	cout << "Enter 1st number" << std::endl;
	cin >> num1;
	cout << "Enter 2nd number" << std::endl;
	cin >> num2;
	int sum = num1 + num2;

	cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
	
	return 0;
	
	
}


