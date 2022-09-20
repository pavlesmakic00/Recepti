#include "Sastojak.h"
NutritivnaVrednost Sastojak::getNutritivnaVrednost() const
{
	
	double ugljeniH = ((this->getNamirnica().getNv100().getUgljeniH())*kolicina)/100;
	double masti = ((this->getNamirnica().getNv100().getMasti()) * kolicina) / 100;
	double proteini = ((this->getNamirnica().getNv100().getProteini()) * kolicina) / 100;

	return NutritivnaVrednost(ugljeniH, masti, proteini);
}
double Sastojak::brKalorija() const{

    double ugljeniH = ((this->getNamirnica().getNv100().getUgljeniH()) * kolicina) / 100;
    double masti = ((this->getNamirnica().getNv100().getMasti()) * kolicina) / 100;
    double proteini = ((this->getNamirnica().getNv100().getProteini()) * kolicina) / 100;

	return 4 * ugljeniH + 4 * proteini + 9 * masti;
}
ostream& operator<<(ostream& it, const Sastojak& s)
{
	return it << "[" << s.brKalorija() << "kcal] " << s.kolicina << "g x " << s.namirnica;
}