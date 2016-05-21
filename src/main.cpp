#include "SimpleClass.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
	string name("darrien");
	int bestNumber = 7;
	SimpleClass simple(name, bestNumber);
	cout << "Name: " << simple.getName() << " Number: " << simple.getCoolNumber() << endl;
	return 0;
}