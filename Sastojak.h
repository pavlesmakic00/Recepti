#pragma once
#include "Namirnica.h"
#include "NutritivnaVrednost.h"
class Sastojak
{
	Namirnica namirnica;
	double kolicina;
public:
	Sastojak(Namirnica n, double k) :namirnica(n), kolicina(k) {}

	Namirnica getNamirnica()const { return namirnica; }
	double getKolicina()const { return kolicina; }

	NutritivnaVrednost getNutritivnaVrednost()const;
	double brKalorija()const;

	friend ostream& operator<<(ostream& it, const Sastojak& s);

};
