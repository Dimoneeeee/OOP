#include "pch.h"
#include "Worker.h"
#include "Administration.h"
#include "Engineer.h"
#include "CadreList.h"

void classes() {
	std::cout << "List:" << std::endl << std::endl;
	Administration cadre0("Dimka", "Viktorovich", "Branchuk", 1999, "Director");
	cadre0.Add();
	Worker cadre1("Lizka", "Sergeevna", "Ktototavna", 2001, "19 year");
	cadre1.Add();
	Worker cadre11("Dimas", "Andreeevich", "Koren", 1993, "25 year");
	cadre11.Add();
	Worker cadre12("Denis", "Alekseevich", "Boss", 1995, "22 year");
	cadre12.Add();
	Engineer cadre2("Mishka", "Nikitich", "Samss", 1992, "33 year", "Higher technical education");
	cadre2.Add();
	Engineer cadre21("Dashka", "Vladimirovna", "Lololo", 1991, "6 year", "Higher technical education");
	cadre21.Add();
	Administration cadre3;
	cadre3.Add();
	Worker cadre31;
	cadre31.Add();
	Engineer cadre32;
	cadre32.Add();
	CadreList::View();
}

int main() {
	classes();
	return 0;
}