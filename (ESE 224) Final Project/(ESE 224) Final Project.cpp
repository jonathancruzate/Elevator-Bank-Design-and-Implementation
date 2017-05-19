//(ESE 224) Final Project//

#include<iostream>
#include<fstream>
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

	ifstream data;

	vector<int> timesteps;
	vector<int> people;
	vector<int> arrivals;
	vector<int> destinations;

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
			cout << "NUMBER: " << n+1 << endl;
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
		if (timestep.at(t) == t) {
			cout << "PERSON: " << person.get_person(person, t) << endl;
			cout << "ARRIVAL: " << person.get_arrival(arrival, t) << endl;
			cout << "DESTINATION: " << person.get_destination(destination, t) << endl;
			cout << "DIRECTION:" << elevator.get_direction(person.get_person(input, t), person.get_arrival(input, t), person.get_destination(input, t)) << endl;
			elevator.list_of_stops(person.get_arrival(input, t), person.get_destination(input, t), n);
		}
	}

	return 0;
}