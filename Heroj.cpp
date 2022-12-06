#include "Heroj.h"

Heroj::Heroj(char* ime, int vek) {

	this->ime = new char[strlen(ime) + 1];
	strcpy(this->ime, ime);

	this->vek = vek;
	zadaci = new Zadatak* [17];

	for (int i = 0; i < 17; i++) {

		zadaci[i] = new Zadatak();

	}

	brojZadataka = 0;

}

Heroj::~Heroj() {

	if (ime != nullptr)
		delete ime;
	ime = nullptr;

	for (int i = 0; i < 17; i++) {

		delete zadaci[i];

	}

	delete[] zadaci;

}

Zadatak& Heroj::operator[](int ind) const {

	return *zadaci[ind];

}

Heroj& Heroj::operator=(const Heroj& heroj1) {

	if (this != &heroj1) {

		delete ime;
		ime = new char[strlen(heroj1.ime) + 1];
		strcpy(this->ime, heroj1.ime);

		this->vek = heroj1.vek;

		for (int i = 0; i < 17; i++) {

			delete zadaci[i];

		}

		delete[] zadaci;

		zadaci = new Zadatak* [17];
		for (int i = 0; i < 17; i++) {

			zadaci[i] = new Zadatak();
			zadaci[i]->set(heroj1[i].retKod(), heroj1[i].retTezina());

		}

		this->brojZadataka = heroj1.brojZadataka;

	}

	return *this;

}

ostream& operator<<(ostream& izlaz, const Heroj& heroj1) {

	heroj1.Show(izlaz);
	return izlaz;

}