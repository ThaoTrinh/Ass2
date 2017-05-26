#include "Doi_matkhau.h"
#include "Capnhat_file.h"

using namespace std;

bool Doimatkhau(vector<Nguoidung>& Dangnhap, Nguoidung& Ngdung_dangnhap) {
	system("cls");
	// Nguoidung C;
	fstream FILE("dangnhap.txt");
	if (!FILE.is_open()) {
		cout << "Loi mo file";
		return false;
	}
	string bien;
	
	cout << "Ban muon doi mat khau? (y/n)";
	string y;
	getline(cin, y);
	if (y != "y")
		return false;
	while (true) {
		cout << "Nhap mat khau cu: ";
		string matkhau;
		getline(cin, matkhau);
		if (matkhau == Ngdung_dangnhap.Matkhau) {
			cout << "Nhap mat khau moi: ";
			string matkhaumoi;
			getline(cin, matkhaumoi);

			while (true) {
				cout << "Nhap lai mat khau moi: ";
				string nhaplai;
				getline(cin, nhaplai);
				if (nhaplai != matkhaumoi)
					continue;


				else {

					Dangnhap.at(Ngdung_dangnhap.Maso -1);    
					Dangnhap[Ngdung_dangnhap.Maso - 1].Matkhau = matkhaumoi;
					capnhat_doimatkhau(Dangnhap, Ngdung_dangnhap);
					ofstream FILE("dangnhap.txt");
					if (!FILE.is_open()) {
						cout << "Loi mo file";
					}
					FILE.close();
					// xoafile_dangnhap;
					capnhat_dangnhap(Dangnhap, Ngdung_dangnhap);
					// xoafile_doimatkhau;
					ofstream Nhap("doimatkhau.txt");
					if (!Nhap.is_open()) {
						cout << "Loi mo file";
					}
					Nhap.close();
				}
				cout << "Doi mat khau thanh cong" << endl;
				system("pause");

				return true;

				break;    // while mat khau moi
			}
			break;    // while mat khau cu
		}
		else {
			cout << "Mat khau cu khong chinh xac" << endl;
			cout << "Ban co muon nhap lai khong?(y/n)";
			string y;
			getline(cin, y);
			if (y != "y")
				return false;
			else
				return Doimatkhau(Dangnhap, Ngdung_dangnhap);
			break;
		}    // else
	}        // ket thuc while
}