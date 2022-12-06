#include "BitskiHeroj.h"

BitskiHeroj::BitskiHeroj(char* ime, int vek)
	: Heroj(ime, vek)
{

}

void BitskiHeroj::dodajZad(Zadatak& zad) {

	if ((zad.retTezina() == 0 || zad.retTezina() == 1) && this->brZad() < 17) {

		*zadaci[this->brZad()] = zad;
		this->brojZadataka++;

	}

}

void BitskiHeroj::Show(ostream& izlaz) const {

	izlaz << "Ime: " << retIme() << ", Vek: " << vek << endl;
	izlaz << "Zadaci: " << endl;
	for (int i = 0; i < this->brZad(); i++) {

		izlaz << "Kod " << zadaci[i]->retKod() << ", Tezina: " << zadaci[i]->retTezina() << endl;

	}

	izlaz << endl;

}