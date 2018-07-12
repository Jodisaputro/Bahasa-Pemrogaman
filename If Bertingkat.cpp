#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n1,n2,n3,temp;
cout<<"=========Program Mengurutkan Nilai========== \n";
	cout<<"Masukan Nilai Pertama\t: "; 
	cin>>n1;
	cout<<"Masukan Nilai Pertama\t: "; 
	cin>>n2;
	cout<<"Masukan Nilai Pertama\t: "; 
	cin>>n3;
	
	if (n1>n2){
		(temp=n1);
		(n1=n2);
		(n2=temp);
	} 
		if (n1>n3){
		(temp=n1);
		(n1=n3);
		(n3=temp);
				} 
			if (n2>n3){
			(temp=n2);
			(n2=n3);
			(n3=temp);
						} 

cout<<"Urutan Nilai Dari Terkecil Hingga Terbesar ="<<n1 <<n2 <<n3;

	return 0;
}
