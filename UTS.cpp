#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
	int pilih,n,i,harga[50],stok[50],banyak,total,hapus;
	char lagi;
	string barang[50];
	
	do{
	system("cls");
	cout<<"===============================\n";
	cout<<"\tProgram Data Penjualan\n";
	cout<<"===============================\n";
	cout<<"\t 1. Input Data Barang\n";
	cout<<"\t 2. Tampilkan Data Barang\n";
	cout<<"\t 3. Update Data Barang\n";
	cout<<"\t 4. Hitung Penjualan\n";
	cout<<"\t 5. Exit\n";
	cout<<"Silahkan Pilih Menu : ";
	cin>>pilih;
	switch(pilih){
		case 1 :
		cout<<"========================\n";
		cout<<"Masukan Data Barang\n";
		cout<<"========================\n";
		cout<<"Masukan Jumlah Barang Yang Ingin Di Input : ";
		cin>>n;
		for(i=0 ; i<n ;i++){
			cout<<"=====Data ke "<<i+1<<"===="<<endl;
			cout<<"Nama Barang\t: ";
			cin>>barang[i];
			cout<<"Harga Barang\t:Rp. ";
			cin>>harga[i];
			cout<<"Stok Barang\t: ";
			cin>>stok[i];
		}
		cout<<endl;
		break;
		getch();
		
		case 2 :
		cout<<"===============================\n";
		cout<<"\t=====Tampil Data Barang=====\n";
		cout<<"===============================\n";
		for(i=0 ; i<n ;i++){
			cout<<"=====Data ke "<<i+1<<"===="<<endl;
			cout<<"Id Barang "<<i<<endl;
			cout<<"Nama Barang \t:"<<barang[i]<<endl;
			cout<<"Harga Barang \t:Rp. "<<harga[i]<<endl;
			cout<<"Stok Barang \t:"<<stok[i]<<endl;
		}
		cout<<endl;
		break;
		getch();
		
		case 3 :
		cout<<"===============================\n";
		cout<<"\tUpdate Data Barang\n";
		cout<<"===============================\n";
		cout<<"Masukan Id Barang : ";
		cin>>i;
	
		cout<<"Nama Barang :\t"<<barang[i]<<endl;
		cout<<"Harga Barang :\t"<<harga[i]<<endl;
		cout<<"Stok Barang :\t"<<stok[i]<<endl;
		cout<<endl;
		break;
		getch();
		
		case 4 :
		cout<<"===============================\n";
		cout<<"Hitung Penjualan\n";
		cout<<"===============================\n";
		cout<<"Masukan Id Barang Yang Ingin Di beli : ";
		cin>>i;
		cout<<"Barang Yang Anda Beli "<<barang[i]<<endl;
		cout<<"Masukan jumlah barang : ";
		cin>>banyak;
		total=banyak*harga[i];
		cout<<"Jumlah Harga RP."<<total;
		cout<<endl;
		break;
		getch();
		
		
		case 5 :
		default : cout<<"Pilihan Tidak tersedia "<<endl;
		return 0;
		cout<<endl;
		
	}cout<<"Apakah Anda ingin mengulang lagi? (Y/N)";
	cin>>lagi;
	
	}while(lagi =='Y' || lagi=='y');
}
