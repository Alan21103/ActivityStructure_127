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

	