/* Program that adds one second to a clock time, given its hours, minutes and seconds.

Input: three natural numbers (h, m and s) that represent a clock time, that is, such that h<24, m<60 and s<60.

Output: prints the new clock time defined by h, m and s plus one second in the format “HH:MM:SS”. */

#include <iostream> 
using namespace std; 

int main () {
	// Read the time 
	int h, m, s;
	cin >> h >> m >> s;

	// Increment one second
	s = s + 1;
	if (s == 60) {
		s = 0;
		m = m + 1; 
		if ( m == 60 ) {
			m = 0; 
			h = h + 1;
			if (h == 24) h = 0;
        }
    }

    // Write the result
    if (h < 10) cout << 0; 
    cout << h << ":" ;
    if (m < 10) cout << 0; 
    cout << m << ":" ;
    if (s < 10) cout << 0; 
    cout << s << endl; 
}