#ifndef integer_h
#define integer_h

#include <iostream>
#include <string>

class Integer
{
public:
	Integer(int number);
	Integer operator + (const Integer& number);
	Integer operator += (const Integer& number);
	Integer operator - (const Integer& number);
	Integer operator -= (const Integer& number);
	Integer operator * (const Integer& number);
	Integer operator *= (const Integer& number);
	Integer operator / (const Integer& number);
	Integer operator /= (const Integer& number);
	Integer operator % (const Integer& number);
	Integer operator %= (const Integer& number);
	//std::stringstream operator<<(std::stringstream stream, const Integer& number);
	Integer Pow(const Integer& number);

	int nb;
private:

};


#endif