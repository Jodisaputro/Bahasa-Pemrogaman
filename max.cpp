#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a, b, max;
	cout<<"Input Angka"<<endl;
	
	cout<<"Input A = "<<endl;
	cin>>a;
	
	cout<<"Input B = "<<endl;
	cin>>b;
	
	if (a>b){
		max= a;
	}
	else{
		max= b;
	}
	cout<<"Nilai Terbesar ="<<max;
	getch();
}
