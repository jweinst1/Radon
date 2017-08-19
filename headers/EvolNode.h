#ifndef EVOL_NODE_H
#define EVOL_NODE_H

#include <iostream>

enum Environment
{
	Environment_Grass,
	Environment_Pond,
	Environment_Sand,
	Environment_Dirt
} 

class EvolNode
{
public:
	EvolNode();
	~EvolNode();

	void setEnv(Environment env)
	{
		env = env;
	}
	Environment getEnv()
	{
		return env;
	}
private:
	Environment env;
	
};

#endif