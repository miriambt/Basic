/* Function for leap years 
Write a function that tells if the given year is a leap year or not. 
To recall the rules about leap years, check the exercise P61634: “Leap years”. */

#include <iostream>
#include <cmath>
using namespace std;

bool is_leap_year (int year) {
	if (year%100 != 0) {                        
        if (year%4 == 0) return true; 
        else return false;
    }        
    else if (year/100%4 == 0) return true;
        else return false;
}

int main () {
	int year;
	cin >> year;
	if (is_leap_year (year)) cout << "true" << endl;
	else cout << "false" << endl;
}

/* Example
s_leap_year(1967) → false 
is_leap_year(1968) → true 
is_leap_year(2100) → false 
is_leap_year(2400) → true 
*/