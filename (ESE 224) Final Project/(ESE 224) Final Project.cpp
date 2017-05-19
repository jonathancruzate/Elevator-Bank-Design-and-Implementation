//(ESE 224) Final Project//

#include<iostream>
#include<fstream>
#include<string>
//#include<stdafx.h>
//#include<stdlib.h>
#include<vector>
#include<list>
//#include "(ESE 224) Final Project.h"

using namespace std;

int main() {
	int ts, p,a,d,c, TStop, m = 3, n = 10, NMax = 10;
	//t = time steps, k = time step to move up or down, n = number of floors, nMax = the max amount of people

	string character;
	string line;

	ifstream data;

	vector<int> timestep;
	vector<int> person;
	vector<int> arrival;
	vector<int> destination;

	//	Lines lines;
	//Time time;
	//Person person;
	//Elevator elevator;

	data.open("input.txt");
	if (data.is_open()) {
		while (getline(data, line)) {
		//	for(int i = 2; i <= 6; i+2)
			character = line.at(0);
			ts = stoi(character);
			timestep.push_back(ts);
			character = line.at(2);
			p = stoi(character);
			person.push_back(p);
			character = line.at(4);
			a = stoi(character);
			arrival.push_back(a);
			character = line.at(6);
			d = stoi(character);
			destination.push_back(d);
			
		}
		for (unsigned n = 0; n < person.size(); ++n) {
			cout << "PERSON: " << person.at(n) << endl;
			cout << "ARRIVAL: " << arrival.at(n) << endl;
			cout << "DESTINATION: " << destination.at(n) << endl;
		}
	}
	else cout << "Unable to open file";
	data.close();

	//READ ALL THE PEOPLE INTO AN VECTOR
	//READ ALL THE ARRIVAL INTO VECTOR
	//READ ALL THE DESTINATION INTO VECTOR

//	cout << "LINES: " << lines.get_lines(input) << endl;
//	for (int t = 1; t <= lines.get_lines(input); t++) {
		//input.clear();


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