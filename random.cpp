#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){

	int random;
    srand (time(NULL)); // random say�m�z�n ba�lang�c�n� sistem zaman�ndan ba�lat�yoruz
	for (int i = 0 ; i <5 ; i++){
	random = rand()/100; // bu  say� cok b�y�k olacag�ndan  100 b�lerek ekrana bas�yoruz
	cout << random << endl;
	
	}
	
	return 0;
}
