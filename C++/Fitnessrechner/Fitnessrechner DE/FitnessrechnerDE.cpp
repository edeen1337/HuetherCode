#include <iostream>
#include <cstdlib>


using namespace std; 

int main(int argc, char** argv) {
	double anzahljahre, rabatt, grundpreis = 40, rabattpreis;
	int anzahlperson;
	
	cout << "6ix/7even" << endl;
	cout << "08.10.25" << endl;
	cout << "Berechnung monatlicher abo kosten mit berücksichtigung auf Rabatte" <<endl;
	cout << endl;
	
	cout << "Anzahl an Personen: ";
	cin >> anzahlperson;
	cout << "Anzahl an Jahren: ";
	cin >> anzahljahre;
	
	switch (anzahlperson) {
		case 0:
			rabatt = 0;
			break;
		case 1: 
			rabatt = 0;
			break;
		case 2:
			rabatt = 0.05;
			break;
		case 3: 
			rabatt = 0.15;
			break;
		default:
			rabatt = 0.2;
			break;					
}

	if (anzahljahre > 4) {
		rabatt += 0.05;
	}
	if (rabatt != 0) {
		rabattpreis = grundpreis - (grundpreis * rabatt);
	} else {
		rabattpreis = grundpreis;
	}
	
	cout << "Ihr Monatlicher Beitrag lautet: " << rabattpreis << " $";
	
	return 0;
}

