#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

void pembuat(){		//fungsi untuk menampilkan identitas pembuat program
cout<<"============================================="<<endl;
cout<<"//\t PROGRAM MENGHITUNG NILAI AKHIR//"<<endl;
cout<<"                Jodi Saputro\n";
cout<<"                20170801088\n";
cout<<"============================================="<<endl;
}

void garis(){		//fungsi untuk membuat garis
	cout<<"--------------------------------------------------\n";
}

void garis1(){		//fungsi untuk membuat garis
	cout<<"==========================\n";
}

//fungsi untuk input nilai tiap mata pelajaran
void input(float nb[], float nbi[], float nm[], float nf[], float nk[], float nbio[]){		
	int i;
			//input Nilai Bahsa Indonesia
	for (i=0; i<5; i++){		//i<7 menandakan ada array ber index 4 untuk mengisi nilai tiap smt, un, dan us
		if(i<3){				//input nilai pertama sampai ke 4 sebagai nilai per smt
			cout<<"Input Nilai Bahasa Indonesia smt "<< i+1 <<"\t: "; cin>>nb[i];
		}else if (i==3){		//input nilai ke 3 sebagai nilai US
			cout<<"Input Nilai US Bahasa Indonesia "<<"\t: "; cin>>nb[i];
		}else if(i==4){			//input nilai ke 4  sebagai UN
			cout<<"Input Nilai UN Bahasa Indonesia "<<"\t: "; cin>>nb[i];
		}
	}
	garis();
	
			//input Nilai Bahsa Inggris
	for (i=0; i<5; i++){
		if(i<3){
			cout<<"Input Nilai Bahasa Inggris smt "<< i+1 <<"\t: "; cin>>nbi[i];
		}else if (i==3){
			cout<<"Input Nilai US Bahasa Inggris "<<"\t\t: "; cin>>nbi[i];
		}else if(i==4){
			cout<<"Input Nilai UN Bahasa Inggris "<<"\t\t: "; cin>>nbi[i];
		}
	}
	garis();
	
			//input Nilai Matematika
	for (i=0; i<5; i++){
		if(i<3){
			cout<<"Input Nilai Matematika smt "<< i+1 <<"\t\t: "; cin>>nm[i];
		}else if (i==3){
			cout<<"Input Nilai US Matematika "<<"\t\t: "; cin>>nm[i];
		}else if(i==4){
			cout<<"Input Nilai UN Matematika "<<"\t\t: "; cin>>nm[i];
		}	
	}
	garis();
	
			//input Nilai Fisika
	for (i=0; i<5; i++){
		if(i<3){
			cout<<"Input Nilai Fisika smt "<< i+1 <<"\t\t: "; cin>>nf[i];
		}else if (i==3){
			cout<<"Input Nilai US Fisika "<<"\t\t\t: "; cin>>nf[i];
		}else if(i==4){
			cout<<"Input Nilai UN Fisika "<<"\t\t\t: "; cin>>nf[i];
		}	
	}
	garis();
	
			//input Nilai Kimia
	for (i=0; i<5; i++){
		if(i<3){
			cout<<"Input Nilai Kimia smt "<< i+1 <<"\t\t\t: "; cin>>nk[i];
		}else if (i==3){
			cout<<"Input Nilai US Kimia "<<"\t\t\t: "; cin>>nk[i];
		}else if(i==4){
			cout<<"Input Nilai UN Kimia "<<"\t\t\t: "; cin>>nk[i];
	}	
	}
	garis();
	
			//input Nilai Biologi
	for (i=0; i<5; i++){
		if(i<3){
			cout<<"Input Nilai Biologi smt "<< i+1 <<"\t\t: "; cin>>nbio[i];
		}else if (i==3){
			cout<<"Input Nilai US Biologi "<<"\t\t\t: "; cin>>nbio[i];
		}else if(i==4){
			cout<<"Input Nilai UN Biologi "<<"\t\t\t: "; cin>>nbio[i];
		}	
	}

}

//menghitung Nilai Bahasa Indonesia
void Calculate_B(float nb[], float NA[0]){
	float sum_b = 0, NR_b = 0, NS_b = 0;
	int i;
	for(i=0; i<3; i++){
		sum_b = sum_b + nb[i];						//sum_b variabel untuk jumlah nilai Bahasa Indonesia selama 3 semester
	}
		NR_b = sum_b/3;								//NR_b variabel untuk menghitung Nilai Rata-Rata Bahasa Indonesia dari 3 semester
		NS_b = (0.7 * NR_b) + (0.3 * nb[3]);		//NS_b variabel untuk menghitung Nilai Sekolah Pelajaran Bahasa Indonesia
		NA[0] = (0.4 * NS_b) + (0.6 * nb[4]);		//NA[0] variabel array dengan index 0 untuk Nilai Akir Bahasa Indonesia
		
	cout<<"\nNilai Rata - Rata Tiap Semester\t: "<<NR_b;
	cout<<"\nNilai Sekolah\t\t\t: "<<NS_b;
	cout<<"\nNilai Akhir (NA)\t\t: "<<NA[0]<<endl;		//NA biologi ada pada variabel NA index ke 0
}

