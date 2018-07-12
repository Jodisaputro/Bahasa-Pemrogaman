#include<stdio.h>
#include<conio.h>
#include<iostream>
int main(){
	int A [5]= {20, 9, 1986, 200, 13},n,hapus ;
	system ("cls");
	printf ("Data yg lama\n");
	for (n=0;n<5;n++)
	{
		printf ("%i",A[n]) ;
	}
	printf("\nData yang ingin di hapus: ");
	scanf("%i", &hapus) ;
	printf("Data yang baru : \n");
	for (n=hapus-1;n<5-1;n++)
	{
		A[n]=A[n+1];
	}
	for (n=0;n<4;n++)
	{
		printf("%i",A[n]);
	}
}
