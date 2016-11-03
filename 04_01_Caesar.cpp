#include <iostream>
#include <string>
using namespace std;

int main()
{

	string eingabe;
	unsigned int v, length;

	cout << "Bitte geben Sie den zu verschluesselnden Text ein: ";
	getline(cin, eingabe);
	cout << "Bitte geben Sie die Anzahl Verschiebepositionen ein (als positive ganze Zahl): ";
	cin >> v;

	length = eingabe.length();
	for (int i = 0; i < length; i++)
	{
		int c = int(eingabe[i]), basis;

		if (c >= int('a') && c <= int('z'))
		{
			basis = int('a');

		}
		else if (c >= int('A') && c <= int('Z'))
		{
			basis = int('A');
		}
		else
		{
			continue;
		}
	
		c += (v - basis);
		c %= 26;
		eingabe[i] = char(basis + c);
		}

	cout << eingabe << endl;
		system("PAUSE");
		return 0;
}
