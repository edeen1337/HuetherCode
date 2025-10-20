#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) {
	int Kaufpreis, steuerid; // mwst1 = lebensmittel, mwst2= keine lebensmittel
	float mwst, mwstpreis;

	
	cout << "Geben sie Bitte den Preis des Produktes an welches sie kaufen moechten: ";
	cin >> Kaufpreis;
	cout << "Geben sie bitte die SteuerID des Produktes an welches sie kaufen moechten" << endl;
	cout << "SteuerID 1 = Lebensmittel [7% Mwst.]" << endl;
	cout << "SteuerID >1 = Keine Lebensmittel [19%Mwst]" << endl;
	cout << "SteuerID: ";
	cin >> steuerid;
	cout << endl;
	cout << endl;
	
	switch(steuerid) {
		case 1:
			mwst = 0.07;
			break;
		default:
			mwst = 0.19;
			break;	
	}
	
	mwstpreis = Kaufpreis * (1 + mwst);
	
	cout << "Zu zahlender Nettobetrag: " << Kaufpreis << "$" << endl;
	cout << "Auf die " << Kaufpreis << "$ muessen sie noch " << mwst * 100 <<"% steuern zahlen: " << Kaufpreis * mwst << "$" << endl;
	cout << endl;
	cout << "Der entgueltig zu zahlender Betrag betraegt: " << mwstpreis << "$";
	cout << endl;

 	
	return 0;
}
