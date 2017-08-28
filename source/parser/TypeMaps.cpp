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

//Util is integer function
bool RadTypeMap::isInt(const std::string& token) const
{
	if(token.length() > 1)
	{
		if(token[0] == '-')
		{
			switch(token[1])
			{
				case '0':
					return false;
					break;
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9': return true; break;
				default:
					return false;
			}
		}
		else
		{
			return true;
		}
	}
	else
	{
		return std::isdigit(token[0]);
	}
}

bool RadTypeMap::validate(const std::string& token)
{
	//not implemented
	return true;
}
