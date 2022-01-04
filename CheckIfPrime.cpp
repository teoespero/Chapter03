
//	CheckIfPrime.cpp
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	

	//	define the maximum to check
	const 
		int LIMIT = 1000;

	//	define the vars that we will be using
	int
		dividend = 0,
		divisor = 0,
		quotient = 0,
		linebreaker = 0;

	
	//	print out the header
	cout << "PRIME NUMBERS" << endl;
	cout << "------------------------------------------------------------------------------------" << endl;
	
	//	loop for determining if a number 
	for (dividend = 1; dividend <= LIMIT; dividend++) {

		//	here we will divide a number vs the dividend
		for (divisor = 2; divisor <= dividend; divisor++) {

			//	if we find a number that equally divides it
			//	then we exit the loop right away
			if (dividend % divisor == 0) {
				break;
			}
		}

		//	if no other number divides it other than itself
		//	that number is a prime number
		if (divisor == dividend) {
			cout << dividend << "\t";

			//	this is just to make the output easier
			//	to read using a 10 x n table
			linebreaker++;
			if (linebreaker > 10) {
				cout << endl;
				linebreaker = 0;
			}
			
		}
	}
	cout << endl << "------------------------------------------------------------------------------------" << endl;
}
