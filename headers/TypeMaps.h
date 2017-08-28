#ifndef RADON_TYPE_MAPS_H
#define RADON_TYPE_MAPS_H

//class used for rapid type determination

class RadTypeMap
{
private:
	static std::unordered_map<std::string, RadonObject::Type> map = {
		{"!print", RadonObject::CmdPrint},
		{":+", RadonObject::RxAdd},
		{":-", RadonObject::RxSub},
		{":*", RadonObject::RxMul},
		{":/", RadonObject::RxDiv}
	};
public:


	RadonObject::Type getType(const std::string& token);
	bool validate(const std::string& token);
};

#endif