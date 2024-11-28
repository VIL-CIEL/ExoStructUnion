#include <iostream>
#include "TsTP.h"

using namespace std;

int main() {

	cout << "BIENVENUE DANS LE TRANGERBEUR";

	sRouleau ro1;
	ro1.longu = 5;
	ro1.num = 1;

	sPalette pa1;
	pa1.poid = 9;
	strcpy_s(pa1.ref,"0001");

	eEtat etatC1;

	uContenu cont;
	cont.palette = pa1;
	cont.rouleau = ro1;

	sCasier c1;
	c1.contenu.palette = pa1;
	c1.px = 2;
	c1.py = 3;

	sCasier c2;
	c2.contenu.palette = pa1;

	sCasier tab[9];
	tab[0] = c1;
	tab[2] = c2;

	return 0;
}