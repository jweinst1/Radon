#ifndef RADON_INIT_H
#define RADON_INIT_H

//allocates new memory and creates new instances of single RadonObjects

class RadonInit
{
private:
	static std::allcaotor<RadonObject> _allo;
public:
	static RadonObject* makeInt(const int i, RadonObject* next = nullptr);
	static RadonObject* makeBool(const bool b, RadonObject* next = nullptr);
	static RadonObject* makeChar(const char ch, RadonObject* next = nullptr);
	static RadonObject* makeList(RadonObject* lst, RadonObject* next = nullptr);

	//destructor functions
	static void destroy(RadonObject* obj)
	{
		_allo.deallocate(obj, 1);
	}
	static void destroyAll(RadonObject* obj);
};

#endif