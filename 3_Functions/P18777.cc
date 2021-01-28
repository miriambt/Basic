/* Day of the week 
Write a function that, given a valid date made with a day d, a month m and a year y, returns its day of the week, that is, “Monday”, or “Tuesday”, or …
To compute it, use the congruence of Zeller.
*/

#include <iostream>
using namespace std;
 
string day_of_the_week (int d, int m, int y) {
        int c, a, f;
        m = m - 2;
        if (m <= 0) {
                m = m + 12;
                --y;
        }
        c = y/100;
        a = y%100;
        f = ((2.6 * m) - 0.2);
        f= f + d + a + (a / 4) + (c / 4) - (2 * c);
        while (f < 0) f = f + 7;
        f = f%7;
        if (f == 0) return "Sunday";
        else if (f == 1) return "Monday";
        else if (f == 2) return "Tuesday";
        else if (f == 3) return "Wednesday";
        else if (f == 4) return "Thursday";
        else if (f == 5) return "Friday";
        else return "Saturday";
}
 
int main() {
        int d, m, y;
        cin >> d >> m >> y;
        cout << day_of_the_week (d, m, y) << endl;
}

/* Example
day_of_the_week(28, 2, 2000) → Monday 
day_of_the_week(29, 2, 2000) → Tuesday 
day_of_the_week(1, 3, 2000) → Wednesday
*/