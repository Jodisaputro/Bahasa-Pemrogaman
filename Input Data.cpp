#include<iostream>
#include<conio.h>
int main(){
using namespace std;

 char nama[32];
 char nim[12];
 char jeniskelamin[15];
 char angkatan[12];
 char alamat[50];
 char prodi [25];
 char fakultas [40];

cout<<"Input Data Mahasiswa \n\n";
 cout<<"Nama\t\t: ";
 cin.getline(nama,32);
 cout<<"NIM\t\t: ";
 cin.getline(nim,12);
 cout<<"Jenis Kelamin\t:";
 cin.getline(jeniskelamin,15);
 cout<<"Angkatan\t: ";
 cin.getline(angkatan,12);
 cout<<"Alamat\t\t: ";
 cin.getline(alamat,50);
 cout<<"Prodi\t\t: ";
 cin.getline(prodi,25);
 cout<<"Fakultas\t:";
 cin.getline(fakultas,40);
cout<<"\n\nTerimakasih telah mengisi Input Data Mahasiswa";
 getch();
}
