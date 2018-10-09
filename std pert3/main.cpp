#include <iostream>
#include <conio.h>

using namespace std;

struct time{
	int jam;
	int min;
};
struct rencana {
	struct time awal;
	struct time akhir;
	int y;
	int z;
};
struct rencana kerja = {11,22,33,44,5,6};
void funct(struct rencana oo);

void main(){
kerja.akhir.min = 40;
kerja.z = 66;
cout<<"proses main sebelum fungsi\n"<<kerja.awal.jam<<" "<<kerja.awal.min<<" "<<kerja.akhir.jam<<" "<<kerja.akhir.min<<" "<<kerja.y<<" "<<kerja.z<<endl;

funct(kerja); //pengiriman kerja ke fungsi

cout<<"proses main sesudah fungsi\n"<<kerja.awal.jam<<" "<<kerja.awal.min<<" "<<kerja.akhir.jam<<" "<<kerja.akhir.min<<" "<<kerja.y<<" "<<kerja.z<<endl;
getch();
}

void funct(struct rencana oo)
	/*nilai struktur disalinkan ke oo*/
{cout<<"dalam fungsi (a)\n"<<oo.awal.jam<<" "<<oo.awal.min<<" "<<oo.akhir.jam<<" "<<oo.akhir.min<<" "<<oo.y<<" "<<" "<<oo.z<<endl;
oo.awal.jam = 111;
oo.y = 555; /*ubah nilai dalam fungsi*/

cout<<"dalam fungsi (a)\n"<<oo.awal.jam<<" "<<oo.awal.min<<" "<<oo.akhir.jam<<" "<<oo.akhir.min<<" "<<oo.y<<" "<<oo.z<<endl;

}
