#include <iostream>
using namespace std;


int main()
{
	float Matematika, Fisika, rerata;
	string status;

	cout << "Masukkan Nilai Matematika : ";
	cin >> Matematika;
	cout << "Masukkan Nilai Fisika : ";
	cin >> Fisika;

	rerata = (Matematika + Fisika) / 2;

	if (rerata >= 60 || Matematika > 70) {
		status = "Lulus";
	}

	else {
		status = "Tidak lulus";
	}

	cout << "Status Kelulusan : " << status << endl;

	return 0;
}