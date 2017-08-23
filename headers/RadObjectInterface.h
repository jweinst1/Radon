#ifndef RAD_OBJECT_INRTERFACE_H
#define RAD_OBJECT_INTERFACE_H

#include "Radon.h"



class RadObjectInterface
{
public:

	virtual RadType getType() const;
	virtual void setType(RadType t);
	virtual bool sameTypeAs(RadObjectInterface roi) const;
	//representations
	virtual int intValue() const;
	virtual bool boolValue() const;
	virtual std::string stringValue() const;

	virtual void add(RadObjectInterface roi);

	virtual void sub(RadObjectInterface roi);

	virtual void mul(RadObjectInterface roi);

	virtual void div(RadObjectInterface roi);

	//stream methods
	virtual void append(RadObjectInterface roi);
	virtual void put(RadObjectInterface roi);
	virtual void conCat(RadObjectInterface roi);
	virtual RadObjectInterface first() const;
	virtual RadObjectInterface last() const;

	virtual int length() const;

	
};

typedef std::shared_ptr<RadObject> RadPtr;

#endif