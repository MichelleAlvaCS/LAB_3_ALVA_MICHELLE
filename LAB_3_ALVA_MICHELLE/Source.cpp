//LAB 3 ALVA, MICHELLE T TH

#include <iostream>
#include <fstream>
using namespace std;


int main() {
	int userChoice = 0;


	do {

		cout << "Please make a choice:\n"
			"1. Load Address book from file\n"
			"2. Save Address book to file\n"
			"3. Search for Contact\n"
			"4. Add New Contact\n"
			"5. Delete Contact\n"
			"6. Quit" << endl;

		cin >> userChoice;

		switch (userChoice) {

		case 1:
			cout << "Loaded from file " << endl;
			break;
		case 2:
			cout << "Saving to file" << endl;
			break;
		case 3:
			cout << "Search for contact" << endl;
			break;
		case 4:
			cout << "Add New Contact" << endl;
			break;
		case 5:
			cout << "Delete Contact" << endl;
			break;
		case 6:
			cout << "Quitting program" << endl;
			break;
		default: cout << "Invalid menu choice" << endl;
		}

	} while (userChoice != 6);

	cout << "Thank you for using the Address Book Program." << endl;

	system("pause");
	return 0;
}