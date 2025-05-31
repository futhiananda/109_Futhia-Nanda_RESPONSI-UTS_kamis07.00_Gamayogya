#include<iostream>
#include<string>
using namespace std;

//class jadwal{
//	private:
//		string username;
//		int password;
//	public:
//		string matkul;
//		string jam;
//		string dosen;
//		string ruang;
//};

struct jadwal{
	string username;
	string password;
	string matkul;
	string jam;
	string dosen;
	string ruang;
};

void loginJadwal(jadwal &jdwl){
	cout << "Masukkan Username : ";
	getline(cin, jdwl.username);
	cout << "Masukkan Password : ";
	getline(cin, jdwl.password);
}
void inputJadwal(jadwal &jdwl){
	cout << "Masukkan Jadwal Mata Kuliah : ";
	getline(cin, jdwl.matkul);
	cout << "Masukkan Dosen Mata Kuliah : ";
	getline(cin, jdwl.dosen);
	cout << "Masukkan Jam Mata Kuliah : ";
	getline(cin, jdwl.jam);
	cout << "Masukkan Ruang Mata Kuliah : ";
	getline(cin, jdwl.ruang);
}

void tampilJadwal(const jadwal &jdwl){
	cout << "==========================================" << endl;
	cout << "	Jadwal Mata Kuliah " << endl;
	cout << "==========================================" << endl;
	cout << "Mata Kuliah : " << jdwl.matkul << endl;
	cout << "Dosen : " << jdwl.dosen << endl;
	cout << "Jam : " << jdwl.jam << endl;
	cout << "Ruang : " << jdwl.ruang << endl;
	cout << "==========================================" << endl;
	
}

int main(){
	loginJadwal;
	tampilJadwal;
	inputJadwal;
	char ulangi;
	int pilih;
	
	do{
		cout << endl;
		cout << "========================================" << endl;
		cout << "1. Login Jadwal Mata Kuliah" << endl;
		cout << "2. Tampil Jadwal Mata Kuliah " << endl;
		cout << "3. Input Jadwal Mata Kuliah (admin)" << endl;
		cout << "4. keluar" << endl;
		cout << "========================================" << endl;
		cout << "Masukkan pilihan (1-4) : ";
		cin >> pilih;
		
		switch(pilih){
			case 1:
				loginJadwal;
			break;
			
			case 2:
				tampilJadwal;
			break;
			
			case 3:
				inputJadwal;
			break;
			
			case 4:
				cout << "Anda Keluar Dari program!" << endl;
			break;
			
			default:
				cout << "Silahkan Pilih dari (1-4)!!" << endl;
			break;
		}

		cout << endl;
		cout << "Apa ingin anda ingin ulang (y/n)? : ";
		cin >> ulangi;
	} while (ulangi == 'y' || ulangi == 'Y');
	return 0;
	
}
