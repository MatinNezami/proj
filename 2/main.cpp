#include <iostream>

using namespace std;


int main() {

	int x, y, z;
	
	cout << "Enter x: ";
	cin >> x;
	
	cout << "Enter y: ";
	cin >> y;
	
	cout << "Enter z: ";
	cin >> z;
	
	int denominator = ((x + y + z) * (x + y + z)) + 1;
	
	if ( denominator == 0 ) {
		cout << "The numbers incorrect";
	}
	
	else {
		float result = (float)( (x - y) * (x + z) ) / denominator;
		cout << "The result is: " << result;
	}

}