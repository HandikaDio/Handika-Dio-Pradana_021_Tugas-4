#include <iostream>
using namespace std;

int main()
{
    //Data Declaration
	int i, j, matkul, sks, jumSmt, smt, nilai_mk;
	char score;
	float ipk, ip, sks_score, tot_score;
	string mkname;
    	struct mahasiswa
	{
		char nama[30],nim[15],prodi[30];
    };
    mahasiswa mhs;


    //Data Input
	cout << "     Menghitungan IPK Mahasiswa     " << endl;
	cout << endl;
	cout<<"\n";
	cout<<" Nama Mahasiswa  : "; cin.getline (mhs.nama,30);
	cout<<" NIM             : "; cin.getline (mhs.nim,15);
	cout<<" Progam Studi    : "; cin.getline (mhs.prodi,30);


	cout << "Jumlah Semester Anda : "; cin >> jumSmt;
	cout << endl;

	for (i=1; i<=jumSmt; i++){
		    cout << "Jumlah Mata Kuliah Semester"<< i << " Anda : "; cin >> matkul;
		for (j=1; j<=matkul; j++){
			cout << "Jumlah SKS Mata Kuliah Ke-" << j << " Anda : "; cin >> sks;
			cout << "Nilai Mata Kuliah Ke-"      << j << " Anda (A/B/C/D/E) : "; cin >> score;
			cout << endl;


    //Operation

			if (score == 'A'){
				nilai_mk = 4*sks;
			}
			else if (score == 'B') {
            	nilai_mk = 3*sks;
          	}
          	else if (score == 'C') {
            	nilai_mk = 2*sks;
          	}
          	else if (score == 'D') {
            	nilai_mk = 1*sks;
          	}
          	else if (score == 'E') {
            	nilai_mk = 0*sks;
          	}
          	else {
            	cout << "Input Salah!\n";
          	}
          	tot_score = tot_score + nilai_mk;
          	sks_score = sks_score + sks;         
		}
			ip = tot_score/sks_score;
			cout << "Total IP Anda adalah : " << ip << endl;		
	}
	if (jumSmt == 1){
		ipk = ip;
		cout << "Total IPK Anda = " << ipk;
	}
	else if (jumSmt >= 1 && jumSmt <= 14){
		ip = ip+smt;
		ipk = ip/sks_score;
		cout << "Total IPK Anda = " << ipk;
	}

    return 0;
} 
