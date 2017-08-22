#ifndef RAD_REACTION_H
#define RAD_REACTION_H

//header for RadReactions
//reactions are implemented as streams with an a Reaction Enumerated type


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

class RadReaction
{
public:
	static void react(RadPtr rp);
	
};

#endif