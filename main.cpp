/*Omar Faig Orujlu
  05.09.2020 
*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	// 2 Arrays vom typ String und int werden hier erzeugt
	string  array_name [5];
	int array_age[5];
	
	// Ein txt file wird hier erzeugt um die eingegebene Werte zu speichern (in txt file)

	ofstream file1 ("Eingabe.txt");
	
	for (int n = 0; n < 3; n++) {
		// Hier für die Verienfachung wird for Schleife benutzt aber das kann mit der While Schleife implementiert werden.
		// Eingaben werden nacheinander erfolgt 
			cin >> array_name[n]>> array_age[n];
		// die Arrays werden in file1 gespeichert
			file1 << array_name[n] << " ist " << array_age[n] << " Jahre alt " <<"\n";
		
	}
	file1.close();
	for (int n = 0;n < 3; n++) {
		// die Eingegebene Werten werden auch im Konsolenfenster wieder ausgedruckt.
			cout << array_name[n] <<" ist "<<array_age[n]<<" Jahre alt "<<  endl;
			
		
	}
	system("pause");
	return 1;
}