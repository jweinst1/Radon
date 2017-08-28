#ifndef RADON_TYPE_MAPS_H
#define RADON_TYPE_MAPS_H

//class used for rapid type determination

class RadTypeMap
{
private:
	static const std::unordered_map<std::string, RadonObject::Type> map;
public:
	static bool getType(const std::string& token, RadonObject::Type* typPnt);
	static bool validate(const std::string& token);
};

#endif