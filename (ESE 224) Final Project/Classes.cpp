//Classes.cpp//

#include "Classes.h"

int Person::get_timesteps(string line)
{
	character = line.at(0);
	ts = stoi(character);
	return ts;
}

int Person::get_people(string line)
{
	character = line.at(2);
	p = stoi(character);
	return p;
}

int Person::get_arrivals(string line)
{
	character = line.at(4);
	a = stoi(character);
	return a;
}

int Person::get_destinations(string line)
{
	character = line.at(6);
	d = stoi(character);
	return d;
}

string Person::get_direction(int a, int d)
{
	if (a > d) {
		direction = "up";
	}
	else direction = "down";
	return direction;
}

int Elevator::get_location()
{
	int l = 1;
	return l;
}

string Elevator::get_direction()
{
	direction = "standing";
	return direction;
}

/*
int Elevator::assign_person(int p, int a, int d) {

}
*/

/*
string Elevator::get_direction(int p, int a, int d) {
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
for (int i = 1; i <= n; i++) {
if (a == i) {
//ADD TO LIST
}
if (d == i) {
//ADD TO LIST
}
}
}
*/
