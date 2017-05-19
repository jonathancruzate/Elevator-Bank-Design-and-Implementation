//(ESE 224) Final Project//

#include<iostream>
//#include<fstream>
#include<string>
//#include<stdafx.h>
//#include<stdlib.h>
#include<vector>
#include<list>
#include "Classes.h"

using namespace std;

int main() {
	int TStop, m = 3, n = 10, NMax = 10;
	//t = time steps, k = time step to move up or down, n = number of floors, nMax = the max amount of people

	string line;

	vector<int> timesteps;
	vector<int> people;
	vector<int> arrivals;
	vector<int> destinations;

	ifstream data;

	Person person;
	Elevator elevator;

	data.open("input.txt");
	if (data.is_open()) {
		while (getline(data, line)) {
			timesteps.push_back(person.get_timesteps(line));
			people.push_back(person.get_people(line));
			arrivals.push_back(person.get_arrivals(line));
			destinations.push_back(person.get_destinations(line));
		}
		for (unsigned n = 0; n < timesteps.size(); ++n) {
			cout << "NUMBER: " << n + 1 << endl;
			cout << "PERSON: " << people.at(n) << endl;
			cout << "ARRIVAL: " << arrivals.at(n) << endl;
			cout << "DESTINATION: " << destinations.at(n) << endl;
		}
	}
	else cout << "Unable to open file";
	data.close();

	cout << "Enter the amount of discrete time steps: ";
	cin >> TStop;

	for (int t = 1; t <= TStop; t++) {
		if (timesteps.at(t) == t) {
			elevator.list_of_stops(arrivals, destinations, n);
		}

	return 0;
}