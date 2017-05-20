#include "dangnhap.h"
using namespace std;

bool Log_in(vector<Nguoidung>& Dangnhap, Nguoidung& Ngdung_dangnhap) {
	system("cls");

	cout << "Ten dang nhap: "
	     << "\t";
	string tendangnhap;
	getline(cin, tendangnhap);
	cout << "Mat khau: "
	     << "\t";
	string matkhau;
	getline(cin, matkhau);
	for (int i = 0; i < Dangnhap.size(); i++) {

		if (tendangnhap == Dangnhap[i].Taikhoan) {

			if (matkhau == Dangnhap[i].Matkhau) {
				cout << "Dang nhap thanh cong" << endl;
				Ngdung_dangnhap.Maso     = i + 1;
				Ngdung_dangnhap.Taikhoan = Dangnhap[i].Taikhoan;
				Ngdung_dangnhap.Matkhau  = Dangnhap[i].Matkhau;
				// kiemtra = true;
				// break;
				return true;
				// ham tra ve la true
				// noi cach khac, kiemtra = true;
			}
		}
	}
	// vi chi khi khong co ket qua moi chay dong nay
	// return thi ham cung ket thuc luon ma
	// nen ta cu cout ra roi return false;
	// if (kiemtra)
	// break;
	// else
	return false;
}

bool Dangki(vector<Nguoidung>& Dangnhap) {
	system("cls");
	// ios::app
	// thuc hien ghi file vao cuoi file
	fstream FILE("dangnhap.txt", ios::out | ios::app);
	if (!FILE.is_open()) {
		cout << "Loi mo file";
		return false;
	}

	Nguoidung B;
	int dodai = Dangnhap.size();// do dai cu
	cout << "Nhap ten tai khoan: ";
	getline(cin, B.Taikhoan);
	for (int i = 0; i < Dangnhap.size(); i++) {
		while (B.Taikhoan == Dangnhap[i].Taikhoan) {
			cout << "Tai khoan da ton tai, Moi chon tai khoan khac: " << endl;
			cout << "Nhap ten tai khoan: ";
			getline(cin, B.Taikhoan);
			i = -1;
			break;
		}
	}
	cout << "Nhap mat khau: ";
	getline(cin, B.Matkhau);
	Dangnhap.push_back(B);// do dai luc nay + 1, nhung lay do dai cu
	// nguoi dung moi se co so chieu toi la [dodai]
	FILE << endl;
	FILE << Dangnhap[dodai - 1].Maso + 1 << "	" << B.Taikhoan << "	"
	     << B.Matkhau;
	FILE.close();
	return true;
}

bool thongtin_dangki(
  vector<thongtin_nguoidung>& Dangki_taikhoan,
  Nguoidung& Ngdung_dangnhap,
  vector<Nguoidung>& Dangnhap) {
	system("cls");
	// ios::app
	// thuc hien ghi file vao cuoi file
	fstream FILE("thongtin_nguoidung.txt", ios::out | ios::app);
	if (!FILE.is_open()) {
		cout << "Loi mo file";
		return false;
	}
	int dodai = Dangnhap.size();// do dai sau khi da them
	thongtin_nguoidung A;
	cout << "Ho va ten: ";
	getline(cin, A.hoten);
	cout << "Nam sinh: ";
	getline(cin, A.namsinh);
	cout << "Dia chi: ";
	getline(cin, A.diachi);
	cout << "Truong: ";
	getline(cin, A.truong);
	cout << "Khoa: ";
	getline(cin, A.khoa);

	Dangki_taikhoan.push_back(A);
	FILE << endl;
	FILE << Dangnhap[dodai - 2].Maso + 1 << "|" << A.hoten << "|" << A.namsinh
	     << "|" << A.diachi << "|" << A.truong << "|" << A.khoa;
	FILE.close();
	return true;
}

bool Chucnang_dangki(vector<thongtin_nguoidung>& Dangki_taikhoan, Nguoidung& Ngdung_dangnhap,vector<Nguoidung>& Dangnhap){
		fstream FILE("chucnang.txt", ios::out | ios::app);
	if (!FILE.is_open()) {
		cout << "Loi mo file";
		return false;
	}
	int dodai = Dangnhap.size();
	FILE<<endl;
	FILE << Dangnhap[dodai - 2].Maso + 1<<"	" << "1	0	0";
	FILE.close();
	return true;
}