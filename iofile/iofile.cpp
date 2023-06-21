#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah mama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda masukan karakter q
		if (baris == "q")
		break;
		outfile << baris << endl;
	}

	outfile.close();
	ifstream infile;
	infile.open("contoh.txt");
	cout << endl << ">= Membuka dan membaca file" << endl;
	if (infile.is_open()) {
		while (getline(infile, baris)) {
			cout << baris << '\n';
		}
		infile.close();
	}
	else cout << "Uneble to open file";
	return 0;
}