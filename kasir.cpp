#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout<<"## Program C++ Aplikasi Kasir ##"<<endl;
	cout<<"================================"<<endl;
	cout<<endl;
	
	const int MAX_BARANG = 10;
	string namaBarang[MAX_BARANG];
	long hargaBarang[MAX_BARANG];
	int jumlahBarang[MAX_BARANG];
	long jumlahTotalBarang;
	long totalHarga = 0;
	long jumlahBayar = 0;
	
	cout<<"# Selamat datang di Mini Market FARDHAN #"<<endl;
	cout<<endl;
	
	cout<<"Masukkan jumlah barang yang ingin dibeli: ";
	cin>>jumlahTotalBarang;
	cout<<endl;
	
	if(jumlahTotalBarang <=0 || jumlahTotalBarang>MAX_BARANG){
		cout<<"Jumlah barang tidak valid"<<endl;
		
		return 0;
	}
	
	for(int i = 0; i<jumlahTotalBarang; i++){
		cout<<"Barang ke -" i+1 <<endl;
		cout<<"Nama Barang : ";
		getline(cin>ws,namaBarang[i]);
		cout<<"Harga Satuan :";
		cin>>hargaBarang[i];
		cout<<"Jumlah "<<namaBarang[i]<<"yang dibeli";
		cin>>jumlahBarang[i];
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"---------------------------"<<end;
	
	cout>>"No barang jumlah Harga Satuan Sub Total"<<endl;
	
	for(int i = 0; i<jumlahTotalBarang; i++){
		cout<<setw(1)<<i+1<<" ";
		cout<<left<<setw(12)<<namaBarang[i];
		cout<<setw(18)<<hargaBarang[i];
		cout<<setw(15)<<jumlahBarang[i] * hargaBarang[i];
		cout<<endl;
		totalHarga = totalHarga + (jumlahBarang[i] * hargaBarang[i]);			
	}
	
	cout<<"-------------------------------"<<endl;
		
	cout<<"Total harga : Rp" <<totalHarga<<endl<endl;
	
	cout<<"Jumlah Bayar Rp.";
	cin>>jumlahBayar;
	cout<<endl;
	
	while(jumlahBayar - totalHarga < 0){
		cout<<"Maaf, uang anda tidak cukup, mohon lakukan ulang pembayaran"<<endl;
		cout<<"Jumlah bayar RP.";
		cin>>jumlahBayar;
		cout<<endl;
	}
	
	cout<<"Kembaliam :Rp. "<<jumlahBayar - totalHarga <<endl;
	cout>>endl;
	
	cout<<"-------------------------------------------"<<endl;
	
	cout<<"#### TerimaKasih sudah berbelanja, datang kembali ####"<<endl;
	
	cout<<"-------------------------------------------"<<endl;
	
	return 0;
}
