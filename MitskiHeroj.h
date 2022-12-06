#pragma once
#include "Heroj.h"

class MitskiHeroj : public Heroj
{
private:
	int brMitova;
	int minTezina;
public:
	MitskiHeroj(char*, int, int, int);
	
	void dodajZad(Zadatak&);
	void Show(ostream&) const;

};

