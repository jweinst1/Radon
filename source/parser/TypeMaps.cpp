#include "Radon.h"

//type map for mapping operations etc.
const std::unordered_map<std::string, RadonObject::Type> RadTypeMap::map = {
	{"!print", RadonObject::CmdPrint},
	{"!def", RadonObject::CmdAssign},
	{":+", RadonObject::RxAdd},
	{":-", RadonObject::RxSub},
	{":*", RadonObject::RxMul},
	{":/", RadonObject::RxDiv}
};


bool RadTypeMap::getType(const std::string& token, RadonObject::Type* typPnt)
{
	std::unordered_map<std::string, RadonObject::Type>::const_iterator got = map.find(token);
	if(got != map.end())
	{
		*typPnt = got->second;
		return true;
	}
	else return false;

}

bool RadTypeMap::validate(const std::string& token)
{
	//not implemented
	return true;
}
