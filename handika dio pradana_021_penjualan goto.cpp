#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i, n, total, harga=0, hrg, yn;
	float diskon;
	string nama;

	start:
	cout<<" Program Perhitungan Total Penjualan "<<endl;
	cout<<" Masukkan Jumlah Jenis Barang : ";cin>>n;
	cout<<endl;
	for(i=1;i<=n;i++){
		cout<<" Harga Barang Ke-"<<i<<": ";cin>>hrg;
		harga=harga+hrg;
	}
		if(harga>500){
			diskon=harga-(harga*10/100);			
		}
		else if(harga>=200&&harga<=500){
			diskon=harga-(harga*5/100);
		}
		else {
			diskon=harga;
		}

	cout<<endl;
	cout<<" Total Harga Asli Sebesar Rp"<<harga<<endl;
	cout<<" Total Harga Setelah Diskon Sebesar Rp"<<diskon<<endl;
	cout<<" Kembali ke Menu? (Y/N) ";cin>>yn;
	if (yn=='Y'||yn=='y'){
		goto start;
	}	
	else if (yn=='N'||yn=='n'){
		goto end;
	}
	end:
	getch();
}
