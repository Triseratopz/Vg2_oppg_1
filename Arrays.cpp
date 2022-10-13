#include <iostream>
using namespace std;


int main() {


	//Array av en dimensjon
	//Oppg1
	int templiste[10];
	//oppg2
	templiste[0] = 1;
	templiste[1] = 2;
	templiste[2] = 3;
	templiste[3] = 4;
	templiste[4] = 5;
	templiste[5] = 6;
	templiste[6] = 7;
	templiste[7] = 8;
	templiste[8] = 9;
	templiste[9] = 10;

	
	

	//oppg3
	int lengde = sizeof(templiste)/sizeof(int);

	
	//oppg4
	for (int i = 0; i < lengde; i++) {

		cout << "i: " << i << "\tElement på plass i: " << templiste[i] << "\n";
		
	}
	cout << "Lengde av liste " << sizeof(templiste) / sizeof(int) << "\n\n";
	
	//Array av flere dimensjoner
	//oppg 5 og 6
	int twoD[3][5] = { {99, 98, 97, 96, 95},{1, 2, 3, 4, 5}, {10, 11, 12, 13, 14 } };

	int twoDlengde = sizeof(twoD) / sizeof(int) ;
	int twoDlengdeInner = sizeof(twoD[0]) / sizeof(int);

	
	//oppg 7
	int liste = 3;
	int plass = 5;
	for (int i = 0; i < liste; i++) {

		for (int j = 0; j < plass; j++) {

			cout << "Liste nr: " << i << "\tPlas nr: " << j << "\tVerdi: " << twoD[i][j] << "\n";
		}
	}
	
}