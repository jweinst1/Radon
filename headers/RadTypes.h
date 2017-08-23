#ifndef RADON_TYPES_H
#define RADON_TYPES_H

//This header contains enumerated and other types used in Radon

//type signature for primitive types
enum RadType
{
	RadType_Int,
	RadType_String,
	RadType_Bool,
	RadType_Stream
};

//type signature for reaction types
enum RadRxType
{
	RadRxType_React,
	RadRxType_Add,
	RadRxType_Sub,
	RadRxType_Mul,
	RadRxType_Div,
	RadRxType_Rem,
	RadRxType_ConCat,
	RadRxType_Push,
	RadRxType_MakeStream
};

enum RadEventType
{
	RadEventType_Print
};

#endif