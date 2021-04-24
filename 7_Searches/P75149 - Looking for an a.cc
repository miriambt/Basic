/* Looking for an a 
Write a program that reads a sequence of characters ended in a dot and tells if the sequence has any lowercase ‘a’ or not.

Input

Input consists of a sequence of characters ended in ‘.’.

Output

Print “yes” or “no” depending on whether ‘a’ appears in the sequence or not. 
*/

#include <iostream>
using namespace std;

int main () {
    bool trobat = false;
    char c;
    while (not trobat and cin >> c) {
        if (c == 'a') trobat = true;
    }
    cout << (trobat ? "yes" : "no") << endl;
}

/* 
Example:
Input: I have some a's.
Output: yes

Input: I do not.
Output: no
*/