#include "iostream"
using namespace std;
namespace deneme1{
	char a = 'A';
	void fonk(){
		int a = 10;
		cout << a << endl; 
	}
}
namespace deneme2{
	char a = 'B';
	void fonk(){
		int a = 20;
		cout << a << endl; 
	}
}
namespace deneme3{
	char a = 'C';
	void fonk(){
		int a = 30;
		cout << a << endl; 
	}	
}
int main(){
	
	cout << deneme1 :: a << endl;
	deneme1 :: fonk();
	cout << deneme2 :: a << endl;
	deneme2 :: fonk();
	cout << deneme3 :: a << endl;
	deneme3 :: fonk();
	return 0 ;
}
