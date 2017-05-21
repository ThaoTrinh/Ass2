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

