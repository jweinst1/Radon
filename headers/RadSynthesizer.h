#ifndef RADON_SYNTHESIZER_H
#define RADON_SYNTHESIZER_H

//makes RadonObjects from string input

class RadSynthesizer
{
private:
	RadonObject* _currList;
	RadonObject* _parentList; // for parsing nested lists
	std::string _currToken;
public:
	RadSynthesizer();
	
};

#endif