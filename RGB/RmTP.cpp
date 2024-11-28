#include <iostream>
#include "RsTP.h"
using namespace std;

int main() {

	cout << "BIENVENUE DANS LE RGB";

	Srgb code;
	cout << "Entrez le code de la couleur rouge : ";
	cin >> hex >> code.r;
	cout << "Entrez le code de la couleur verte : ";
	cin >> hex >> code.g;
	cout << "Entrez le code de la couleur bleu : ";
	cin >> hex >> code.b;

	UColor couleur;
	couleur.val = 0;
	couleur.components = code;
	
	cout << hex << couleur.val;

	return 0;
}