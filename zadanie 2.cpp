#include <iostream>
using namespace std;

int main() {
	int liczba;
	cout << "Podaj liczbe ";
	cin >> liczba;


	if (liczba >0) {
		cout << "Liczba jest dodatnia";
	}
	else if (liczba <0){
		cout << "liczba jest ujemna";
	}
	else {
		cout << "Liczba jest 0";
	}
	return 0;
}