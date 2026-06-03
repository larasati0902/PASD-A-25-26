#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
	char NIM[9];
	char nama[30];
	float ipk;
};
int main() {
	
	mahasiswa mhs;
	
	cout<<"Nomor pokok mahasiswa : ";cin>>mhs.NIM;
	cout<<"Nama mahasiswa : ";cin>>mhs.nama;
	cout<<"Induk Prestasi Kumulatif : ";cin>>mhs.ipk;
	cout<<endl;
	cout<<"============================================"<<endl;
	cout<<"		Data anda "<<endl;
	cout<<"============================================"<<endl;
	cout<<"Nomor pokok mahasiswa 		: "<<mhs.NIM<<endl;
	cout<<"Nama Mahasiswa			: "<< mhs.nama<<endl;
	cout<<"Induk Prestasi Kumulatif	: "<<mhs.ipk<<endl;
	cin.get();
}