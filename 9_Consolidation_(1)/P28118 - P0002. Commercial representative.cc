/* P0002. Commercial representative
A business representative does a series of routes in the city. Each route starts in a point, he goes to some shops and comes back to the origin.

Your task is to write a program that reads several routes and, for each one, prints the total done distance supposing that the movements among shops 
are done in straight line.

Your program must include the function that returns the Euclidean distance between the points (|x1|, |y1|) and (|x2|, |y2|).

Input

The input is a sequence of routes. Every route starts with a word that identifies it, and then, there is a sequence of two or more pairs of doubles 
that represent the coordinates of the visited places. The final point always coincides with the starting point, and it appears only at the beginning 
and in the end of each sequence of coordinates.

Output

Your program must print the total Euclidean distance of each route given, following the format of the instance. The distances must be written with 
4 digits behind the dot.
*/

#include <iostream>
#include <cmath>
using namespace std;

double euclidean_distance(double x_1, double x_2, double y_1, double y_2) {
	return sqrt(pow(x_1 - x_2, 2) + pow(y_1 - y_2, 2));
}

int main () {
	cout.setf (ios::fixed);
	cout.precision (4);
	string c;
	while (cin >> c) {
		double x_1, y_1;
		cin >> x_1 >> y_1;
		
		double x_1_aux = x_1;
		double y_1_aux = y_1;
		double x_2, y_2;
		double distance = 0;
		bool final = false;
		
		while (not final and cin >> x_2 >> y_2) {
			distance += euclidean_distance(x_1, x_2, y_1, y_2);
			x_1 = x_2;
			y_1 = y_2;
			if (x_1 == x_1_aux and y_1 == y_1_aux) final = true;
		}
		cout << "Route " << c << ": " << distance << endl;
	}
}



/* Example:
Input: 
bonanova  0 0  1 0  1 1  0 1  0 0
granvia   0 0  1 0  0 0
diagonal  1.1 3.748  4 5  6 8  2 3  -1.5 -1  2 3  -6 6  1.1 3.748
anywhere    5 5  5 5
triangle  0 0  0 2  1 2  0 0

Output:
Route bonanova: 4.0000
Route granvia: 2.0000
Route diagonal: 39.7901
Route anywhere: 0.0000
Route triangle: 5.2361
*/