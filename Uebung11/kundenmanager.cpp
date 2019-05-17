
#include <iostream>
#include <string>
#include "kundenmanager.h"

using namespace std;

// Standardkonstruktord der Klasse
KundenManager::KundenManager()
{

}

// Destruktor der Klasse
KundenManager::~KundenManager()
{

}


// Eingabe eines Kunden ermöglichen
Kunde KundenManager::kundeAnlegen()
{
	Kunde neuerKunde;

	
	
	int eingabeKundenummer = 0;
	string eingabeVorname = "";
	string eingabeNachname = "";
	
	string adresse = "";
	string eingabeStrassenname = "";
	string eingabeHausnummer = "";
	string eingabePlz = "";
	string eingabeOrt = "";

	char eingabeGeschlecht = char(0);



	cout << "Bitte geben Sie neue Kundendaten ein!" << endl;

	cout << "Zuerst Ihre Kundennummer: ";
	cin >> eingabeKundenummer;

	cout << "Nun Ihren Vornamen: ";
	cin >> eingabeVorname;

	cout << "Nun Ihren Nachnamen: ";
	cin >> eingabeNachname;

	cout << "Nun Ihre Adresse:" << endl;

	cout << "Nun Ihren Strassennamen: ";
	cin >> eingabeStrassenname;

	cout << "Nun Ihre Hausnummer: ";
	cin >> eingabeHausnummer;

	cout << "Nun Ihre Postleitzahl: ";
	cin >> eingabePlz;

	cout << "Nun Ihren Ort: ";
	cin >> eingabeOrt;

	adresse = eingabeStrassenname + " " + eingabeHausnummer + ", " + eingabePlz + " " + eingabeOrt;


	cout << "Zum Schluss Ihr Geschlecht [m,w,d,a,z]: ";
	cin >> eingabeGeschlecht;



	// Setzen der neuen Werte mittels den Setter Funktione, 
	// hier kann ich nicht mehr dirket auf die Attribute zurückgreifen, weil das ne andere Klasse ist
		
	neuerKunde.setKundennummer(eingabeKundenummer);
	neuerKunde.setVorname(eingabeVorname);
	neuerKunde.setNachname(eingabeNachname);
	neuerKunde.setAdresse(adresse);

	switch (eingabeGeschlecht)
	{
	case 'm': neuerKunde.setGeschlecht(m); break;
	case 'w': neuerKunde.setGeschlecht(w); break;
	case 'd': neuerKunde.setGeschlecht(d); break;
	case 'a': neuerKunde.setGeschlecht(a); break;
	case 'z': neuerKunde.setGeschlecht(z); break;
	default: cout << "Geschlecht nicht bekannt, wird als 'zitteraal' gesetzt " << endl; neuerKunde.setGeschlecht(z); break;
	}


	cout << endl;
	cout << "Vielen Dank! Ihre neue Daten lauten wie folgt" << endl << endl;;



	return neuerKunde; // hier wird ein Kunde zurückgegeben 

}

