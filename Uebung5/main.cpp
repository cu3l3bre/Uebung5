#include <iostream>


using namespace std;


// int Variablen global deklarieren
int ganzeZahl1;
int ganzeZahl2;
int ganzeZahl3;



void ZahlVerdreifachen(int* Zahl)
{
	*Zahl = *Zahl * *Zahl * *Zahl;
}

// Eine Funktion die das macht ohne Pointer ist glaub ich nicht machbar
// da ich sonst nur einen Wert zurueckgeben kann und nicht beide!!!
void TauscheZahlen(int* Zahl1, int* Zahl2)
{
	int tmp = 0;

	tmp = *Zahl1;
	*Zahl1 = *Zahl2;
	*Zahl2 = tmp;
}


int main()
{
	int Zahl = 3;	// Zuweisung einer Zahl
	int* ZeigerAufZahl = &Zahl;	// Zuweisung der Adresse dem Zeiger ZeigerAufZahl
	int** ZeigerAufZeiger = &ZeigerAufZahl;	// Zuweisung der Adresse von ZeigerAufZahl an ZeigerAufZeiger

	cout << "Die Adresse andert sich bei jedem Aufruf: " << ZeigerAufZahl << endl;

	cout << "Zahl	       Adresse:	  " << &Zahl << endl;
	cout << "ZeigerAufZahl Adresse:	  " << &ZeigerAufZahl  << endl;
	cout << "ZeigerAufZeiger Adresse: " << &ZeigerAufZeiger << endl;


	ZahlVerdreifachen(&Zahl);
	cout << "Das Dreifach ist: " << **ZeigerAufZeiger << endl;


	// Aufgabenteil 4

	cout << "Uebung 5.4" << endl;

	// 3 Zeiger mit den Adressen der globalen Variablen definieren
	// im weiteren Programm dann nur noch mit den Zeigern arbeiten

	int* ZeigerAufZahl1 = &ganzeZahl1;
	int* ZeigerAufZahl2 = &ganzeZahl2;
	int* ZeigerAufZahl3 = &ganzeZahl3;

	cout << "Geben Sie 3 Zahlen ein, wobei ich die Groesste herausfinde" << endl;;
	cout << "Geben Sie die 1. Zahl ein: ";
	cin >> *ZeigerAufZahl1;

	cout << "Geben Sie die 2. Zahl ein: ";
	cin >> *ZeigerAufZahl2;

	cout << "Geben Sie die 3. Zahl ein: ";
	cin >> *ZeigerAufZahl3;

	cout << "Sie haben die Zahlen " << *ZeigerAufZahl1 << " " << *ZeigerAufZahl2 << " " << *ZeigerAufZahl3 << " eingegeben" << endl;
	
	if (*ZeigerAufZahl1 >= *ZeigerAufZahl2 && *ZeigerAufZahl1 >= *ZeigerAufZahl3)
	{
		cout << "Die groesste Zahl ist: " << *ZeigerAufZahl1 << endl;
	}
	else if (*ZeigerAufZahl2 >= *ZeigerAufZahl1 && *ZeigerAufZahl2 >= *ZeigerAufZahl3)
	{
		cout << "Die groesste Zahl ist: " << *ZeigerAufZahl2 << endl;
	}
	else if (*ZeigerAufZahl3 >= *ZeigerAufZahl1 && *ZeigerAufZahl3 >= *ZeigerAufZahl2)
	{
		cout << "Die groesste Zahl ist: " << *ZeigerAufZahl3 << endl;
	}
	else
	{
		// Nichts machen
	}


	// Tausche Zahlen

	int Number1 = 111;
	int Number2 = 222;

	int* Zeiger1 = &Number1;
	int* Zeiger2 = &Number2;

	cout << "Zahlen vor dem Tausch : " << Number1 << " und " << Number2 << endl;

	TauscheZahlen(Zeiger1, Zeiger2);

	cout << "Zahlen nach dem Tausch: " << Number1 << " und " << Number2 << endl;

	system("pause");
	return 0;
}