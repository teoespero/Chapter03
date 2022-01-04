//	TaxiFare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//	Teodulfo Espero
//	BS Cloud and Systems Administration
//	BS Software Development
//	Western Governors University

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	const
		double
			BASE_CHARGE = 3.20,
			PER_KM_CHARGE = 2.05,
			PER_MINUTE_CHARGE = 0.95;
	int
		starttime = 0,
		duration = 0;
	
	double
		distance = 0.00,
		surcharge = 0.00,
		totalfare = 0.00;

	bool
		validtime = false,
		validduration = false,
		validdistance = false;

	do {
		cout << "Time of travel.....";
		cin >> starttime;

		if (starttime >= 0 && starttime <= 2359)
			validtime = true;
		else
			cout << "\t*** Invalid time." << endl;
	} while (!(validtime));

	do {
		cout << "Travel duration.....";
		cin >> duration;

		if (duration > 0)
			validduration = true;
		else
			cout << "\t*** Invalid travel duration." << endl;

	} while (!(validduration));

	do {
		cout << "Distance travelled.....";
		cin >> distance;

		if (distance > 0)
			validdistance = true;
		else
			cout << "\t*** Invalid travel distance." << endl;

	} while (!(validdistance));
	
	if (starttime >= 2300 && starttime <= 600)
		surcharge = (15 / 100);

	totalfare = ((distance * PER_KM_CHARGE)+(duration * PER_MINUTE_CHARGE))+BASE_CHARGE;
	totalfare = totalfare + (totalfare * surcharge);

	cout << setprecision(2);
	cout << "Taxi fare....." << fixed << "$ " << totalfare << endl;

}