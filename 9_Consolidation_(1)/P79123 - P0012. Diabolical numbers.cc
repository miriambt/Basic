/* P0012. Diabolical numbers
Input

The input consists of a sequence of integers strictly positive finished in −1-

Output

Your program must print the quantity of diabolical numbers of the sequence, with six digits. 
(The inputs will always have less than a million diabolical numbers.)
*/

#include <iostream>
using namespace std;


int sum_of_digits_in_base_4(int n) {
	if (n < 4) return n;
	else return n % 4 + sum_of_digits_in_base_4(n/4);
}

bool is_diabolical(int n) {
	return n % (2 * sum_of_digits_in_base_4(n)) == 0;
}

int num_digits_compt(int x) {
	if (x < 10) return 1;
	else return 1 + num_digits_compt(x/10);

}

int main () {
	int n;
	double compt = 0;
	while (cin >> n and n != -1) {
		if (is_diabolical(n)) ++compt;
	}
	int num_0 = 6 - num_digits_compt(compt);
	while (num_0 > 0) {
		cout << "0";
		--num_0;
	} 
	cout << compt << endl;

}

/* Example:
Input: -1
Output: 000000

Input: 20 -1
Output: 000001

Input: 17 4 6 20 20 23 140 28 255 999999972 1 2 -1
Output: 000006
*/