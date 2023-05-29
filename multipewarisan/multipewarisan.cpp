#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n" << endl;
	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}
};

class manusia { 
public:
	string jeniskelamin;

	manusia(string pJeniskelamin) :
		jeniskelamin(pJeniskelamin) {
		cout << "manusia dibuat\n" << endl;
	}
	~manusia() {
		cout << "manusia dihapus\n" << endl;
	}
};

class pelajar : private manusia, public orang {
public:
	string sekolah;

	pelajar(stringpNama, string pJeniskelamin, string pSekolah) :
		orang(pNama),
		manusia(pJeniskelamin),
		sekolah(pSekolah) {
		cout << "pelajar dibuat\n" << endl;
	}
};