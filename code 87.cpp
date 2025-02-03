//good bye!
#include<iostream>
using namespace std;
int main() {
	char choice;
	do {
		cout << "Do you want to continue? (y/n): ";
		cin >> choice;
	} while (choice == 'y' ||
	choice == 'Y');
	cout << "Goodbye !" << endl;
	return 0;
}