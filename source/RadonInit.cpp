#include "Radon.h"

RadonObject* RadonInit::makeInt(const int i, RadonObject* next = nullptr)
{
	RadonObject* radInt = _allo.allocate(1);
	radInt->state = RadonObject::Int;
	radInt->_int = i;
	radInt->next = next;
	return radInt; 
}
	
RadonObject* RadonInit::makeBool(const bool b)
{

}

RadonObject* RadonInit::makeChar(const char ch)
{

}

RadonObject* RadonInit::makeList(RadonObject* lst)
{

}

void RadonInit::destroyAll(RadonObject* obj)
{

}