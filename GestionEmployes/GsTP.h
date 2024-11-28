#pragma once

struct date
{
	int jour;
	int mois;
	int annee;
};

struct employe
{
	char nom[30];
	char prenom[30];
	date date_embauche;
	date date_fonction;
};