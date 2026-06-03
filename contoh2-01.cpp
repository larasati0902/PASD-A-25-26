#include <iostream>
#include <ctype.h>

using namespace std;

int main() 
{
	int lrs_i;
	char *lrs_namaKu, lrs[5] = {'L', 'A', 'R', 'A', 'S'};
	cout << " Nama Ku " <<endl;
	cout << " ======= " << endl;
	for(lrs_i=0; lrs_i<5; lrs_i++)
	{
		lrs_namaKu = &lrs[lrs_i];
		cout << " " << *lrs_namaKu << endl;
	}
	cin.get();
}