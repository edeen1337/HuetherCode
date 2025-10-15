#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	double num1, num2, result; // Var
	char ops;  // /, +, -, /, *
	char again;
	

			
	cout << "certefied klassensprecher code (02.10.2025)  " << endl;
	cout << "Task: Calculator with multiple Operators" << endl;
	cout << endl;
	cout << endl;
	
	cout << "Please enter a number: ";
		cin >> num1;
	cout << "Please enter the Operator u would like to use, [+] [-] [/] [*]: ";
		cin >> ops;
	cout << "Please enter a second number: ";
		cin >> num2;
	
	switch(ops) {
		case '+':
			result = num1 + num2;
			cout << "The Number is: " << result << endl;
			break;
		case '-':
			result = num1 - num2;
			cout << "The Number is: " << result << endl;
			break;
		case '*':
			result = num1 * num2;
			cout << "The Number is: " << result << endl;
			break;
		case '/':
			if (num1 > 0 && num2 > 0) {
				result = num1 / num2;
				cout << "The Number is:" << result << endl;
			} else {
				cout << "The Number 0 Cannot be devided. L   " << endl;
			}
			break;
			}
			
	return 0;
}

