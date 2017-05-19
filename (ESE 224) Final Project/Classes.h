//Classes.h//

//=================================
// GUARD
#ifndef _ESE_224_FINAL_PROJECT_INCLUDED_
#define _ESE_224_FINAL_PROJECT_INCLUDED_

//=================================
// DEPENDENCIES
#include<iostream>
#include<fstream>
#include<string>
//#include<stdafx.h>
//#include<stdlib.h>
#include<list>
#include<vector>

using namespace std;

//=================================
// CLASSES

/*
class Lines {
	int number_of_lines = 0;
	string line;
//	ifstream input;
public:
	int get_lines(vector<string>);
};


class Time {
	int ts = 0;
	string timecharacter;
	string line;
//	ifstream input;
public:
	int get_timestep(vector<int>, int);
};

*/

/*
class Person {
	int ts, p, a, d, c;
	//t = time steps, k = time step to move up or down, n = number of floors, nMax = the max amount of people

	string character;
	string line;

	vector<int> timestep;
	vector<int> person;
	vector<int> arrival;
	vector<int> destination;
public:
	Person::Person();
}
*/

class Person {
	int ts, p, a, d, c;
	//t = time steps, k = time step to move up or down, n = number of floors, nMax = the max amount of people

	string character;
	string line;

	ifstream data;

	vector<int> timestep;
	vector<int> person;
	vector<int> arrival;
	vector<int> destination;
public:
	Person::Person();
}
	
	/*
	int p, a, d;
	string id, person, arrival, destination;
//	ifstream input;
public:
	int get_person(vector<int>, int);
	int get_arrival(vector<int>, int);
	int get_destination(vector<int>, int);
	*/
};

class Elevator {
	int p, a, d; //m = number of elevators, p = the number of people
	string direction;
	list<int> e1_stops;
	list<int> e2_stops;
	list<int> e3_stops;
	list<int>::iterator it;

public:
	string get_direction(int, int, int);
	int get_number_of_people(int);
	void list_of_stops(int, int, int);
};

#endif // _(ESE_224)_FINAL PROJECT_INCLUDED_