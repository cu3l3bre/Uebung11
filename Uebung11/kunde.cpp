

#include <iostream>
#include <string>
#include "kunde.h"

using namespace std;

// Defintion des Standard Konstruktors
Kunde::Kunde()
{
	//cout << "Standard Konstruktor wurde aufgerufen!" << endl;

	kundennummer = 0;
	vorname = "-";
	nachname = "-";
	adresse = "-";
	geschlecht = u;
}


// Defintion des Destruktors
Kunde::~Kunde()
{
	//cout << "Destruktor wurde aufgerufen!" << endl;
}




// Allgemeiner Konstruktor
Kunde::Kunde(int newKundennummer, string newVorname, string newNachname, string newAdresse, Geschlecht newGeschlecht)
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
	cout << "Kundenummer:\t" << kundennummer << endl;
	cout << "Vorname:\t" << vorname << endl;
	cout << "Nachname:\t" << nachname << endl;
	cout << "Adresse:\t" << adresse << endl;
	
	switch (geschlecht)
	{
	case 0: cout << "Geschlecht\t" << "maennlich" << endl; break;
	case 1:	cout << "Geschlecht\t" << "weiblich" << endl; break;
	case 2:	cout << "Geschlecht\t" << "divers" << endl; break;
	case 3:	cout << "Geschlecht\t" << "aal" << endl; break;
	case 4:	cout << "Geschlecht\t" << "zitteraal" << endl; break;
	default: cout << "Geschlecht\t" << "unbekannt" << endl; break;
	}
	cout << endl;
}


// Methode, um die Daten eines Kunden einzugeben
void Kunde::kundendatenEingeben()
{
	char eingabeGeschlecht = char(0);

	string strassenname = "";
	string hausnummer = "";
	string plz = "";
	string ort = "";

	cout << "Bitte geben Sie neue Kundendaten ein!" << endl;

	cout << "Zuerst Ihre Kundennummer: ";
	cin >> kundennummer;

	cout << "Nun Ihren Vornamen: ";
	cin >> vorname;

	cout << "Nun Ihren Nachnamen: ";
	cin >> nachname;

	cout << "Nun Ihre Adresse:" << endl;
	
	cout << "Nun Ihren Strassennamen: ";
	cin >> strassenname;

	cout << "Nun Ihre Hausnummer: ";
	cin >> hausnummer;

	cout << "Nun Ihre Postleitzahl: ";
	cin >> plz;

	cout << "Nun Ihren Ort: ";
	cin >> ort;

	adresse = strassenname + " " + hausnummer + ", " + plz + " " + ort;


	cout << "Zum Schluss Ihr Geschlecht [m,w,d,a,z]: ";
	cin >> eingabeGeschlecht;
	
	switch (eingabeGeschlecht)
	{
	case 'm': geschlecht = m; break;
	case 'w': geschlecht = w; break;
	case 'd': geschlecht = d; break;
	case 'a': geschlecht = a; break;
	case 'z': geschlecht = z; break;
	default: cout << "Geschlecht nicht bekannt, wird als 'zitteraal' gesetzt " << endl ; geschlecht = z;  break;
	}


	cout << endl;
	cout << "Vielen Dank! Ihre neue Daten lauten wie folgt" << endl << endl;;
	zeigeKundendaten();


}