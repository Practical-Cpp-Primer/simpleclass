#include "SimpleClass.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
	// Creates a variable of type string to darrien
	string name("darrien");
	// Sets a variable of type integer to 7
	int bestNumber = 7;
	// Creates a new SimpleClass object with the two newly created variables
	SimpleClass simple(name, bestNumber);
	// Prints out data members inside the SimpleClass object
	cout << "Name: " << simple.getName() << " Number: " << simple.getCoolNumber() << endl;
	// Setting changing the data members to different values using setters
	simple.setName("DARRIEN");
	simple.setCoolNumber(9001);
	// Printing out the new results
	cout << "Name: " << simple.getName() << " Number: " << simple.getCoolNumber() << endl;
	return 0;
}