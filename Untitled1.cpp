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
	nesne.degerler(5,7);
	nesne.goster();
	
	return 0;
}
