#include <iostream>
using namespace std;

int Search01(int A[], int, int);

int main()
{
	const int JmlElemenArray = 11;
	int tika[JmlElemenArray] = {22,61,15,66,18,25,34,87,55,45,10};
	cout<<"***************************************"<<endl;
	cout<<"** S E Q U E N C E	S E A R C H **"<<endl;
	cout<<"***************************************"<<endl;
	
	cout<<"Isi data nya adalah "<<endl;
	cout<<"=================== ="<<endl;
	cout<<endl;
	for(int count = 0; count<JmlElemenArray; count++)
	{
		cout<< "\t"<<"Data ["<< count << "]" <<"-->"<<tika[count]<<endl;
		
	}
	
	int SearchElemen = 0;
	int flag = 0;
	cout<<"**************************************"<<endl;
	cout<<endl;
	cout<<"Masukkan data yang akan anda cari ?	"; cin >> SearchElemen;
	flag = Search01(tika, JmlElemenArray, SearchElemen);
	if(flag != -1)
		cout<<"Data yang di cari ditemukan pada posisi : Data["<<flag<<"]"<<endl;
	else
		cout<<"Data yang anda cari tidak ditemukan"<<endl;
		cin.get();
	return 0;
}

int Search01(int tika[], int JmlElemenArray, int Elemen)
{
	int flag = -1;
	for(int count=0; count<JmlElemenArray; count++)
	{
		if(Elemen==tika[count])
		{
			flag = count;
			break;
		}
	}
	return flag;
}