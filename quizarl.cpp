#include <iostream>
using namespace std;

	
	typedef struct {
		int kodebuku;
		string judulbuku;
		string pengarang;
	} DataBuku;
		
	typedef struct elm *alamatelm;
	typedef struct elm {
		DataBuku Kontainer;
		alamatelm next;
	} elemen;
	
	typedef struct {
		elemen* top;
	
	} stack;
	
	void buatSTkosong(stack *S){
		(*S).top = NULL;
	}
	
	int isKosong(stack S){
		bool hasil = false;
		
		if(S.top == NULL){
			hasil = true;
		}
		return hasil;
	}
	
	int jmlElemen(stack S){
		int hasil = 0;
		
		if(S.top != NULL){
			elemen *bantu;
			
			bantu = S.top;
			
			while(bantu != NULL){
				hasil = hasil + 1;
				
				bantu = bantu -> next;
			}
		}
		return hasil;
	}
	
	void push(int kodebuku, string judulbuku, string pengarang, stack *S){
		elemen *info;
		info = new elemen;
		info -> Kontainer.kodebuku = kodebuku;
		info -> Kontainer.judulbuku = judulbuku;
		info -> Kontainer.pengarang = pengarang;
		
		if((*S).top == NULL) {
			cout << "Stack Penuh"<<endl;
			info -> next = NULL;
		} else {
			info -> next = (*S).top;
		}
		(*S).top = info;
		info = NULL;
	}
	
	void Pop(stack *S){
		if((*S).top != NULL) {
			elemen *hapus = (*S).top;
			
			if(jmlElemen(*S) == 1){
				(*S).top = NULL;
			} else {
				(*S).top = (*S).top -> next;
			}
			hapus -> next = NULL;
			delete hapus;
			
		} else {
			cout<<"Stack Kosong"<<endl;
		}
	}
	
	void CetakStack(stack S){
		if(S.top != NULL)
		{
			cout << "MENAMPILKAN STACK " <<endl;
			elemen *bantu = S.top;
			int i = 1;
			while(bantu !=NULL){
				cout<<"=============================================="<<endl;
				cout<<"Elemen ke			: "<< i <<endl;
				cout<<"Kode Buku			: "<<bantu -> Kontainer.kodebuku<<endl;
				cout<<"Judul Buku			: "<<bantu -> Kontainer.judulbuku<<endl;
				cout<<"Pengarang			: "<<bantu -> Kontainer.pengarang<<endl;
				
				bantu = bantu -> next;
				i = i + 1;
			}
			cout<<"=================================================="<<endl;
		} else {
			cout << "Stack Kosong "<<endl;
		}
	}
	
int main() {
	
	stack S;
	
	buatSTkosong(&S);
	CetakStack(S);
	cout<<endl;
	cout<<"========================================================="<<endl;
	push(43, "LaskarPelangi", "Gramedia", &S);
	push(51, "AAAAA", "Gramedia", &S);
	push(29, "BBBB", "Gramedia", &S);
	push(10, "CCCCC", "Gramedia", &S);
	push(87, "LALSAQ", "Gramedia", &S);
	push(65, "RRFSAFWAW", "Gramedia", &S);
	CetakStack(S);
	cout<<"========================================================="<<endl;
	cout<<endl;
	cout<<endl;
	Pop(&S);
	CetakStack(S);
	cout<<endl;
	Pop(&S);
	CetakStack(S);
	cout<<"========================================================="<<endl;
	return 0;
}