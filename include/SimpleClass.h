#ifndef INCLUDE_SIMPLE_CLASS_H
#define INCLUDE_SIMPLE_CLASS_H

#include <string>

class SimpleClass
{
private:
	int mCoolNumber;
	std::string mName;
public:
	SimpleClass(std::string name, int coolNumber);
	const int getCoolNumber();
	const std::string getName();
};

#endif  // INCLUDE_SIMPLE_CLASS_H
