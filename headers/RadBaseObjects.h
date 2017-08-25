#ifndef RAD_BASE_OBJECTS_H
#define RAD_BASE_OBJECTS_H

//This header contains the base objects that make up the Radon language

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

class RadBool : public RadObject
{
public:
	bool value;

	RadBool(bool value);
};

class RadString : public RadObject
{
public:
	std::string value;

	RadString(std::string& str);

	std::string getValue()
	{
		return value;
	}

	std::string& getRef()
	{
		return value;
	}

	const std::string& getConstRef()
	{
		return value;
	}

	void setValue(std::string& str)
	{
		value = str;
	}
	
};

#endif