#ifndef RADON_INIT_H
#define RADON_INIT_H

//allocates new memory and creates new instances of single RadonObjects

class RadonInit
{
private:
	static std::allcaotor<RadonObject> _allo;
public:
	static RadonObject* makeInt(const int i);
	static RadonObject* makeBool(const bool b);
	static RadonObject* makeChar(const char ch);
	static RadonObject* makeList(RadonObject* lst);
	static RadonObject* makeNone();
};

#endif