#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat belajar di Prodi TI UMY" << endl;
		throw 0.5;
		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	
}