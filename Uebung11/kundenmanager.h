#pragma once

#include <vector>
#include "kunde.h"

class KundenManager
{

private:

	// eine Liste von Kunden mit der container-Klasse  "vector" aus der standardbliothek
	std::vector<Kunde> kundenliste;

public:
	KundenManager();	// Standard-Konstruktor
	~KundenManager();	// Destruktor
	

	// Eingabe eines Kunden ermöglichen
	Kunde kundeAnlegen();

	// Mehrfacheingabe von Kunden
	void mehrKundenAnlegen();


	// Zeige einen Kundendatensatz
	void zeigeKundendaten(Kunde);

	// alle Kundendaten anzeigen
	void alleKundendatenAnzeigen();


	

};