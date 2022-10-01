#include <iostream>
using namespace std;
int main() {
	char letra;
	do {
		cout << "Me llamo David Geraldino Suyo Bautista, estudio la carrera de ingenieria en ciencias d ela computacion" << endl;
		cout << "mi numero de carnet universitario es 111-57" << endl;
		cout << "----------------------------------------------------" << endl;
		cout << "¿desea volver a ver el mensaje? (s/n):  ";
		cin >> letra;
	} while (letra == 'S' || letra == 's');
	return 0;
}