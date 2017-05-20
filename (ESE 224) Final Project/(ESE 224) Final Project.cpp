/*
*(ESE 224) Final Project.cpp
*Jonathan Cruzate and Miguel Arellano
*05/19/17
*/

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
	int person_distance, TStop, m = 3, n = 10, NMax = 10;

	string line;

	vector<int> timesteps;
	vector<int> people;
	vector<int> arrivals;
	vector<int> destinations;
	vector<int> locations;
	//vector<int> locations(m, 0);
	//vector<int>::iterator it;
	vector<Elevator> elevators;

	ifstream data;

	Person person;

	data.open("input.txt");
	if (data.is_open())
	{
		while (getline(data, line))
		{
			timesteps.push_back(person.get_timesteps(line));
			people.push_back(person.get_people(line));
			arrivals.push_back(person.get_arrivals(line));
			destinations.push_back(person.get_destinations(line));
		}
		/*
		for (unsigned n = 0; n < timesteps.size(); ++n) {
			cout << "NUMBER: " << n + 1 << endl;
			cout << "PERSON: " << people.at(n) << endl;
			cout << "ARRIVAL: " << arrivals.at(n) << endl;
			cout << "DESTINATION: " << destinations.at(n) << endl;
		}
		*/
	}
	else cout << "Unable to open file";
	data.close();

	cout << "Enter the amount of elevators: ";
	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		Elevator elevator;
		elevators.push_back(elevator);
		locations.push_back(elevator.get_location());
	}

	cout << "Enter the amount of discrete time steps: ";
	cin >> TStop;

	for (int t = 1; t <= TStop; t++) {
		for (unsigned n = 0; n < timesteps.size(); ++n)
		{
			if (timesteps.at(n) == t) {
				for (int i = 0; i < m; ++i)
				{
					if (elevators.at(i).get_direction == "standing" || elevators.at(i).get_direction == person.get_direction(arrivals.at(n), destinations.at(n)))
					{

						int distance = abs(arrivals.at(n)-(elevators.at(i)).get_location);

					}
				}
			//	Elevators.at(t).assign_person(people.at(t), arrivals.at(t), destinations.at(t));
			}
		}
	}

	return 0;
}