#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<iostream>
using namespace std;
struct data_nasabah
{
   char namaLengkap[50];
   char alamatRumah[100];
   int kode;
   int status;
   char noHP [13];
};

main()
{
data_nasabah nab;
cout<<"Pengisian Data\n";
cout<<"Nama Nasabah : "; cin>>nab.namaLengkap;
cout<<"Alamat Rumah : "; cin>>nab.alamatRumah;
cout<<"Kode Pos     : "; cin>>nab.kode;
cout<<"Status       : "; cin>>nab.status;
cout<<"No HP        : "; cin>>nab.noHP;


cout<<"\n\n\nData yang telah dimasukkan :\n";
cout<<"Nama Nasabah : "<<nab.namaLengkap<<endl;
cout<<"Alamat Rumah : "<<nab.alamatRumah<<endl;
cout<<"Kode Pos     : " <<nab.kode<<endl;
cout<<"Status       : " <<nab.status<<endl;
cout<<"No HP        : " <<nab.noHP<<endl;

getch();
}
