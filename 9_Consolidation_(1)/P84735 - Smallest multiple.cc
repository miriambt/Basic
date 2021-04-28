/* Smallest multiple
Write a program that reads pairs of natural numbers a and b, and for each one prints the smallest natural number that is greater than or equal 
to a and also a multiple of b.

Input

Input consists of a sequence of pairs of natural numbers a and b with b ≥ 1.

Output

For each a and b, print in a line the smallest natural number x such that x ≥ a and x = mb for some natural number m. 
Precede this with the case number starting at 1, following the format of the example.
*/

#include <iostream>
using namespace std;

int smallest_multiple(int a , int b) {
    if (a%b == 0) return a;
    else return b*(a/b+1);  
}
int main(){
    int a,b,c;
    c = 1;
     while (cin >> a >> b) {
        cout << "#" << c << " : " << smallest_multiple(a,b) << endl;
        ++c;
    }
}

/* Example:
Input:
12 5
10 5
123 1

Output:
#1 : 15
#2 : 10
#3 : 123
*/