

#include <iostream>
#include <string>
#include "kunde.h"

using namespace std;

// Defintion des Standard Konstruktors
Kunde::Kunde()
{
	cout << "Standard Konstruktor wurde aufgerufen!" << endl;
}


// Defintion des Destruktors
Kunde::~Kunde()
{
	cout << "Destruktor wurde aufgerufen!" << endl;
}




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
	
	if (getGeschlecht() == 0)
	{
		cout << "Geschlecht\t" << "maennlich" << endl;
	}
	else if (getGeschlecht() == 1)
	{
		cout << "Geschlecht\t" << "weiblich" << endl;
	}
	else if (getGeschlecht() == 2)
	{
		cout << "Geschlecht\t" << "divers" << endl;
	}
	else if (getGeschlecht() == 3)
	{
		cout << "Geschlecht\t" << "aal" << endl;
	}
	else if (getGeschlecht() == 4)
	{
		cout << "Geschlecht\t" << "zitteraal" << endl;
	}
	else
	{
		cout << "Geschlecht\t" << "unbekannt" << endl;
	}
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

	// TODO Anzeige und Eingabe von Zahlen als Geschlecht ist auch irgendwie doof
	// TODO geht so nicht?
	//cout << "Zum Schluss Ihr Geschlecht: ";
	//cin >> geschlecht;

	char eingabeGeschlecht = char(0);
	cout << "Zum Schluss Ihr Geschlecht [m,w,d,a,z]: ";
	cin >> eingabeGeschlecht;


	switch (eingabeGeschlecht)
	{
	case 'm': geschlecht = m; break;
	case 'w': geschlecht = w; break;
	case 'd': geschlecht = d; break;
	case 'a': geschlecht = a; break;
	case 'z': geschlecht = z; break;
	default: break;
	}




	//setGeschlecht((Geschlecht)eingabeGeschlecht);

	cout << endl;
	cout << "Viel Dank! Ihre neue Daten lauten wie folgt" << endl << endl;;
	zeigeKundendaten();


}