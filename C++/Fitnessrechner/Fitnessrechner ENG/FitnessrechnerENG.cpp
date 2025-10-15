#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	double years, discount, discountedprice, price = 40;
	int members;
	
	cout << "6ix/7even" << endl;
	cout << "08.10.25" << endl;
	cout << "Calculating membership costs per month while taking things such as discount into consideration" <<endl;
	cout << endl;
	
	cout << "Please enter the number of members you would like to signup: ";
	cin >> members;
	cout << "Please enter the years you would like to signup for: ";
	cin >> years;
	
	switch (members) {
		case 0:
		discount = 0;
		break;
		case 1:
		discount = 0;
		break;
		case 2:
		discount = 0.05;
		break;
		case 3:
		discount = 0.15;
		break;
		default:
		discount = 0.2;	
	}
	if (years > 5) {
		discount += 0.05;
	}
	if (discount!= 0) {
		discountedprice = price - (price * discount);
	} else {
		discountedprice = price;
	}
	cout << "The Monthly subscription price is going to be: " << discountedprice << " Euro";
	
	return 0;
}

// SHADOW WIZARD MONEY GANG$ WE LOVE CASTING SPELLS O_o
