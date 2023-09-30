#include <iostream>
using namespace std;

int main() {

	int a, b, c;
	cout << "Podaj 3 liczby aby sprawdziæ, ktora z nich jest najwieksza:\n";
	cin >> a;
	cin >> b;
	cin >> c;

	if (a > b && a > c) {

		cout << "liczba pierwsza jest najwieksza:" << a;
	}
	else if (b > a && b > c) {

		cout << "Liczba druga jest najwieksza:" << b;
	}else if (c > a && c > b) {

		cout << "Liczba trzecia jest najwieksza:" << c;
	}

	return 0;
}