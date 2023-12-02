#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	float number1,
		number2;
		
	cout << "Enter number one: ";
	cin >> number1;
	
	cout << "Enter number two: ";
	cin >> number2;
		
	cout << "\nThe multiply numbers is: " << (number1 * number2);
	
	cout << "\nThe sum numbers is: " << (number1 + number2);
	
	cout << "\nThe differentiation numbers is: " << (number1 - number2);
	
	cout << "\nThe remainder numbers is: " << fmod(number1, number2);
}