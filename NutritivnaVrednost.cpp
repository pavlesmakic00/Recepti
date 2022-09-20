#include "NutritivnaVrednost.h"
NutritivnaVrednost operator+(const NutritivnaVrednost& nv1, const NutritivnaVrednost& nv2)
{
	return NutritivnaVrednost(nv1.ugljeniH+nv2.ugljeniH,nv1.masti+nv2.masti,nv1.proteini+nv2.proteini);
}
double NutritivnaVrednost::brKalorija() const
{
	return 4*ugljeniH+4*proteini+9*masti;
}
ostream& operator<<(ostream& it, const NutritivnaVrednost& nv)
{
	return it << "[uh: " << nv.ugljeniH << ", ma: " << nv.masti << ", pr: " << nv.proteini << "]";
}