//menghitung Nilai Bahasa Inggris
void Calculate_BI(float nbi[], float NA[1]){
	float sum_bi = 0, NR_bi = 0, NS_bi = 0;
	int i;
	for(i=0; i<3; i++){
		sum_bi = sum_bi + nbi[i];					//sum_b variabel untuk jumlah nilai Bahasa Inggris selama 3 semester
	}
		NR_bi = sum_bi/3;							//NR_bi variabel untuk menghitung Nilai Rata-Rata Bahasa Inggris dari 3 semester
		NS_bi = (0.7 * NR_bi) + (0.3 * nbi[3]);		//NS_b variabel untuk menghitung Nilai Sekolah Pelajaran Bahasa Inggris
		NA[1] = (0.4 * NS_bi) + (0.4 * nbi[4]);		//NA[1] variabel array dengan index 1 untuk Nilai Akir Bahasa Inggris
		
	cout<<"\nNilai Rata - Rata Tiap Semester\t: "<<NR_bi;
	cout<<"\nNilai Sekolah\t\t\t: "<<NS_bi;
	cout<<"\nNilai Akhir (NA)\t\t: "<<NA[1]<<endl;		//NA biologi ada pada variabel NA index ke 1
}

//menghitung Nilai Matematika
void Calculate_M(float nm[], float NA[2]){
	float sum_m = 0, NR_m = 0, NS_m = 0;
	int i;
	for(i=0; i<3; i++){
		sum_m = sum_m + nm[i];
	}
		NR_m = sum_m/3;
		NS_m = (0.7 * NR_m) + (0.3 * nm[3]);
		NA[2] = (0.4 * NS_m) + (0.6 * nm[4]);
		
	cout<<"\nNilai Rata - Rata Tiap Semester\t: "<<NR_m;
	cout<<"\nNilai Sekolah\t\t\t: "<<NS_m;
	cout<<"\nNilai Akhir (NA)\t\t: "<<NA[2]<<endl;		//NA biologi ada pada variabel NA index ke 2
}

//menghitung Nilai Fisika
void Calculate_F(float nf[], float NA[3]){
	float sum_f = 0, NR_f = 0, NS_f = 0;
	int i;
	for(i=0; i<3; i++){
		sum_f = sum_f + nf[i];
	}
		NR_f = sum_f/3;
		NS_f = (0.7 * NR_f) + (0.3 * nf[3]);
		NA[3] = (0.4 * NS_f) + (0.4 * nf[4]);
		
	cout<<"\nNilai Rata - Rata Tiap Semester\t: "<<NR_f;
	cout<<"\nNilai Sekolah\t\t\t: "<<NS_f;
	cout<<"\nNilai Akhir (NA)\t\t: "<<NA[3]<<endl;		//NA biologi ada pada variabel NA index ke 3
}

//menghitung Nilai Kimia
void Calculate_K(float nk[], float NA[4]){
	float sum_k = 0, NR_k = 0, NS_k = 0;
	int i;
	for(i=0; i<3; i++){
		sum_k = sum_k + nk[i];
	}
		NR_k = sum_k/3;
		NS_k = (0.7 * NR_k) + (0.3 * nk[3]);
		NA[4] = (0.4 * NS_k) + (0.4 * nk[4]);
		
	cout<<"\nNilai Rata - Rata Tiap Semester\t: "<<NR_k;
	cout<<"\nNilai Sekolah\t\t\t: "<<NS_k;
	cout<<"\nNilai Akhir (NA)\t\t: "<<NA[4]<<endl;		//NA biologi ada pada variabel NA index ke 4
}

//menghitung Nilai Biologi
void Calculate_BIO(float nbio[], float NA[4]){
	float sum_bio = 0, NR_bio = 0, NS_bio = 0;
	int i;
	for(i=0; i<3; i++){
		sum_bio = sum_bio + nbio[i];
	}
		NR_bio = sum_bio/3;
		NS_bio = (0.7 * NR_bio) + (0.3 * nbio[3]);
		NA[3] = (0.4 * NS_bio) + (0.4 * nbio[4]);
		
	cout<<"\nNilai Rata - Rata Tiap Semester\t: "<<NR_bio;
	cout<<"\nNilai Sekolah\t\t\t: "<<NS_bio;
	cout<<"\nNilai Akhir (NA)\t\t: "<<NA[3]<<endl;		//NA biologi ada pada variabel NA index ke 3
}

