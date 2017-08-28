#ifndef RADON_OBJECT_H
#define RADON_OBJECT_H

/* header that defines the RadonObject struct
 * This struct is meant to represent integers, lists, string(as lists of chars), and bools in a dynamic state.
 * All possible states of the object are highly mutable.
 * (:+ 3 4)
 */



struct RadonObject
{
	//Inner enum to specify state
	enum Type
	{
		// data types
		Int,
		Char,
		Bool,
		List,
		// directives
		CmdPrint,
		RxAdd,
		RxSub,
		RxMul
	};
	Type state;

	union
	{
		RadonObject* _list;
		int _int;
		char _char;
		bool _bool;
	};

	RadonObject* next;

	//constructors for chained construction
	RadonObject(int i, RadonObject* next = nullptr): state(RadonObject::Int), _int(i), next(next) {}
	
	RadonObject(char ch, RadonObject* next = nullptr): state(RadonObject::Char), _char(ch), next(next) {}
	
	RadonObject(bool b, RadonObject* next = nullptr): state(RadonObject::Bool), _bool(b), next(next) {}
	
	RadonObject(RadonObject* lst, RadonObject* next = nullptr): state(RadonObject::List), _list(lst), next(next) {}

	inline ~RadonObject()
	{
		if(state == RadonObject::List) delete _list;
		delete next;
	}
};

#endif