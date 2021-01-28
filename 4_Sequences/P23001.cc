/* Consecutive repeated words 
Given a sequence of words, prints the length of the longest consecutive subsequence that only contains the first word. 
That is, if the sequence is s1, …, sn, prints max{j − i + 1 : 1 ≤ i ≤ j ≤ n ∧ si = si+1 = … = sj−1 = sj = s1 } .

Input: consists of a non-empty sequence of words.

Output: prints the number of words of the longest consecutive subsequence that only contains the first word.
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


bool repeated_words(string a, string b) {
	return b == a;
}

int maxcompt(int compt1, int compt2) {
	if (compt1 > compt2) return compt1;
	else return compt2;
}

int main() {
	string a, b;
	int compt1 = 1;
	int compt2 = 1;
	cin >> a;
	
	while (cin >> b) {
		if (repeated_words(a, b)) { 
			++ compt1;
		} else {
			compt2 = maxcompt(compt1, compt2);
			compt1 = 0;
		}
	}
	cout << maxcompt(compt1, compt2) << endl;
}

/* Example
Input: hello bye bye hello hello hello bye hello hello
Output: 3

Input: one  two  two  three  three  three
Output: 1
*/