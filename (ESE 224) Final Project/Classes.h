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

class Person {
	int ts, p, a, d;
	string character, line;
public:
	int Person::get_timesteps(string);
	int Person::get_people(string);
	int Person::get_arrivals(string);
	int Person::get_destinations(string);
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