#include "MitskiHeroj.h"
#include "BitskiHeroj.h"
#include <cstdlib>
#include <fstream>

int main() {

	Heroj** heroji = new Heroj* [20];
	srand(time(0));

	for (int i = 0; i < 20; i++) {

		char* ime1 = new char[14];
		char* ime2 = new char[14];

		strcpy(ime1, "MitskiHeroj");
		strcpy(ime2, "BitskiHeroj");

		char* br_her1 = new char[2];
		char* br_her2 = new char[2];

		itoa(i+1, br_her1, 10);
		itoa(i+1, br_her2, 10);

		strcat(ime1, br_her1);
		strcat(ime2, br_her2);

		int vek1 = rand() % 18;
		int vek2 = rand() % 18;

		int brMit = rand() % 21;
		int minTezina = rand() % 11;

		if (i % 2 == 0)
			heroji[i] = new MitskiHeroj(ime1, vek1, brMit, minTezina);
		else
			heroji[i] = new BitskiHeroj(ime2, vek2);

	}

	Zadatak** zadaci = new Zadatak * [30];
	for (int i = 0; i < 30; i++) {

		int kod = rand() % 31;
		int tezina = rand() % 11;

		zadaci[i] = new Zadatak();
		zadaci[i]->set(kod, tezina);

	}

	for (int i = 0; i < 20; i++) {

		for (int j = 0; j < 30; j++) {

			heroji[i]->dodajZad(*(zadaci[j]));

		}

	}

	ofstream output("output.txt");

	if (!output.good())
		return 0;

	for (int i = 0; i < 20; i++) {

		int count = heroji[i]->brZad();
		if (count > 3)
			output << *heroji[i];

	}


}