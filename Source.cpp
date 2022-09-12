#include <iostream>
using namespace std;

void greeting()
{
	//Oppg 3
	cout << "Hei bruker hva hetter du?\n";
	string bruker;
	cin >> bruker;
	cout << "Hello " << bruker << ", har du en fin dag\n\n";

}

int main()
{
	//cout << "Hello world";                //Oppgave 1

	/*
	string name;                                            //Oppg 2
	cin >> name,
		
		cout << "Hello " << name << ", har du en fin dag";
      */
	
	//Oppg 5

	for (int i = 0; i < 10; i++)
	{
		if (i > 4)     //Oppg 6
		{
			cout << "Jeg gider ikke svare lengere" << "\n\n";
			break;
		}
		else;
		{
			//Oppg 4
			greeting();
		}
	}

	//Oppg 7
	cout << "Size of char:" << sizeof(char) << "\n";
	cout << "Size of int:" << sizeof(int) << "\n";
	cout << "Size of long:" << sizeof(long) << "\n";
	cout << "Size of float:" << sizeof(float) << "\n";
	cout << "Size of double:" << sizeof(double) << "\n";


	cout << "\n\n\n";
}
