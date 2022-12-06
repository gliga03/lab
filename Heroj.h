#pragma once
#include "Zadatak.h"
#include <iostream>
#include <string.h>
using namespace std;

class Heroj
{
protected:
	char* ime;
	int vek;
	Zadatak** zadaci;
	int brojZadataka;
public:
	Heroj(char*, int);
	virtual ~Heroj();
	
	Heroj& operator=(const Heroj&);
	Zadatak& operator[](int) const;

	inline char* retIme() const;
	inline int brZad() const;

	virtual void dodajZad(Zadatak&) = 0;
	virtual void Show(ostream&) const = 0;

	friend ostream& operator<<(ostream&,const Heroj&);

};

char* Heroj::retIme() const {

	return ime;

}

int Heroj::brZad() const {

	return brojZadataka;

}
