

#include <iostream>
#include <string>
#include "kunde.h"

using namespace std;

// Allgemeiner Konstruktor
Kunde::Kunde(int newKundennummer, std::string newVorname, std::string newNachname, std::string newAdresse, Geschlecht newGeschlecht)
{
	kundennummer = newKundennummer;
	vorname = newVorname;
	nachname = newNachname;
	adresse = newAdresse;
	geschlecht = newGeschlecht;
}


// Methode, um die Daten eines Kunden auf der Konsole anzuzeigen
void Kunde::zeigeKundendaten()
{
	cout << "Kundenummer:\t" << getKundennummer() << endl;
	cout << "Vorname:\t" << getVorname() << endl;
	cout << "Nachname:\t" << getNachname() << endl;
	cout << "Adresse:\t" << getAdresse() << endl;
	cout << "Geschlecht\t" << getGeschlecht() << endl;
	cout << endl;
}



void Kunde::kundendatenEingeben()
{
	cout << "Bitte geben Sie neue Kundendaten ein!" << endl;

	cout << "Zuerst Ihre Kundennummer: ";
	cin >> kundennummer;

	
	cout << "Nun Ihren Vornamen: ";
	cin >> vorname;

	cout << "Nun Ihren Nachnamen: ";
	cin >> nachname;

	cout << "Nun Ihre Adresse: ";
	cin >> adresse;

	// TODO geht so nicht?
	//cout << "Zum Schluss Ihr Geschlecht: ";
	//cin >> geschlecht;

	int eingabeGeschlecht = 0;
	cout << "Zum Schluss Ihr Geschlecht: ";
	cin >> eingabeGeschlecht;
	setGeschlecht((Geschlecht)eingabeGeschlecht);




	cout << "Viel Dank! Ihre neue Daten lauten wie folgt" << endl;
	zeigeKundendaten();


}