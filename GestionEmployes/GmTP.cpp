#include <iostream>
#include "GsTP.h"
using namespace std;

int main(){

	cout << "BIENVENUE DANS GESTION DES EMPLOYES\n";

	employe E1;
	Saisis_info(&E1);
	Affichage_info(&E1);
	return 0;
}