#include <iostream>
#include "kunde.h"

using namespace std;

int main()
{
	cout << "Programm zu Uebung 11" << endl << endl;


	// Arrays mit Allgemeinen-Konstruktoren?

	Kunde kunde1(123,"Max","Mustermann","Musterstrasse", a);
	Kunde kunde2(456, "Maxine", "Musterfrau", "Baumstrasse", w);

	Kunde kunden[100];

	kunde1.zeigeKundendaten();
	kunde2.zeigeKundendaten();

	cout << kunde1.getGanzenNamen() << endl;
	cout << kunde2.getGanzenNamen() << endl;
	kunde1.kundendatenEingeben();


	system("pause");
	return 0;
}