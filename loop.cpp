#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int a[5];
	int jumlah, i;
	for (i=0;i<5;i++){
	
	cout<<"\nMasukan Nilai Bahas Indonesia Semester ke- "<<i+1<<"=";
	cin>>a[i];
	jumlah=jumlah+a[i];

}
	cout<<jumlah;
}
