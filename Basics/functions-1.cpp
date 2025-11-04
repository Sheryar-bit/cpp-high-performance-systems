//Functions
#include <iostream>
#include <cmath>

using std::cout; //for ouptput
using std::cin;  //for input


//double power(double, int); // function declaration

//Custom Function:
double power(double base, int exp) {
	double result = 1;
	for(int i=0; i<exp; i++) {
		result = result*base;
	}
	return result;
}

//Bult in function <cmath>
int main() {
	int base, exp;
	cout << "Enter the base: " << std::endl;
	cin >> base;
	cout << "Enter the exponent: " << std::endl;
	cin >> exp;
//	cout << pow(base, exp);
//	cout << pow(2,2);

	double mypower= power(base,exp); //calling our function and saving into a variable.
	cout << mypower << std::endl;
}


//Even odd (did in 3-mins)
void evod(int num) {
	if (num%2==0) {
		cout << "Even" << std::endl;
	}
	else {
		cout << "Odd" << std::endl;
	}
//	return num;
	
}
int main() {

	int num;
	cout << "Enter any number: " << std::endl;
	cin >> num;
	
	evod(num);
	return 0;
}


//find the min and max (did in 4-mins)
void minmax(int num1, int num2) {
	if (num1 > num2) {
		cout << "first entered number is greater then seconed number!" << std::endl;
	}
	else if(num1 < num2) {
			cout << "second entered number is greater then first number!" << std::endl;
	}
	else {
			cout << "Both the numbers are equal!" << std::endl;
	}
}


int main () {
	int num1, num2;
		cout << "Enter your first number!" << std::endl;
		cin >> num1;
		cout << "Enter your seconed number!" << std::endl;
		cin >> num2;
		
		minmax(num1, num2);
		return 0;

}