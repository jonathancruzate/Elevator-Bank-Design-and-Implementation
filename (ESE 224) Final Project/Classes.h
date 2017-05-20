//Classes.h//

#ifndef _ESE_224_FINAL_PROJECT_INCLUDED_
#define _ESE_224_FINAL_PROJECT_INCLUDED_

#include<string>
#include<vector>
#include<list>

using namespace std;

class Person
{
	int ts, p, a, d;
	string character, line, direction;
public:
	int Person::get_timesteps(string);
	int Person::get_people(string);
	int Person::get_arrivals(string);
	int Person::get_destinations(string);
	string Person::get_direction(int, int);
};

class Elevator
{
	int location, p, a, d;
	string direction;
	list<int>::iterator it;

public:
//	static string direction;
//	Elevator::Elevator();
	int Elevator::get_location();
	string Elevator::get_direction();
//	int Elevator::assign_person(int, int, int);
	//get_number_of_people();

	/*
	string get_direction(int, int, int);
	int get_number_of_people(int);
	void list_of_stops(int, int, int);
	*/

};

#endif // _(ESE_224)_FINAL PROJECT_INCLUDED_