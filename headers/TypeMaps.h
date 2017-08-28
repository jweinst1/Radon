#ifndef RADON_TYPE_MAPS_H
#define RADON_TYPE_MAPS_H

static std::unordered_map<std::string, RadonObject::Type> RAD_TYPE_MAP = {
	{":+", RadonObject::RxAdd},
	{":-", RadonObject::RxSub}
};

#endif