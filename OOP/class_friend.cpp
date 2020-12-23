#include <iostream>
using namespace std;
class Tarih {
	private :
		int  yil;
		string  ay;
		int gun;
	public : 
		Tarih(int , string ,int); //constructor tanýmladýk 
		friend class  Yaz; // arkadaþ sýnýfý 
	
};

Tarih::Tarih(int yil , string ay , int  gun ){
	this -> yil = yil; // ayný adlar kullanýldýðý içiin 'this pointer' yararlandýk 
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
	Yaz::ekrana_yaz(tarih); // static  bir fonksiyon oldugu için '::' eriþebiliriz

	return 0;
}
