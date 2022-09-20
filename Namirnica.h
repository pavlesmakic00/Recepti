#pragma once
#include <iostream>
#include "NutritivnaVrednost.h"
using namespace std;
class Namirnica
{
	string naziv;
	NutritivnaVrednost nv100;
	bool posna;
public:
	Namirnica(string n, NutritivnaVrednost nv, bool p) :naziv(n),nv100(nv),posna(p){}

	string getNaziv()const { return naziv; }
	NutritivnaVrednost getNv100()const { return nv100; }
	bool getPosna()const { return posna; }

	friend bool operator==(const Namirnica& n1, const Namirnica& n2);
	friend bool operator!=(const Namirnica& n1, const Namirnica& n2);

	friend ostream& operator<<(ostream& it, const Namirnica& n);
};

