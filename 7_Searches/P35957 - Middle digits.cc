/* Pica d'Estats
Anna and Bernard play the following game: First, they invent n numbers each. Later, and alternatively, Anna writes her first number, Bernard writes his first number, Anna writes her second number, Bernard writes his second number, and so on. The first to write a number such that its middle digit is not the same as the middle digit of the previous number, loses. (The first number, always Anna’s, may have any middle digit.) If someone writes a number with an even number of digits, he or she loses immedialty. If after writing the 2n numbers nobody loses, the game ends in a draw.

Write a program to decide who wins a game.

Input

Input consists of a natural number n≥ 1, followed by 2n natural numbers a1, b1, …, an, bn: a1 is the first number of Anna, b1 is the first number of Bernard, a2 is the second number of Anna, etcetera.

Output

Print ‘A’, ‘B’, or ‘=’, depending on whether Anna wins, Bernard wins, or it is a tie.
*/

#include <iostream>
#include <cmath>
using namespace std;

int digits (int x) {
	int i = 0;
	while (x > 0) {
		x /= 10;
		++i;
	}
	return i;
} 

int midde_number (int x) {
	if (x < 10) return x;
	else {
		int i = (digits(x)-1) / 2;
		int n = x/(pow(10, i));
		return n % 10;
	}
}

int main () {
	int n;  
	cin >> n;
	int p = 2*n;
	int a, b;
	cin >> a;

	int jugador = 0;
	char c = '=';
	bool trobat = false;

	if (digits (a) % 2 == 0 and a != 0) {
			trobat = true;
			c = 'B';
	}

	while (p > 0 and cin >> b and not trobat) {
		if (digits (b) % 2 == 0 and a != 0) {
			trobat = true;
			c = 'A';
		} if (midde_number (a) != midde_number (b)) {
			trobat = true;
			if (jugador % 2 == 0) c = 'A';
			else c = 'B';
		}
		++jugador;
		a = b;
		--p;
	}
	cout << c << endl;
}

/* 
Example:
Input:
8
7 7 7 7 0 7 7 7 7 7 7 7 7 7 7 7

Output:
B

Input:
3
3 134 78345 333 6543456 999939999

Output:
=

Input:
2
98789 77 111 7

Output:
A
*/