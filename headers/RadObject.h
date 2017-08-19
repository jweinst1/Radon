#ifndef RAD_OBJECT_H
#define RAD_OBJECT_H

//type signature for primitive types
enum RadType
{
	RadType_Int,
	RadType_String,
	RadType_Bool
};

class RadObject
{
private:
	RadType type;
public:
	RadObject();
	~RadObject();
	RadObject call();

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