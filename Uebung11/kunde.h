#pragma once

#include <string>


enum Geschlecht
{
m,	// maennlich
w,	// weiblich
d,	// divers
a,	// aal
z	// zwitter
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
	Kunde() {};

	// Allgemeiner Konstruktor
	Kunde(int, std::string, std::string, std::string, Geschlecht);
	
	// Set Methoden
	void setKundennummer(int neuKundennummer) { kundennummer = neuKundennummer; }
	void setVorname(std::string neuVorname) { vorname = neuVorname; }
	void setNachname(std::string neuNachname) { nachname = neuNachname; }
	void setAdresse(std::string neuAdresse) { adresse = neuAdresse; }
	void setGeschlecht(Geschlecht neuGeschlecht) { geschlecht = neuGeschlecht; }

	// Get Methoden
	int getKundennummer() { return kundennummer; }
	std::string getVorname(){ return vorname; }
	std::string getNachname() { return nachname; }
	std::string getAdresse() { return adresse; }
	Geschlecht getGeschlecht() { return geschlecht; }

	std::string getGanzenNamen() { return nachname + ", " + vorname; }

	// andere Methoden
	void zeigeKundendaten();
	void kundendatenEingeben();



};