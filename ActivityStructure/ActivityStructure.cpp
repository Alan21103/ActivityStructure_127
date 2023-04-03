#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string nama;
	string alamat;
	int umur;
};


int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20210140019";
	mhs1.nama = "Ardian Mulya";
	mhs1.alamat = "Wonosobo";
	mhs1.umur = 20;

	cout << "Masukan NIM :";
	cin >> mhs2.NIM;
	cout << "Masukan Nama :";
	cin >> mhs2.nama;
	cout << "Masukan Alamat :";
	cin >> mhs2.alamat;
	cout << "Masukan Umur :";
	cin >> mhs2.umur;

	cout << "\nNIM = " << mhs1.NIM;
	cout << "\nNama = " << mhs1.nama;
	cout << "\nAlamat = " << mhs1.alamat;
	cout << "\nUmur = " << mhs1.umur;

	cout << "\n\nNIM = " << mhs2.NIM;
	cout << "\nNama = " << mhs2.nama;
	cout << "\nAlamat = " << mhs2.alamat;
	cout << "\nUmur = " << mhs2.umur;

}