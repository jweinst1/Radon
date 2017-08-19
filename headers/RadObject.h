#ifndef RAD_OBJECT_H
#define RAD_OBJECT_H

#include "Radon.h"

//type signature for primitive types
enum RadType
{
	RadType_Int,
	RadType_String,
	RadType_Bool,
	RadType_Reaction,
	RadType_Stream
};

class RadObject
{
private:
	RadType type;
public:
	RadObject();
	~RadObject();

	RadType getType()
	{
		return type;
	}
	void setType(RadType type)
	{
		type = type;
	}
	
};

#endif