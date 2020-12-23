#include<iostream>
using namespace std;

int a = 10 ;

int main(){
	cout << "Postfix = " << a++ << endl; // önce yazar sonra deðeri bir artýrýr (postfix)
	cout << "Prefix = " << ++a << endl;  // önce deðeri bir artýrýr sonra yazar (prefix)
	
	return 0;
}
