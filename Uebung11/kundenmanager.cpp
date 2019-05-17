
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
	
	string eingabeAdresse = "";
	string eingabeStrassenname = "";
	string eingabeHausnummer = "";
	string eingabePlz = "";
	string eingabeOrt = "";

	char eingabeGeschlecht = char(0);



	cout << "Bitte geben Sie die neuen Kundendaten ein!" << endl;

	cout << "Zuerst Ihre Kundennummer: ";
	cin >> eingabeKundenummer;


	// ist hier erforderlich, weil sonst das ENTER  irgendwie noch drin ist und ich dann die adresse nicht mehr eingeben kann, irgendwie so :p
	// Hilfsangabe um in einem Pogramm mit cin und getline zu arbeiten, beim Wechsel von cin nach getline muss man das machen
	// also wenn vorher was mit cin einlesen worden ist, um den buffer zu löschen
	cin.ignore();


	cout << "Nun Ihren Vornamen: ";
	//cin >> eingabeVorname;
	getline(cin, eingabeVorname);

	
	cout << "Nun Ihren Nachnamen: ";
	//cin >> eingabeNachname;
	getline(cin, eingabeNachname);


	cout << "Nun Ihre Adresse:";

	// addresse als ganzes einlesen (Funktion um ganze Sätze einzulesen)
	getline(cin, eingabeAdresse); 
	
	/*
	cout << "Den Strassennamen: ";
	cin >> eingabeStrassenname;

	cout << "Die Hausnummer: ";
	cin >> eingabeHausnummer;

	cout << "Die Postleitzahl: ";
	cin >> eingabePlz;

	cout << "Den Ort: ";
	cin >> eingabeOrt;

	eingabeAdresse = eingabeStrassenname + " " + eingabeHausnummer + ", " + eingabePlz + " " + eingabeOrt;
	*/

	cout << "Zum Schluss Ihr Geschlecht [m,w,d,a,z]: ";
	cin >> eingabeGeschlecht;



	// Setzen der neuen Werte mittels der Setter Funktionen, 
	// hier kann ich nicht mehr dirket auf die Attribute der Klasse Kunde zugreifen, weil das ne andere Klasse ist
		
	neuerKunde.setKundennummer(eingabeKundenummer);
	neuerKunde.setVorname(eingabeVorname);
	neuerKunde.setNachname(eingabeNachname);
	neuerKunde.setAdresse(eingabeAdresse);

	switch (eingabeGeschlecht)
	{
	case 'm': neuerKunde.setGeschlecht(m); break;
	case 'w': neuerKunde.setGeschlecht(w); break;
	case 'd': neuerKunde.setGeschlecht(d); break;
	case 'a': neuerKunde.setGeschlecht(a); break;
	case 'z': neuerKunde.setGeschlecht(z); break;
	default: cout << "Geschlecht nicht bekannt, wird als 'zitteraal' gesetzt " << endl; neuerKunde.setGeschlecht(z); break;
	}

	cin.ignore();
	cout << endl;
	//cout << "Vielen Dank! Ihre neue Daten lauten wie folgt" << endl << endl;;

	return neuerKunde; // hier wird ein Kunde zurückgegeben 

}



// Mehrfachanlage von Kunden
void KundenManager::mehrKundenAnlegen()
{
	string eingabe = "";
	Kunde neuerKunde;
	
	cout << "Moechten Sie einen Kunden anlegen[j,n]?: ";
	getline(cin, eingabe);

	while (eingabe == "j")
	{
		neuerKunde = kundeAnlegen();
		kundenliste.push_back(neuerKunde);

		cout << "Moechten Sie einen weiteren Kunden anlegen? [j, n]: ";
		getline(cin, eingabe);
	}

}



void KundenManager::zeigeKundendaten(Kunde kundendaten)
{
	cout << "Kundenummer:\t" << kundendaten.getKundennummer() << endl;
	cout << "Vorname:\t" << kundendaten.getVorname() << endl;
	cout << "Nachname:\t" << kundendaten.getNachname() << endl;
	cout << "Adresse:\t" << kundendaten.getAdresse() << endl;

	switch (kundendaten.getGeschlecht())
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



void KundenManager::alleKundendatenAnzeigen()
{

	cout << endl;
	cout << "Folegend werden die Kundendaten aufgelistet" << endl << endl;;

	if (kundenliste.size() != 0)
	{
		for (int i = 0; i < kundenliste.size(); i++)
		{
			zeigeKundendaten(kundenliste[i]);
		}
	}
	else
	{
		cout << "Keine Daten vorhanden!" << endl;
	}


}