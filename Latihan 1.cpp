#include<iostream>
#include<conio.h>
using namespace std;
int main(){
		int panjang, lebar;
		float luas;
		
		cout<<"Input Panjang = ";
		cin>>panjang;
		
		cout<<"Input Lebar = ";
		cin>>lebar;
		
		luas = panjang*lebar;
		
		cout<<"\nLuas Persegi Panjang ="<<luas;
		cout<<"\nPanjang="<<panjang;
		cout<<"\nLebar="<<lebar;
		
		getch();
}
