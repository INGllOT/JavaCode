#include <iostream>
#include <string>
using namespace std;
void pierw() {


	cout.width(11);
	cout.fill('-');
	cout << "|";
	cout.width(11);
	cout << '|';
	cout.width(11);
	cout << '|';
	cout.fill(' ');


}
int main() {

	int i, a;


	cout << " podaj kwote w PLN:";
	cin >> a;
	string kraj[] = { "EUGIW","USA","W.Brytania","Szwajcaria","Kanada","Dania","Japonia" };
	string waluta[] = { "EUR","USD","GBP","CHF","CAD","DKK","JPY" };
	double kwota[] = { 4.5,  4.20,  4.9,  4.32, 3.02, 0.6,  0.039,8 };




	for (int i = 0; i < 7; i++)
	{

		if (i == 0) {
			cout << '|';	pierw();
			cout << endl;

			cout << left << '|';
			cout.width(10);
			cout << left << "Kraj";

			cout << '|';
			cout.width(10);
			cout << left << "waluta";


			cout << '|';
			cout.width(10);
			cout << left << "Kwota" << "|";
			cout.fill(' ');
			cout << endl;
			pierw();
			cout << '|';
			cout << endl;




		}

		cout << left << '|';
		cout.width(10);
		cout << left << kraj[i];

		cout << '|';
		cout.width(10);
		cout << left << waluta[i];


		cout << '|';
		cout.width(6);
		cout << left << kwota[i] * a << " PLN" << "|\n";
		cout.fill(' ');


		if (i == 6) {
			pierw();
			cout << "|";
		}
	}





	return 0;

}
