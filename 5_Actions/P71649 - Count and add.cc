/* Count and add
Write a procedure
     void count_and_add(int& num, int& sum);
to read a sequence of integer numbers until its end, and store in num how many numbers it has, and store in sum the sum of those numbers. For instance, if the input sequence is 10 -3 23. The values after the call must be num = 3 and sum = 30. Observation You only need to submit the required procedure; your main program will be ignored.
*/

#include <iostream>
using namespace std;

void count_and_add (int& num, int& sum) {
	int n;
	sum = 0;
	num = 0;
	while (cin >> n) {
		++num;
		sum += n;
	}
}

int main () {
	int num, sum;
	count_and_add (num, sum);
	cout << num << " " << sum << endl;
}
