#include <iostream>
#include <stdlib.h>

using namespace std;

class penambahanData{
private:
int stock;

public :
void Pensil ();
void Buku ();
void Penghapus ();
};

void penambahanData::Pensil(){
int stock = 8, stokPensil, total;
cout<<"masukkan jumlah stock barang = "; cin>> stokPensil;
total = stock + stokPensil;
cout << "Total stok pensil adalah " << total<<endl;	
}

void penambahanData::Buku(){
int stock = 10, stokBuku, total;
cout<<"masukkan jumlah stock barang = "; cin>> stokBuku;
total = stock + stokBuku;
cout << "Total stok buku adalah " << total<<endl;	
}
void penambahanData::Penghapus(){
int stock = 20, stokPenghapus, total;
cout<<"masukkan jumlah stock barang = "; cin>> stokPenghapus;
total = stock + stokPenghapus;
cout << "Total stok penghapus adalah " << total<<endl;	
}

int main (int argc,char** argv){
int pilih;
cout<< "No. \t Nama Barang \t Stock"<<endl;
cout<< "1. \t Pensil \t 8"<<endl;
cout<< "2. \t Buku \t\t 10"<<endl;
cout<< "3. \t Penghapus \t 20"<<endl;

cout<<"pilih barang yang akan ditambah stocknya {1,2,3} = "; cin >>pilih;

if (pilih == 1){
penambahanData pensil;
pensil.Pensil() ;
cout<<"Terima Kasih"<<endl;
}
if (pilih == 2){
penambahanData buku;
buku.Buku() ;
cout<<"Terima Kasih"<<endl;
}
if (pilih == 3){
penambahanData penghapus;
penghapus.Penghapus() ;
cout<<"Terima Kasih"<<endl;
}

return 0;
system("PAUSE");

}
