#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	system("cls");
	// Nguoidung C;
	
	cout << "Ban muon doi mat khau? (y/n)";
	string y;
	getline(cin, y);
	if (y != "y")
		return -3;

	//cai tren return false la ngat ham roi
	//nen khong can de else
	//code day them kho doc

	//bool b = false;
	while (true) {
		cout << "Nhap mat khau cu: ";
		string matkhau;
		getline(cin, matkhau);
		if (true) {
			cout << "Nhap mat khau moi: ";
			string matkhaumoi;
			getline(cin, matkhaumoi);

			while (true) {
				cout << "Nhap lai mat khau moi: ";
				// neu ma muon thoat??????
				string nhaplai;
				getline(cin, nhaplai);
				if (nhaplai != matkhaumoi)
					continue;


				// Dangnhap[Ngdung_dangnhap.Maso-1].Matkhau=matkhaumoi;
				// cap nhat lai file

				fstream FILE("dangnhap.txt");
				if (!FILE.is_open()) {
					cout << "Loi mo file";
					return -1;
				}
				string bien;
				while (getline(FILE, bien)) {
					if (bien.empty())
						continue;

					stringstream tach(bien);
					int bien1;
					tach >> bien1;

					// cout<<Ngdung_dangnhap.Maso<<endl;
					if (bien1 != 2 - 1)
						continue;


					FILE
						<< endl
						<< 2
						<< "	"
						<< "nguyenanhkhoa"
						<< "	"
						<< matkhaumoi << endl;
					FILE.close();
					return 0;
				}
				// ra duoc toi day la co van de
				break; // while mat khau moi
			}
			break; // while mat khau cu
		}
		else {
			cout << "Mat khau cu khong chinh xac" << endl;
			cout << "Ban co muon nhap lai khong?(y/n)";
			string y;
			getline(cin, y);
			if (y != "y")
				return -2;

			break;
		}    // else
	}        // ket thuc while
}