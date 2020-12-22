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
	sinif* nesne2;
	sinif* nesne3;
	nesne3 = new sinif(); // bellekte yeni alan almak 
	nesne2 = &nesne; //nesen pointer adresini nesne ikiye aktarýmý 
	nesne.degerler(1,5);
	nesne.goster();
	nesne2->degerler(10,50);
	nesne2->goster();
	nesne3->degerler(100,500);
	nesne3->goster();
	return 0;
}
