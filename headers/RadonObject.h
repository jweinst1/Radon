#ifndef RADON_OBJECT_H
#define RADON_OBJECT_H

/* header that defines the RadonObject struct
 * This struct is meant to represent integers, lists, string(as lists of chars), and bools in a dynamic state.
 * All possible states of the object are highly mutable.
 * Note: The None state has no data value, its simply to signify the end of an object.
 */

struct RadonObject
{
	enum
	{
		Int,
		Char,
		Bool,
		List,
		None
	} state;

	union
	{
		int _int;
		char _char;
		bool _bool;
		RadonObject* _list;
	};
};

#endif