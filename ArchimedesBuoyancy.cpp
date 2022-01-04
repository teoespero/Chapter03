//	ArchimedesBuoyancy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	const
		double
		SPECIFIC_WEIGHT_OF_WATER = 62.4,
		PI = 3.141592653589793238;
	double
		volume = 0.00,
		weight = 0.00,
		radius = 0.00,
		buoyantforce = 0.00;

	cout << "Enter the weight.....";
	cin >> weight;

	cout << "Radius in feet.....";
	cin >> radius;

	volume = (4 / 3) * (PI * (pow(radius, 3)));
	buoyantforce = volume * SPECIFIC_WEIGHT_OF_WATER;

	if (buoyantforce >= weight)
		cout << "Object will float." << endl;
	else
		cout << "Object will sink." << endl;
}
