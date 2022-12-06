#include "MitskiHeroj.h"

MitskiHeroj::MitskiHeroj(char* ime, int vek, int brMitova, int minTezina) 
	: Heroj(ime, vek)
{

	this->brMitova = brMitova;
	this->minTezina = minTezina;

}

void MitskiHeroj::dodajZad(Zadatak& zad) {

	if (zad.retTezina() >= minTezina && this->brZad() < 17) {

		*zadaci[this->brZad()] = zad;
		this->brojZadataka++;

	}

}

void MitskiHeroj::Show(ostream& izlaz) const {

	izlaz << "Ime: " << retIme() << ", Vek: " << vek << endl;
	izlaz << "Broj mitova: " << brMitova << ", Minimalna tezina zadatka: " << minTezina << endl;
	izlaz << "Zadaci: " << endl;
	for (int i = 0; i < this->brZad(); i++) {

		izlaz << "Kod: " << zadaci[i]->retKod() << ", Tezina: " << zadaci[i]->retTezina() << endl;

	}

	izlaz << endl;

}