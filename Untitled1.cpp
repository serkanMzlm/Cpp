#include "iostream" //standart fonksiyonlarýn oldugu kütüphane
using namespace std; // std içindiki tüm fonksiyonlarý  programa dahil ediyoruz 

class sinif { //sýnýf tanýmý  
	public : //dýþardan eriþilebilir alan 
		int x,y;
		void degerler(int X , int Y)
	{
		x = X; // alýnan degerleri atama yapýlýyor  
		y = Y;
	}
		void goster(){ // x ve y degerleri ekranda gösterme 
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;	
	}
};
int main ()
{
	sinif nesne; //nesne tanýmlýyoruz 
	nesne.degerler(5,7);
	nesne.goster();
	
	return 0;
}
