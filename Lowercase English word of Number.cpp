#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){

	// A Program to Print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.
	int n = 0; // set initial value 
	cin >> n;

	// start conditions
	if (n == 1) {cout << "one";}
	else if (n == 2){cout << "two";}
	else if (n == 3) {cout << "three";}
	else if (n == 4) {cout << "four";}
	else if (n == 5) {cout << "five";}
	else if (n == 6) {cout << "six";}
	else if (n == 7){cout << "seven";}
	else if (n == 8) {cout << "eight";}
	else if (n == 9) {cout << "nine";}
	else if (n > 9) {cout << "Greater than 9";}
	else {cout << "ERR";}

	//End Program !
	system("pause");
	return 0;
}
