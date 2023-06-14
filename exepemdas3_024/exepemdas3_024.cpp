#include <iostream>
using namespace std;

class Gama_Press {
public:
	int buku;
	Gama_Press(int pBuku) :
		buku(pBuku)
	{
		cout << "Daftar pengarang pada penerbit Gama Press " << endl;
		cout << "Joko\n" << endl;
		cout << "Lia\n" << endl;
		cout << "Giga\n" << endl;
	}
};

class Intan_Pariwara : public Gama_Press {
public:

	Intan_Pariwara(int pBuku) :
		Gama_Press(pBuku)
	{
		cout << "Daftar pengarang pada penerbit Intan Pariwara\n" << endl;
		cout << "Asroni\n" << endl;
		cout << "Giga\n" << endl;
	}
};

class bukukarangan : public Gama_Press {
public:

	bukukarangan(int pBuku) :
		Gama_Press(pBuku)
	{
		cout << "Daftar penerbit yang diikuti Giga\n" << endl;
		cout << "Gama Press\n" << endl;
		cout << "Intan Pariwara\n" << endl;
	}
};

class nama : public Intan_Pariwara, public bukukarangan {
public:

	nama(int pBuku) :
		Intan_Pariwara(pBuku),
		bukukarangan(pBuku)
	{
		cout << "Daftar buku yang dikarang Joko\n" << endl;
		cout << "Fisika\n" << endl;
		cout << "Algoritma\n" << endl;
	}
};

int main() {
	nama a(3);

	return 0;
}