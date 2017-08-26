#ifndef RADON_OBJECT_H
#define RADON_OBJECT_H

/* header that defines the RadonObject struct
 * This struct is meant to represent integers, lists, string(as lists of chars), and bools in a dynamic state.
 * All possible states of the object are highly mutable.
 * 
 */

struct RadonObject
{
	enum
	{
		Int,
		Char,
		Bool,
		List,
		Rx
	} state;

	union
	{
		RadonObject* _list;
		int _int;
		char _char;
		bool _bool;
	};

	RadonObject* next;
};

#endif