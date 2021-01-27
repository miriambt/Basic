/* Rhumbos 
Given a number n, prints a “rhombus of size n”.

Input: consists of a natural number n ≥ 1.

Output: print 2*n − 1 lines, as shown in the examples.
*/

#include <iostream> 
using namespace std;

void fila_trianglesup(int a, int b) {

	while (a > 1) {
		cout << " ";
		--a;
	} while (b > 0) {
		cout << "*";
		--b;
	} cout << endl;
}

void fila_triangleinf(int a, int b) {
	while (a > 1) {
		cout << " ";
	    --a;
	} while (b > 0) {
	   	cout << "*";
	   	--b;
	} cout << endl;
}	

int main() {
	int a;
	cin >> a;
	int b = 1;

	while (a > 0) {
		fila_trianglesup(a, b);
		--a;
        b = b + 2;
	}
	
	a = a + 2;
	b = b - 4;
	while (b > 0) {
		fila_triangleinf(a, b);
		++a;
		b = b - 2;
	}
}

/* Example
Input: 4
Output:    
   *
  ***
 *****
*******
 *****
  ***
   *
*/