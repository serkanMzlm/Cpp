#include<iostream>
using namespace std;

int a = 10 ;

int main(){
	cout << "Postfix = " << a++ << endl; // �nce yazar sonra de�eri bir art�r�r (postfix)
	cout << "Prefix = " << ++a << endl;  // �nce de�eri bir art�r�r sonra yazar (prefix)
	
	return 0;
}
