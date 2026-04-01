#include <iostream>
#include <string>
using namespace std;

int main() {
	struct 	BUKU { 
		string lrs_judul_buku;
		string lrs_pengarang;
		int lrs_tahun_terbit;
		float lrs_harga;
	};
	
	BUKU Data_BK;
	
	Data_BK.lrs_judul_buku = "Algoritma dan pemograman";
	Data_BK.lrs_pengarang = "AAAA";
	Data_BK.lrs_tahun_terbit = 2008;
	Data_BK.lrs_harga = 50000 ;
	
	
	cout<<endl;
	cout<<endl;
	cout<<"Judul Buku	= " << Data_BK.lrs_judul_buku<<endl;
	cout<<"Pengarang		= " << Data_BK.lrs_pengarang<<endl;
	cout<<"Tahun Terbit		= " << Data_BK.lrs_tahun_terbit<<endl;
	cout<<"Harga		= " << Data_BK.lrs_harga<<endl;
	cin.get();
}