#include <iostream>

using namespace std;

typedef struct{
	string kode_barang;
	string nama_barang;
	int jumlah_stok;
}	DataBarang;

typedef struct elm *alamatelm;
typedef struct elm{
	DataBarang Kontainer;
	alamatelm next;
}	elemen;

typedef struct{
	elemen *first;
	elemen *last;
}	queue;

void buatQUkosong (queue *Q){
	(*Q).first = NULL;
	(*Q).last = NULL;
}

int isKosong(queue Q){
	bool hasil = false;
	
	if(Q.first == NULL){
		hasil = true;
	}
	return hasil;
}

int jmlElemen (queue Q){
	int hasil = 0;
	
	if(Q.first != NULL){
		elemen *bantu;
		
		bantu = Q.first;
		
		while(bantu != NULL){
			hasil = hasil + 1;
			
			bantu = bantu -> next;
		}
	}
	return hasil;
}

void add(string kode_barang, string nama_barang, int jumlah_stok, queue *Q){
	elemen *info;
	info = new elemen;
	info -> Kontainer.kode_barang = kode_barang;
	info -> Kontainer.nama_barang = nama_barang;
	info -> Kontainer.jumlah_stok = jumlah_stok;
	info -> next = NULL;
	
	if((*Q).first == NULL){
		(*Q).first = info;
	} else {
		(*Q).last -> next = info;
	}
	(*Q).last = info;
	info = NULL;

}

void del(queue *Q){
	if((*Q).first != NULL ){
		elemen *hapus = (*Q).first;
		
		if(jmlElemen(*Q) == 1){
			(*Q).first = NULL;
			(*Q).last = NULL;
			
		} else{
			(*Q).first = (*Q).first -> next;
			hapus -> next = NULL;
		}
		delete hapus;
	}
}

void CetakQueue(queue Q){
	if(Q.first != NULL){
		cout<<"MENAMPILKAN QUEUE"<<endl;
		elemen *bantu = Q.first;
		int i = 1;
		
		while(bantu != NULL){
			cout<<"======================================="<<endl;
			cout<<"elemen ke			: "<< i <<endl;
			cout<<"Kode Barang			: "<<bantu -> Kontainer.kode_barang<<endl;
			cout<<"Nama Barang 			: "<<bantu -> Kontainer.nama_barang<<endl;
			cout<<"Jumlah Stok 			: "<<bantu -> Kontainer.jumlah_stok<<endl;
			
			bantu = bantu -> next ;
			
			i = i+1;
		}
		cout<<"==========================================="<<endl;
		
	} else {
		cout<<"Queue Kosong"<<endl;
	}
}

int main(){
	queue Q;
	buatQUkosong(&Q);
	CetakQueue(Q);
	cout<<endl;
	cout<<endl;
	cout<<"================================================"<<endl;
	add("1005", "Laptop", 3, &Q);
	add("1006", "Kursi", 4, &Q);
	add("1007", "Tas", 6, &Q);
	add("1008", "Mouse", 7, &Q);
	add("1009", "Handphone", 9, &Q);
	CetakQueue(Q);
	cout<<"================================================"<<endl;
	cout<<endl;
	cout<<endl;
	del(&Q);
	del(&Q);
	CetakQueue(Q);
	cout<<"================================================"<<endl;
	return 0;
}