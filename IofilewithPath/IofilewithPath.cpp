#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string namafile;

	cout << "Masukan nama file : ";
	cin >> namafile;

	ofstream outfile;
	outfile.open(namafile+".txt",ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	while (true) {
		cout << "- ";
		getline(cin, baris);
		if (baris == "q")
			break;
		outfile << baris << endl;
	}


	outfile.close();
	ifstream infile;
	infile.open(namafile + ".txt", ios::out);
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