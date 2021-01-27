/* Program that, given an amount of euros and cents, computes the minimum number of banknotes and coins needed to get that amount. There are coins of 1, 2, 5, 10, 20 and 50 cents and of 1 and 2 euros, and banknotes of 5, 10, 20, 50, 100, 200 and 500 euros.

Input: input consists of two natural numbers: the number of euros e and the number of cents c. Assume c<100.

Output: prints the number of banknotes and coins of each type that are are needed to represent the amount of the input, so as to minimize the total number of banknotes and coins. */

#include <iostream>
using namespace std;

int main () {
    int e;
    cin >> e;         

    int b500 = e / 500; 
    int b200 = e % 500 / 200; 
    int b100 = e % 500 % 200 / 100;
    int b50 =  e % 500 % 200 % 100 / 50;
    int b20 = e % 500 % 200 % 100 % 50 / 20;
    int b10 = e % 500 % 200 % 100 % 50 % 20 / 10;
    int b5 = e % 500 % 200 % 100 % 50 % 20 % 10 / 5; 
    
    int c;     
    cin >> c;
    int ctotal = c + (e % 500 % 200 % 100 % 50 % 20 % 10 % 5) * 100;  // total number of resulting cents

    int c2 = ctotal / 200;
    int c1 = ctotal % 200 / 100;
    int c50 = ctotal % 200 % 100 / 50;
    int c20 = ctotal % 200 % 100 % 50 / 20;
    int c10 = ctotal % 200 % 100 % 50 % 20 / 10;
    int c05 = ctotal % 200 % 100 % 50 % 20 % 10 / 5;
    int c02 = ctotal % 200 % 100 % 50 % 20 % 10 % 5 / 2;
    int c01 = ctotal % 200 % 100 % 50 % 20 % 10 % 5 % 2 / 1;

    // Write result
    cout << "Banknotes of 500 euros: " << b500 << endl; 
    cout << "Banknotes of 200 euros: " << b200 << endl; 
    cout << "Banknotes of 100 euros: " << b100 << endl; 
    cout << "Banknotes of 50 euros: " << b50 << endl; 
    cout << "Banknotes of 20 euros: " << b20 << endl; 
    cout << "Banknotes of 10 euros: " << b10 << endl; 
    cout << "Banknotes of 5 euros: " << b5 << endl; 
    cout << "Coins of 2 euros: " << c2 << endl;
    cout << "Coins of 1 euro: " << c1 << endl;
    cout << "Coins of 50 cents: " << c50 << endl;
    cout << "Coins of 20 cents: " << c20 << endl;
    cout << "Coins of 10 cents: " << c10 << endl;
    cout << "Coins of 5 cents: " << c05 << endl;
    cout << "Coins of 2 cents: " << c02 << endl;
    cout << "Coins of 1 cent: " << c01 << endl;
}