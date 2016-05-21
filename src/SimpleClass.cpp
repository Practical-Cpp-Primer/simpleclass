#include "SimpleClass.h"
using std::string;

SimpleClass::SimpleClass(string name, int coolNumber) {
	mCoolNumber = coolNumber;
	mName = name;
}

const string SimpleClass::getName() {
	return mName;
}

const int SimpleClass::getCoolNumber() {
	return mCoolNumber;
}