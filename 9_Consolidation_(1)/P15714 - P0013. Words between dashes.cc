/* P0013. Words between dashes
Consider a sequence of words formed by letters. The words are separated with dashes, which can appear also at the beginning and in the end of the sequence. The sequence ends with a dot.

Your task is to write a program that prints the number of short words (less than five letters), medium (between five and nine letters), and long (more than nine letters).

Input

The input consists of a line with letters and dashes, finished with a dot.

Output

Your program must print a line with the number of short, medium and long words separated by commas.

Observation

Using |strings| is not allowed in this problem.
*/

#include <iostream>
using namespace std;

int main () {
	char c;
	int s = 0;
	int m = 0;
	int l = 0;
	int compt = 0;
	while (cin >> c) {
		if (c >= 'a' and c <= 'z') ++compt;
		else {
			if (compt > 0 and compt < 5) ++s;
			else if (compt >= 5 and compt <= 9) ++m;
			else if (compt > 9) ++l;
			compt = 0;
		}
	}
	cout << s << "," << m << "," << l << endl;
}


/* Example:
Input: .
Output: 0,0,0

Input: -----abcde-.
Output: 0,1,0

Input: aaabbbccc.
Output: 0,1,0

Input: ----------------.
Output: 0,0,0

Input: easy--to-solve-problem----.
Output: 2,2,0
*/