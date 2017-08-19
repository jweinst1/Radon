#ifndef RADINT_H
#define RADINT_H

#include "Radon.h"

class RadInt : public RadObject
{
private:
	long value;
public:
	RadInt(long value);

	long getValue()
	{
		return value;
	}

	void setValue(long value)
	{
		value = value;
	}

	void add(long amount)
	{
		value += amount;
	}

	void sub(long amount)
	{
		value -= amount;
	}

	void mul(long amount)
	{
		value *= amount;
	}

	void div(long amount)
	{
		if(amount) value /= amount;
	}
};

#endif