#include <stdio.h>
#include <iostream>
using namespace std;

int main()

{
	struct orang
	{

	char nama[40];
	short umur;
}saya;
printf("Nama : ");
cin.getline(saya.nama,40);
printf("Umur :" );
scanf("%i",&saya.umur);
printf("%s berumur %i", saya.nama,saya.umur);
}
