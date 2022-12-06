#pragma once
class Zadatak
{
private:
	int kod;
	int tezina;
public:
	Zadatak() { kod = 0; tezina = 0; }
	~Zadatak() {}
	inline void set(int, int);
	inline int retKod();
	inline int retTezina();

};

void Zadatak::set(int k, int t) {

	kod = k;
	tezina = t;

}

int Zadatak::retKod() {

	return kod;

}

int Zadatak::retTezina() {

	return tezina;

}
