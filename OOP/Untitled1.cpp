#include <iostream>
using namespace std;
class Tarih {
	private :
		int  yil;
		string  ay;
		int gun;
	public : 
		Tarih(int , string ,int); //constructor tan�mlad�k 
		friend class  Yaz; // arkada� s�n�f� 
	
};

Tarih::Tarih(int yil , string ay , int  gun ){
	this -> yil = yil; // ayn� adlar kullan�ld��� i�iin 'this pointer' yararland�k 
	this -> ay = ay;
	this -> gun = gun;
}

class  Yaz{
	public:
	static void ekrana_yaz(Tarih );
	
};

void Yaz::ekrana_yaz(Tarih yaz){
cout << yaz.gun << "/" << yaz.ay << "/" << yaz.yil << endl;
}

main(){

	Tarih tarih(2020,"Aralik",23);
	Yaz::ekrana_yaz(tarih); // static  bir fonksiyon oldugu i�in '::' eri�ebiliriz

	return 0;
}
