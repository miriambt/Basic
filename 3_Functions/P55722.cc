/* Number of digits 
Write an iterative function that returns the number of digits of a number n. */

#include <iostream>
#include <cmath>
using namespace std;

int number_of_digits(int n) {
	int compt = 1;
	while (n >= 10) {
		++compt;
		n = n / 10;
	}
	return compt;
}

int main() {
	int n;
	cin >> n;
	cout << number_of_digits(n) << endl;
}

/* Example
number_of_digits(7) → 1 
number_of_digits(4321) → 4 
number_of_digits(0) → 1 
*/