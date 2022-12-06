#pragma once
#include "Heroj.h"

class BitskiHeroj : public Heroj
{
public:
	BitskiHeroj(char*, int);

	void dodajZad(Zadatak&);
	void Show(ostream&) const;

};

