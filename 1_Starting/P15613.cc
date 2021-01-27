/* Program that reads an integer number that represents a temperature given in degree Celsius, and that tells 
if the weather is hot, cold, or if it’s ok. It’s hot if the temperature is higher than 30 degrees, cold if the temperature is lower than 10 degrees, 
and it’s ok otherwise. Warns if with the given temperature water would boil, or if water would freeze. 

Input: an integer number.

Output: prints a line telling if it’s hot, if it’s cold, or if it’s ok. Additionally, prints another line if water would boild or if water would freeze.
*/

#include <iostream>
using namespace std;
int main () {
    int t; 
    cin >> t; 

    if (t > 30) {
        cout << "it's hot" << endl; 
        if (t >= 100) cout << "water would boil" << endl; 
    } 
    if (t < 10) {
        cout << "it's cold" << endl;
        if (t <= 0) cout << "water would freeze" << endl;
    } 
    if (30 >= t and t >= 10) cout << "it's ok" << endl;
}