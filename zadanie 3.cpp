#include <iostream>
using namespace std;

int main() {

	int liczba;

	cout << "Podaj liczbe: ";
	cin >> liczba;

	if (liczba == 0) {
		cout << "liczba jest zerem";
	}
	else if (liczba % 2 != 0) {

		cout << "liczba jest nieparzysta";
	}
	else if(liczba%2 == 0){
		cout << "liczba jest parzysta";
	}


	return 0;
}