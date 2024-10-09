#include "Integer.h"

Integer::Integer(int number):nb(number)
{

}

Integer Integer::operator+(const Integer& number)
{
	return nb + number.nb;
}
Integer Integer::operator+=(const Integer& number)
{
	return nb = nb + number.nb;
}
Integer Integer::operator-(const Integer& number)
{
	return nb - number.nb;
}
Integer Integer::operator-=(const Integer& number)
{
	return nb = nb - number.nb;
}
Integer Integer::operator*(const Integer& number)
{
	return nb * number.nb;
}
Integer Integer::operator*=(const Integer& number)
{
	return nb = nb * number.nb;
}
Integer Integer::operator/(const Integer& number)
{
	return nb / number.nb;
}
Integer Integer::operator/=(const Integer& number)
{
	return nb = nb / number.nb;
}
Integer Integer::operator%(const Integer& number)
{
	return  nb % number.nb;
}
Integer Integer::operator%=(const Integer& number)
{
	return nb = nb % number.nb;
}
//std::stringstream Integer::operator<<(std::stringstream stream, const Integer& number)
//{
//	return os << number;
//}
Integer Integer::Pow(const Integer& number) 
{
	int rslt = nb;
	for (int i = number.nb; i >= 0; i--)
	{
		rslt = nb * nb;
	}
	return rslt;
}
