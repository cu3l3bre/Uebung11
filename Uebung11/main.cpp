#include <iostream>
#include "kunde.h"

using namespace std;

int main()
{
	cout << "Programm zu Uebung 11" << endl << endl;


	// Arrays mit Allgemeinen-Konstruktoren?
	Kunde kunde1(123,"Max","Mustermann","Musterstrasse", a);
	Kunde kunde2(456, "Maxine", "Musterfrau", "Baumstrasse", w);

	// Array von Klasse Kunde mit 100 Elementen
	Kunde kunden[100];

	/*
	kunde1.zeigeKundendaten();
	kunde2.zeigeKundendaten();

	cout << kunde1.getGanzenNamen() << endl;
	cout << kunde2.getGanzenNamen() << endl;
	kunde1.kundendatenEingeben();

	*/


	// mehrere Kunden anlegen
	char eingabeWeitermachen = 'j';
	int anzahlAngelegterKunden = 0;


	cout << "Hallo, Bitte legen Sie Kundendaten an" << endl << endl;
	while (eingabeWeitermachen == 'j')
	{
		kunden[anzahlAngelegterKunden].kundendatenEingeben();

		anzahlAngelegterKunden++;

		cout << "Moechten Sie einen weiteren Kunden anlegen? [j,n]: ";
		cin >> eingabeWeitermachen;
		system("cls");
	}


	for (int i = 0; i < anzahlAngelegterKunden; i++)
	{
		kunden[i].zeigeKundendaten();
	}


	system("pause");
	return 0;
}