#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){

	int random;
    srand (time(NULL)); // random sayýmýzýn baþlangýcýný sistem zamanýndan baþlatýyoruz
	for (int i = 0 ; i <5 ; i++){
	random = rand()/100; // bu  sayý cok büyük olacagýndan  100 bölerek ekrana basýyoruz
	cout << random << endl;
	
	}
	
	return 0;
}
