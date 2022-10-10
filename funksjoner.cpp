#include <iostream>
using namespace std;


//Oppg1 ganger sammen to tall
int gange(int tall1 , int tall2) {

	return  tall1 * tall2;
}

//Oppg2 Civerterer farhenheit til celsius
double converter(double far) {

	return (far-32)*5/9;
}


//Oppg3  Ganger sammen to tall endrer et tall før den ganger talla på nytt
void bruk2(int tall1, int tall2) {
	int gang1 = gange(tall1,tall2);
	cout << tall1 << "*" << tall2 << "=" << gang1 << "\n";
	int tyu = tall1+5;
	int gang2 = gange(tyu, tall2);
	cout << tyu << "*" << tall2 << "=" << gang2 << "\n";

}


int main() {
	double far = 99;
	bruk2(2, 2);

	double cel = converter(far);
	cout << "Farheheit " << far << " = Celsius " << cel << "\n";

	
	

}