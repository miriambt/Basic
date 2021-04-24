/* Counting a's (2)
Write a program that reads a sequence of characters and prints the number of letters ‘a’ in the sequence before the first period.

Input

Input consists of a sequence of characters with at least one period.

Output

Print the number of times that ‘a’ appears in the sequence before the first period.

Observation

The expected solution for the exercise P97969: “Counting a’s (1)” is also a correct solution for this exercise.
*/

#include <iostream>
using namespace std;

int main () {
    char c;
    int i = 0;
    int found = false;

    while (cin >> c and not found) {
        if (c == 'a') ++i;
        if (c == '.') found = true;
    }
    cout << i << endl;
}


/* 
Example:
Input: I am an instance with four a's.
Output: 4

Input: I just have one. Yes, exactly one.
Output: 1

Input: Absolutely none.
Output: 0
*/