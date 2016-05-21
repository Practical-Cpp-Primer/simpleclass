#ifndef INCLUDE_SIMPLE_CLASS_H
#define INCLUDE_SIMPLE_CLASS_H

#include <string>

/*!
 * A basic sample class. Has two data members, two getters, and two setters.
 */
class SimpleClass
{
private:
	int mCoolNumber;
	std::string mName;
public:
	SimpleClass(std::string name, int coolNumber);
	const int getCoolNumber();
	const std::string getName();
	void setCoolNumber(const int coolNumber);
	void setName(const std::string name);
};

#endif  // INCLUDE_SIMPLE_CLASS_H
