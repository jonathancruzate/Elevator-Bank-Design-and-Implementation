//Classes.cpp//

#include "Classes.h"

/*
int Lines::get_lines(vector<string> input) {
	while (getline(input, line)) {
		++number_of_lines;
	}
	return number_of_lines;
}

int Time::get_timestep(vector<string> input, int line) {
	for (int i = 1; i <= line; i++) {
		getline(input, timestep);
		timecharacter = timestep.at(0);
		ts = stoi(timecharacter);
	}
	return ts;
}

*/

Person::Person() {
	while (getline(data, line)) {
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

/*
Person::Person() {
	while (getline(data, line)) {
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

int Person::get_person(vector<int> input, int line) {
	for (int i = 1; i <= line; i++) {
		getline(input, id);
		person = id.at(2);
		p = stoi(person);
	}
	return p;
}

int Person::get_arrival(vector<int>, int) {
	for (int i = 1; i <= line; i++) {
		getline(input, id);
		arrival = id.at(4);
		a = stoi(arrival);
	}
	return a;
}

int Person::get_destination(vector<int>, int) {
	for (int i = 1; i <= line; i++) {
		getline(input, id);
		destination = id.at(6);
		d = stoi(destination);
	}
	return d;
}
*/

string Elevator::get_direction(int p, int a, int d) {
	Person test;
	if (a < d) {
		direction = "UP";
	}
	else direction = "DOWN";
	return direction;
}

int Elevator::get_number_of_people(int n) {
	int number_of_people = 1;
	return number_of_people;
}

void Elevator::list_of_stops(int a, int d, int n) {
	//Person::test.get_arrival(int 1);
	// VECTOR HERE

	for (int i = 1; i <= n; i++) {
		if (a == i) {
			//ADD TO LIST
		}
		if (d == i) {
			//ADD TO LIST
		}
	}
}