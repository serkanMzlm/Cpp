#include "iostream" //standart fonksiyonlar�n oldugu k�t�phane
using namespace std; // std i�indiki t�m fonksiyonlar�  programa dahil ediyoruz 

class sinif { //s�n�f tan�m�  
	public : //d��ardan eri�ilebilir alan 
		int x,y;
		void degerler(int X , int Y)
	{
		x = X; // al�nan degerleri atama yap�l�yor  
		y = Y;
	}
		void goster(){ // x ve y degerleri ekranda g�sterme 
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;	
	}
};
int main ()
{
	sinif nesne; //nesne tan�ml�yoruz 
	sinif* nesne2;
	sinif* nesne3;
	nesne3 = new sinif(); // bellekte yeni alan almak 
	nesne2 = &nesne; //nesen pointer adresini nesne ikiye aktar�m� 
	nesne.degerler(1,5);
	nesne.goster();
	nesne2->degerler(10,50);
	nesne2->goster();
	nesne3->degerler(100,500);
	nesne3->goster();
	return 0;
}
