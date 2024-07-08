/*! \mainpage Sistem Penilaian 2 Mata Kuliah

* \section intro_sec Pengantar

* Selamat datang di dokumentasi Sistem Penilaian 2 Mata Kuliah.
* Sistem ini dirancang untuk mengelola informasi tentang Kedua nilai dari Mata Kuliah tersebut.

* \section structure_sec Struktur Kode

* Kode ini terdiri dari tiga kelas utama:
* - \b Mata Kuliah : mengabstraksi perilaku umum dari semua mata kuliah.
* - \b Pemrograman: Menangani informasi tentang karyawan dan proyek yang mereka ikuti.
* - \b Jaringan : Menangani informasi tentang proyek dan karyawan yang terlibat di dalamnya.

* \section setup_sec Setup dan Konfigurasi

* Untuk menjalankan sistem ini, pastikan Anda memiliki compiler yang mendukung bahasa C++.
* Kompilasi dan jalankan file ini menggunakan compiler pilihan Anda.

* \section author_sec Tentang Pengembang

* Sistem ini dikembangkan oleh Yowanda Radilla A.id sebagai bagian dari proyek pemrograman dasar.

* \section note_sec Catatan

* Dokumentasi ini dihasilkan menggunakan Doxygen. Pastikan untuk menggunakan Doxygen untuk menghasilkan dokumentasi yang sesuai.

*/

/**
* @file UASPemdas.cpp
* @brief Implementasi Sistem Penilaian 2 Mata Kuliah.
*/


#include <iostream>
using namespace std;

class MataKuliah
{ 
private:
	float Presensi;
	int activity;
	int exercise;
	int tugas_akhir;
public:
	float nilai;
	float nilai_akhir;
public:
	MataKuliah()
	{
		float Presensi = 0.0;
		float nilai = 0.0;
		int activity = 0.0;
		int exercise = 0.0;
		int tugas_akhir = 0.0;
		int nilai_akhir = 0.0;
	}
	virtual void namaMataKuliah() {
		cout << "Nama Mata Kuliah: ";
		return; 
	}
	virtual void inputNilai() {
		cout << "Memasukan nilai = ";
	}
	virtual void hitungNilaiAkhir() {
		cout << "Menghitung nilai akhir = ";
	}
	virtual void CheckKelulusan() {
		cout << "Lulus dengan nilai = ";
	}
	void setPresensi(float nilai)
	{
		float Presensi; 

		this->Presensi = nilai;
	}
	float getPresensi()
	{
		return Presensi;
	}

	void setActivity(int activity)
	{
		this->activity = nilai;
	}
	float getActivity()
	{
		return activity;
	}

	void setExercise(int exercise)
	{
		this->exercise = nilai;
	}
	float getexercise()
	{
		return exercise;
	}

	void setTugas_akhir(int tugas_akhir)
	{
		this->tugas_akhir = nilai;
	}
	float getTugas_akhir()
	{
		return tugas_akhir;
	}
};
class Pemrograman : public MataKuliah
{
public:
	memasukan_nilai (float pNilai) :
		nilai(pNilai)
	{
		cout << "Menginputkan nilai\n" << endl;
	}
	nilai_presensi(float pNilai) :
		presensi(pNilai)
	{
		cout << "Nilai Presensi\n" << endl;
	}
	nilai_acticity(float pNilai) :
		activity(pNilai)
	{
		cout << "Niali activity\n" << endl;
	}
	nilai_excercise(float pNilai) :
		excercise(pNilai)
	{
		cout << "Nilai excercise\n" << endl;
	}
	nilai_TugasAkhir(float pNilai) :
		tugas_akhir(pNilai)
	{
		cout << "Niali Tugas Akhir\n" << endl;
	}
	hitung_nilaiAkhir(float pNilai) :
		nilaiAkhir(pNilai)
	{
		cout << "Nilai akhir\n" << endl;
	}
	Check_Kelulusan(float pNilai) :
		Check_Kelulusan(pNilai)
	{
		cout << "Lulus dengan nilai\n" << endl;
	}
};
class Jaringan : public MataKuliah
{
public:
	nilai_activity (float pNilai) :
		activity(pNilai)
	{
		cout << "Niali activity\n" << endl;
	}
	nilai_excercise(float pNilai) :
		excercise(pNilai)
	{
		cout << "Niali excercise\n" << endl;
	}
};
int main()
{
	MataKuliah* mataKuliah;
	Pemrograman pemrograman;
	Jaringan jaringan;

	char pilih;
	float nilai_akhir;
	do {
		system("cls");
		cout << "======Menu======" << endl;
		cout << "1. Menghitung Nilai Mata Kuliah Pemrograman" << endl;
		cout << "2.Menghitung Nilai Mata Kulaih Jaringan" << endl;
		cout << "5. Keluar" << endl;
		cout << "Masukan menu yang akan dipilih (1/2): " << endl;
		cin >> pilih;

		switch (pilih)
		{
		case 1:
			memasukan_nilai();
			cout << "Nilai akhir Matkul Pemrograman = " << nilai_akhir << endl;
			system("pause");
			break;
		case 2:
			memasukan_nilai();
			cout << "Nilai akhir Matkul Jaringan = " << nilai_akhir << endl;
			system("pause");
			break;
		} while (pilih != 2);
}