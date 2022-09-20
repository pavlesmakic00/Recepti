#pragma once
#include <iostream>
using namespace std;
class NutritivnaVrednost
{
	double ugljeniH;
	double masti;
	double proteini;
public:
	NutritivnaVrednost(double u, double m, double p) :ugljeniH(u), masti(m), proteini(p) {}

	double getUgljeniH()const { return ugljeniH; }
	double getMasti()const { return masti; }
	double getProteini()const { return proteini; }

	double brKalorija()const;

	friend NutritivnaVrednost operator+(const NutritivnaVrednost& nv1, const NutritivnaVrednost& nv2);

	friend ostream& operator<<(ostream& it, const NutritivnaVrednost& nv);
};

