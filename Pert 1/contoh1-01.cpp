#include <iostream>
#include <string>
using namespace std;

int main() {
	struct 	MATAKULIAH {
		string nama;
		int sks;
		char nhuruf;
		float nangka;
		
	};
	
	MATAKULIAH Data_MK;
	
	Data_MK.nama = "Algoritma dan pemograman";
	Data_MK.sks = 3;
	Data_MK.nhuruf = 'A';
	Data_MK.nangka = 4.00 ;
	
	cout<<endl;
	cout<<endl;
	cout<<"Matakuliah	= " << Data_MK.nama<<endl;
	cout<<"SKS		= " << Data_MK.sks<<endl;
	cout<<"Nilai		= " << Data_MK.nhuruf<<endl;
	cout<<"Indeks		= " << Data_MK.nangka<<endl;
	cin.get();
}