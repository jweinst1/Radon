#ifndef RADINT_H
#define RADINT_H

#include "Radon.h"

class RadInt : public RadObject
{
public:
	long value;

	RadInt(long value);

	void operator += (long num)
	{
		value += num; 
	}

	void operator -= (long num)
	{
		value -= num;
	}

	void operator *= (long num)
	{
		value *= num;
	}

	void operator /= (long num)
	{
		value /= num;
	}

	void operator %= (long num)
	{
		value *= num;
	}

};

#endif