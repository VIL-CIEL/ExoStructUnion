#pragma once

enum eEtat
{
	vide, palette, rouleau
};

struct sPalette
{
	int poid;
	char ref[19];
};

struct sRouleau
{
	float longu;
	int num;
};

union uContenu
{
	sPalette palette;
	sRouleau rouleau;
};

struct sCasier
{
	int px, py;
	eEtat etat;
	uContenu contenu;
};

