#include <iostream>
#include <conio.h>
#include <fstream>	//untuk memanggil file

using namespace std;

int pil, n=0, Hapus, Edit;			//deklarasi vaiabel secara global

struct mahasiswa{
	char nama[20], fakultas[50], jurusan[50], nd[20];
	long long int nim;
};
mahasiswa ueu['n'];		//mendeklarasikan struct dengan nama ueu dan dengan struktur nama, nim, fakultas, dan jurusan


void owner(){		//fungsi untuk menampilkan identitas pembuat program
	cout<<"   _______________________________\n";
	cout<<"  | Nama\t: Jodi Saputro    |";
	cout<<"\n  | NIM\t\t: 20170801088\t  |";
	cout<<"\n  |_______________________________|\n";
}

void input(){
	n++;
	system("cls");
	owner();
	cout<<"Nama Data\t\t: "; cin>>ueu[1].nd;
	ofstream input_data;												//Deklarasi file output
	input_data.open(ueu[1].nd);										//Membuka data atau membuat data txt file dengan nama input
	cout<<"\n\nInput Data ke dalam sebuah file\n";
	cout<<"Masukan Nama Mahasiswa\t\t: "; cin>>ueu[n].nama;
	cout<<"Masukan NIM Mahasiswa\t\t: "; cin>>ueu[n].nim;
	for(int i=1;i<=n;i++){ 												//Looping untuk mencetak banyakya data yang ditulis ke txt file
		input_data<<"Data Ke-"<<i<<endl;								//Mencetak data yg telah diinput ke txt file
		input_data<<"Nama Anda\t: "<<ueu[i].nama<<endl; 				//Mencetak data yg telah diinput ke txt file
		input_data<<"NIM Anda\t: "<<ueu[i].nim<<endl;					//Mencetak data yg telah diinput ke txt file
	}
	input_data.close();
	cout<<"\n\nData Berhasil Di Input..";
	getch();
}

void baca(){
	system("cls");
	owner();
 ifstream input_data;
       char text;
       
       input_data.open(ueu[1].nd);							//membuka file yang telah ada

       cout<<"\n\nMEMBACA DATA DARI FILE TXT"<<endl;
       
       if(!input_data.fail()){									//fail() -> untuk memeriksa suatu pada kesalahan operasi file
              cout<<"Isi dari File input.txt -> "<<endl<<endl;	
              while (!input_data.eof())							//ulang selama program belum mencapai akhir konten dari file
              {
                     input_data.get(text);
                     cout<<text;
              }
              input_data.close(); 								//menutup file
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }
       getch();
}


void hapus(){
	system("cls");
	owner();
	
	if(n<=0){ 
		cout<<"TIDAK ADA DATA";
	}
	else{ 
		cout<<"Data Ke-berapa Yang Ingin di Hapus? "; cin>>Hapus;	//Variabel Hapus untuk urutan data yang ingin dihapus
	
		if(Hapus<=n && Hapus>0){ 
			--Hapus; 											//Posisi yang akan diHapus dikurangi untuk perpindahan
			for(int i=Hapus;i<n;i++){ 							//Mencari data yang akan dihapus
				ueu[i].nama[20] = ueu[i+1].nama[20]; 			//Proses pertukaran atau pemindahan data
				ueu[i].nim = ueu[i+1].nim;						//Proses pertukaran atau pemindahan data
				ueu[i].fakultas[50] = ueu[i+1].fakultas[50]; 	//Proses pertukaran atau pemindahan data
				ueu[i].jurusan[50] = ueu[i+1].jurusan[50]; 		//Proses pertukaran data atau pemindahan data
			}
			n--; 												//Mengurangi jumlah array
			cout<<"Data Berhasil Dihapus!";
			
			ofstream input_data;		//Deklarasi file output
			input_data.open(ueu[1].nd);	//Membuka data atau membuat data txt file dengan nama input
			for(int i=1;i<=n;i++){ 		//Looping untuk mencetak banyakya data yang ditulis ke txt file
				input_data<<"Data Ke-"<<i<<endl;		//Mencetak data yg telah diinput ke txt file
				input_data<<"Nama Anda\t: "<<ueu[i].nama<<endl; 	//Mencetak data yg telah diinput ke txt file
				input_data<<"NIM Anda\t: "<<ueu[i].nim<<endl;	//Mencetak data yg telah diinput ke txt file
			}
			input_data.close();
		}else{
			cout<<"Maaf Data Tidak Ditemukan";
		}
	}
	
}


void selesai(){
	cout<<"\n\tProgram Selesai. Terimakasih..\n";
}

void pilih(){	//membuat inputan pilihan 
	if (pil==1)
		input();
	if (pil==2)
		baca();
	if (pil==3)
		hapus();
	else
		selesai();
}


int main(){
	do{
		system("cls");
		owner();
		cout<<"\nDATA MAHASISWA ESA UNGGUL"<<endl<<endl;
		cout<<"  [1] Input / Tambah Data\n";
		cout<<"  [2] Baca Data\n";
		cout<<"  [3] Hapus Data\n";
		cout<<"  [4] Selesai\n";
		cout<<"Masukan kode yang anda pilih [1/2/3/4] : "; cin>>pil;
		pilih();
	}while (pil != 4);
	getch();
}
