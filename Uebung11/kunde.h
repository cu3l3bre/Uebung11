#pragma once

#include <string>


enum Geschlecht
{
m,	// maennlich
w,	// weiblich
d,	// divers
a,	// aal
z,	// zitteraal
u	// unbekannt
};



class Kunde
{
private:
	int kundennummer;
	std::string vorname;
	std::string nachname;
	std::string adresse;
	Geschlecht geschlecht;

public:

	// Standard Konstruktor
	Kunde();


	// Deklaration des Destruktors
	// spezielle Methdode, die aufgerufen wird, wenn ein Objekt dieser Klasse "zerstört" wird
	// es gibt immer nur EINEN Destruktor, meinstens verwenet um Speicher wieder freizugeben
	~Kunde();



	// Allgemeiner Konstruktor
	Kunde(int, std::string, std::string, std::string, Geschlecht);
	
	// Set Methoden (Setter)
	void setKundennummer(int neuKundennummer) { kundennummer = neuKundennummer; }
	void setVorname(std::string neuVorname) { vorname = neuVorname; }
	void setNachname(std::string neuNachname) { nachname = neuNachname; }
	void setAdresse(std::string neuAdresse) { adresse = neuAdresse; }
	void setGeschlecht(Geschlecht neuGeschlecht) { geschlecht = neuGeschlecht; }

	// Get Methoden (Getter)
	int getKundennummer() { return kundennummer; }
	std::string getVorname(){ return vorname; }
	std::string getNachname() { return nachname; }
	std::string getAdresse() { return adresse; }
	Geschlecht getGeschlecht() { return geschlecht; }

	std::string getGanzenNamen() { return nachname + ", " + vorname; }


	// TODO diese Methoden sind in die Klasse "KundenMangager" ausgelagert worden, werden also hier auskommentiert um Dopplung zu vermeiden
	// andere Methoden
	void zeigeKundendaten();
	void kundendatenEingeben();



};