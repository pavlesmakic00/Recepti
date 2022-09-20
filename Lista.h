#pragma once
#include "Greska.h"
template<typename T>
class Lista
{
	struct Elem {
		T info;
		Elem* sled;
		Elem(const T& i, Elem* s = nullptr):info(i) {
			sled = s;
		}
	};
	Elem* prvi, *posl;
    mutable	Elem* tek;
public:

	Lista() {
		prvi = posl = tek = nullptr;
	}

	~Lista() { isprazni(); }

	Lista(const Lista& l) = delete;
	void operator=(const Lista& l) = delete;

	Lista& dodaj(const T& t) { posl = (!prvi ? prvi : posl->sled) = new Elem(t); return *this; }

	Lista& naPrvi() { tek = prvi; return *this; }
	const Lista& naPrvi() const { tek = prvi; return *this; }

    Lista& naSled() { if (tek) tek = tek->sled; return *this; }
	const Lista& naSled()const { if (tek) tek = tek->sled; return *this; }
	
	bool imaTek()const { return tek!=nullptr; }
			
	T& getTek() {
		if (!tek) throw GNemaTekuci();
		return tek->info;
	}
	
	const T& getTek()const {
		if (!tek) throw GNemaTekuci();
		return tek->info;
	}

	void isprazni() {
		while (prvi) {
			Elem* stari = prvi;
			prvi = prvi->sled;
			delete stari;
		}
		posl = tek = nullptr;
	}
};

