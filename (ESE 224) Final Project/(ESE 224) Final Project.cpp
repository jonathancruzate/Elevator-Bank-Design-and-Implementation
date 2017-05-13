#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

/*
class Elevators() {

};

class Person() {

	//arrival

}
*/

int main() {

	int c, t = 0, m = 3, n = 10, NMax = 10, person, arrival, destination;

	string line;
	ifstream myfile;
	myfile.open("input.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{

			do {
				c = getchar();

				cout << c << '\n';
			} while (c != '-');

			//cout << line << '\n';



		}
		myfile.close();
	}

	else cout << "Unable to open file";

	return 0;
}

/*
int main()
{
	int c;
	puts("Enter text. Include a dot ('.') in a sentence to exit:");
	do {
		c = getchar();
	} while (c != '-');
	return 0;
}
*/
