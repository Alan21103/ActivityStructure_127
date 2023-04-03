#include <iostream>
using namespace std;

struct AlamatDetail
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char NIM[12];
	char nama[25];
	AlamatDetail alamat;
	int umur;
};


int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "Masukan NIM :";
		cin.getline(mhs[1].NIM, 12);
		cout << "Masukan Nama :";
		cin.getline(mhs[1].nama, 25);
		cout << "Alamat :";
		cout << "\n\tMasukan Desa :";
		cin.getline(mhs[1].alamat.desa, 20);
		cout << "\tMasukan Kota :";
		cin.getline(mhs[1].alamat.kota, 20);
		cout << "Masukan Umur : ";
		cin >> mhs[1].umur;
		cin.ignore(1, '\n');
	}
		
	for (int i = 0; i < 3; i++)
	{
		cout << "\n\nNIM = " << mhs[1].NIM;
		cout << "\nNama = " << mhs[1].nama;
		cout << "\nDesa = " << mhs[1].alamat.desa;
		cout << "\nKota = " << mhs[1].alamat.kota;
		cout << "\nUmur = " << mhs[1].umur;
	}

};