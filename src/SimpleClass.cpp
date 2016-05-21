#include "SimpleClass.h"
using std::string;

/*!
 * Basic constructor. Takes two arguments from the user, and assigns them to 
 * the data data members located in the class. 
 *
 * @param name Variable to be set as mName data member in class.
 * @param coolNumber Variable to be set as mCoolNumber in class.
 */
SimpleClass::SimpleClass(string name, int coolNumber) {
	mCoolNumber = coolNumber;
	mName = name;
}
/*!
 * Basic getter. Returns mCoolNumber the user supplied in the constructor.
 * 
 * @return Number earlier supplied by the user.
 */
const string SimpleClass::getName() {
	return mName;
}

/*!
 * Basic getter. Returns mName the user supplied in the constructor.
 *
 * @return Name earlier supplied by the user.
 */
const int SimpleClass::getCoolNumber() {
	return mCoolNumber;
}

/*!
 * Basic setter. Sets mCoolNumber to a number supplied by the user.
 *
 * @param coolNumber Integer to be set as coolNumber.
 */
void SimpleClass::setCoolNumber(const int coolNumber) {
	mCoolNumber = coolNumber;
}

/*!
 * Basic setter. Sets mName to a number supplied by the user.
 *
 * @param name String to be set as mName.
 */
void SimpleClass::setName(const std::string name) {
	mName = name;
}