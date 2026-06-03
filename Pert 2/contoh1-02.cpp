#include <iostream>
#include <string>
using namespace std;

typedef int angka;
typedef float pecahan;
typedef char huruf[30];
int main() {
	angka umur;
	pecahan pecah;
	huruf nama;
	huruf karakter;
	
	cout<<"Masukkan umur anda : ";cin>>umur;
	cout<<"Umur anda adalah  "<<umur<<endl;
	cout<<endl;
	cout<<"Masukkan bilangan pecahan : ";cin>>pecah;
	cout<<"Bilangan pecahan anda adalah "<<pecah<<endl;
	cout<<endl;
	cout<<"Masukkan nama anda : ";cin>>nama;
	cout<<"Nama anda adalah "<<nama<<endl;
	cout<<endl;
	cout<<"Masukkan huruf : ";cin>>karakter;
	cout<<"Huruf anda adalah "<<karakter<<endl;
	cin.get();
}