//fungsi untuk menampilkan LULUS
void LULUS(){

	cout<<"\n\t\t\t\t\t   Selamat Anda LULUS";

}

//fungsi untuk Menampilkan TIDAK LULUS
void TLULUS(){
	cout<<"\n\t\t\t\t\t  Maaf Anda Tidak LULUS";
}

//fungsi untuk keterangan LULUS atau Tidak
void keterangan(float NA[], float AVG_NA){
	int i;
	float sum;
	for(i=0; i<6; i++){
		sum = sum + NA[i];
	}
	AVG_NA = sum/6;
	
	if (NA[0] >= 40 && AVG_NA >= 55){
	if (NA[1] >= 40 && AVG_NA >= 55){
	if (NA[2] >= 40 && AVG_NA >= 55){
	if (NA[3] >= 40 && AVG_NA >= 55){
	if (NA[4] >= 40 && AVG_NA >= 55){
	if (NA[5] >= 40 && AVG_NA >= 55){
							LULUS();
						}else {
	TLULUS();
	}
	}else {
	TLULUS();
	}
	}else {
	TLULUS();
	}
	}else {
	TLULUS();
	}	
	}else {
	TLULUS();
	}
	}else {
		TLULUS();
	}
}


//fungsi untuk display akhir
void Display(float nb[], float nbi[], float nm[], float nf[], float nk[], float nbio[], float NA[]){
	int i;
	garis1();
	cout<<"\n\tMata Pelajaran Bahasa Indonesia\n";
	garis1();
	for (i=0; i<5; i++){
		cout<<"\nNilai Bahasa Indonesia smt "<< i+1 <<"\t: "<<nb[i];
	}
	cout<<"\nNilai US Bahasa Indonesia\t: "<<nb[3];
	cout<<"\nNilai UN Bahasa Indonesia\t: "<<nb[4];
	Calculate_B(nb, NA);
	garis();
	
	cout<<"Mata Pelajaran Bahasa Inggris/n";
	for (i=0; i<3; i++){
		cout<<"\nNilai Bahasa Inggris smt "<< i+1 <<"\t: "<<nbi[i];
	}
	cout<<"\nNilai US Bahasa Inggris\t\t: "<<nbi[3];
	cout<<"\nNilai UN Bahasa Inggris\t\t: "<<nbi[4];
	Calculate_BI(nbi, NA);
	garis();
	
	cout<<"Mata Pelajaran Matematika";
	for (i=0; i<3; i++){
		cout<<"\nNilai Matematika smt "<< i+1 <<"\t\t: "<<nm[i];
	}
	cout<<"\nNilai US Matematika\t\t: "<<nm[3];
	cout<<"\nNilai UN Matematika\t\t: "<<nm[4];
	Calculate_M(nm, NA);
	garis();
	
	cout<<"Mata Pelajaran Fisika";
	for (i=0; i<3; i++){
		cout<<"\nNilai Fisika smt "<< i+1 <<"\t\t: "<<nf[i];
	}
	cout<<"\nNilai US Fisika\t\t\t: "<<nf[3];
	cout<<"\nNilai UN Fisika\t\t\t: "<<nf[4];
	Calculate_F(nf, NA);
	garis();
	
	cout<<"Mata Pelajaran Kimia";
	for (i=0; i<3; i++){
		cout<<"\nNilai Kimia smt "<< i+1 <<"\t\t: "<<nk[i];
	}
	cout<<"\nNilai US Kimia\t\t\t: "<<nk[3];
	cout<<"\nNilai UN Kimia\t\t\t: "<<nk[4];
	Calculate_K(nk, NA);
	garis();
	
	cout<<"Mata Pelajaran Biologi";
	for (i=0; i<3; i++){
		cout<<"\nNilai Biologi smt "<< i+1 <<"\t\t: "<<nbio[i];
	}
	cout<<"\nNilai US Biologi\t\t: "<<nbio[3];
	cout<<"\nNilai UN Biologi\t\t: "<<nbio[4];
	Calculate_BIO(nbio, NA);
	garis();
}

int main(){
	float nb[3], nbi[3], nm[3], nf[3], nk[3], nbio[3], NA[4], AVG_NA;
	int i;
	pembuat();
	input(nb, nbi, nm, nf, nk, nbio);
	cout<<endl<<endl;
	Display(nb, nbi, nm, nf, nk, nbio, NA);
	garis();
	keterangan(NA, AVG_NA);
	getch();
}
