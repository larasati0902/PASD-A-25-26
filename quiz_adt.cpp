#include <iostream>
#include <string>
using namespace std;

class Barang{
	public: 
	int kd_barang;
	char namabarang[30];
	float harga;
};
int main() {
	
	Barang brg;
	
	cout<<"Kode barang : ";cin>>brg.kd_barang;
	cout<<"Nama barang : ";cin>>brg.namabarang;
	cout<<"Harga : ";cin>>brg.harga;
	cout<<endl;
	cout<<"============================================"<<endl;
	cout<<"		Data anda "<<endl;
	cout<<"============================================"<<endl;
	cout<<"Kode barang 	: "<<brg.kd_barang<<endl;
	cout<<"Nama Barang			: "<< brg.namabarang<<endl;
	cout<<"Harga: "<<brg.harga<<endl;
	cin.get();
}