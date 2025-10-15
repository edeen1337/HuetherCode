#include <iostream>
#include <cstdlib>

using namespace std;



int main(int argc, char** argv) { // Man beachte das Code immer von Oben nach unten gelesen wird sprich wenn man iwas versucht zu rechnen aber dafür z.b informationen fehlen dann verreckt das programm oder funktioniert fehlerhaft.
	double years, grundpreis = 40, rabatt, rabattpreis; 			// Hier schreiben uns unsere Variablen auf. Die brauchen wir Später um die ganzen rechnungen zu machen. 
	int members;			 // Wir benutzen hier für "int" weil double iwie ja ka bei "members" iwie sich töten geht ich weiss es selber nicht genau.
	
	
	
	
	cout << "Geben sie an wie viele Mitglieder sie sind:"; 				// Hier fragen wir ab wie viele Mitglieder ein abo haben, diese Information brauchen wir um Später den Rabatt zu berechnen.
		cin >> members; 
	cout << "Geben sie die anzahl an Mitglieds jahren an:"; 			// Hier fragen wir ab wie viele Jahre dieses mitglied bereits hingeht, da er ab 5 Jahren mitgliedschaft einen !!WEITEREN!! Rabatt kriegt.
		cin >> years;
	
	
	
	
	switch(members) { 			// Hier Eröffnen wir unsern switchcase weil wir hier anfangen unsern Rabatt auf die Personen anzahl (members) zu verteilen. Wichtig ist, das was wir mit dem switch case bearbeiten wollen steht immer in der () nach dem SWITCH
		case 0:			 // Hier Passiert noch nix weil hier 0 Mitglieder angemeldet werden. Und man erst ab 2 Mitgliedern einen Rabatt kriegt.
    rabatt = 0;    	   	// Siehe hier "rabatt = 0;"
  		 break;			//"break;" ist praktisch dafür da das er zum nächsten punkt geht. Er macht das dann solange bis er die zahl kriegt die wir an mitgliedern eingetragen haben.
  		case 1: 		// Hier Passiert noch nix weil hier 1 Mitglied angemeldet wird. Und man erst ab 2 Mitgliedern einen Rabatt Kriegt.
    rabatt = 0;
   		 break;  
  		case 2:			// Hier Sehen wir endlich eine 2, Sprich hier werden 2 Mitglieder angemeldet. Das heisst jetzt fangen wir an das erste mal Rabatt zu geben.
    rabatt = 0.05;		// Bei 2 Mitgliedern gibt es 0.05 sprich wir geben den rabatt = 0.05; ein. Hier ist immer wichtig ein ; nach der zeile zu setzen. Generell kann man sich merken das man lieber einmal zuviel ein ; hinterpackt als zu wenig
   		 break;
  		case 3:     
    rabatt = 0.15;
    	break;
  		default:
  	rabatt = 0.2; 
  		break; 
}



		if (years > 5){ 		// Da wir nun oben im switch case alles eingegeben haben machen wir jetzt weiter mit der nächsten sache die wir berücksichtigen müssen. In diesem fall ist das der Jahresrabatt der ab 5 Jahren eintritt
			rabatt += 0.05;    // Wie wir sehen benutzen wir ein if case, dies machen wir weil wir nur eine option haben, sprich ein switch case würde sich nicht lohnen. Beispiel: 
		}					   // Bei dem switchcase oben haben wir insgesamt 4 Optionen. 0.05%, 0.15%, 0.20% oder garkein Rabatt. Sprich weil wir hier vergleichsweise viele Optionen haben ist es leichter dies durch ein switchcase zu lösen
							   // Da wir aber hier nur 2 Optionen haben sprich: Ja, er ist > 5 Jahre dabei und kriegt rabatt oder er ist < 5 Jahre dabei und kriegt kein rabatt. Ist es leichter dies durch ein if case zu lösen
							   // Hier machen wir es uns einfach dann leicht und rechnen einfach weitere 0.05% auf den Rabatt. Sprich selbst wenn der rabatt 0% ist weil vllt nur eine Person sich anmeldet kriegt er dann die 0.05% ab 5 jahren.
							   // Die Formel ist hierfür in dem fall "Rabatt += 0.05" Hier ist wie beim switch case zu beachten: Was nach dem if in der () steht wird bearbeitet. Und dann brauchen wir eine { und eine } um den code anzufangen
							   // Und um diesen code dann wieder zu beenden.
		
		
		
		if (rabatt != 0 ) { // Hier fragen wir im code ab ob der wir Rabatt kriegen. "!=" Heisst wenn es ungleich zu 0 ist, sprich 0.05, Dann Wird der Preis reduziert. Wenn der Rabatt aber Gleich zu 0 ist. Sprich 0-1 Personen. Dann gibt es kein rabatt!
			rabattpreis = grundpreis - (grundpreis * rabatt); // Hier müssen wir beachten das dat ergebnis immer links steht und die tatsächliche rechnung rechts. (ergebnis = preis + preis)
		} else { // Oben wurde berechnet was der Preis ist MIT rabatt. Jetzt machen wir ein else case aus dem oberen if case. Und sagen einfach. Falls alles in dem if case NICHT zutrifft (Sprich kein rabatt)
		rabattpreis = grundpreis; // Dann nehmen wir einfach rabattpreis = grundpreis (Den Grundpreis haben wir als erstes ganz oben festgelegt dank Grundpreis = 40)
		}
		
		cout << "Ihr Monatlicher grundbetrag lauted:" << rabattpreis << endl; // Kommen wir zum ende, hier spucken wir einfach als string (Das was blau ist) raus was bei der rechnung rausgekommen. Beispiel: cout << "nachricht" << ergebnis <<endl;

	
	return 0; // ende des programms :)
}

//Cedrik:)
