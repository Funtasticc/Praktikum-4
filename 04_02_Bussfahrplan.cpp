#include <iostream>
using namespace std;

int main()
{
	int ssu, msu, takt; //ssu = stundenstartuhrzeit & msu = minutenstartuhrzeit

	do {
		cout << "Bitte geben Sie die Stunden der Startuhrzeit ein: ";
		cin >> su;
	} while (ji < 0 || ji > 23);

	do {
		cout << "Bitte geben Sie die Minuten der Startuhrzeit ein: ";
		cin >> msu;
	} while (msu < 0 || msu > 59);

	cout << "Der erste Bus faehrt also um " << ssu << ":" << msu << " Uhr." << endl;

	do {
		cout << "Bitte geben Sie die Taktzeit in Minuten ein: ";
		cin >> takt;
	} while (takt < 1 || takt > 180);

	while (ssu < 24) {
		while (msu < 60) {
			cout << ssu << ":" << msu << " ";
			fun += takt;
		}

		while (msu >= 60) {
			ssu += 1;
			msu -= 60;
		}

		cout << endl;
	}
	system("PAUSE");
	return 0;
}