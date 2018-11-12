#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text = "", output = "";
	char c = 0;
	int v = 0;


	cout << "Bitte geben Sie den zu verschluesselnden Text ein: ";
	getline(cin, text);

	cout << "Bitte geben Sie die Anzahl Verschiebepositionen ein (als positive ganze Zahl): ";
	cin >> v;

	while (v > 26) 
	v -= 26;

	for (int i = 0; i < text.length(); i++)
	{
		c = text[i];

		if (c >= 'A' && c <= 'Z')
		{
			c = c + v;

			while (c > 'Z') c -= 26;
			output += c;
		}
		else if (c >= 'a' && c <= 'z')
		{
			c = c + v;

			while (c > 'z') c -= 26;
			output += c;
		}
		else output += c;
	}
	cout << output << endl;
	system("pause");

	return 0;
}
