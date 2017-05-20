#include "thuvien_chuan.h"
#include "dangnhap.h"
#include "Docdulieu.h"
#include "switch.h"
#include "tuychon.h"
using namespace std;


bool kiemtra  = false;
bool tuychinh = false;


int main() {
	vector<Nguoidung> Dangnhap;
	vector<thongtin_nguoidung> Dangki_taikhoan;
	vector<Chucnang> Themchucnang;
	Nguoidung Ngdung_dangnhap;

	if (!Nhap_dulieu(Dangnhap)) {
		cout << "Khong nhap duoc du lieu" << endl;
		system("pause");
		return -1;
	}
	//for (int i = 0; i < Dangnhap.size(); i++) {
	//	cout << Dangnhap[i].Maso << "\t" << Dangnhap[i].Taikhoan << "\t"
	//	     << Dangnhap[i].Matkhau << endl;
	//}


	while (true) {

		if (!kiemtra) {

			switch (Tuychon()) {
				case 1:
					cin.ignore();
					while (!kiemtra) {
						kiemtra = Log_in(Dangnhap, Ngdung_dangnhap);
						if (!kiemtra) {    // code cho nay dai qua, day thanh
							               // void di!

							cout << "Khong hop le ban co muon thu lai hay "
							        "khong?(y/n) "
							     << endl;
							string y;
							getline(cin, y);
							if (y == "y") {
								continue;
							}

							else
								break;
						}
						if (!Dulieu_chucnang(Dangnhap, Ngdung_dangnhap)) {
							cout << "Vai tro cua ban khong hop le";
							system("pause");
						}
					}
					break;
				case 2:{
					cin.ignore();//vua chon so ma chuyen qua nhap chuoi
					 cout<<"Ban muon dang ki tai khoan(y/n): ";
					string t;
					 getline(cin,t);
					if(t=="y"){
						if (Dangki(Dangnhap)) {
							if(!thongtin_dangki(Dangki_taikhoan,Ngdung_dangnhap,Dangnhap)){
								cout << "Khong dang ky ban vao duoc" << endl;
								system("pause");
							}
							else {
								Chucnang_dangki(Dangki_taikhoan,Ngdung_dangnhap,Dangnhap);
								cout << "Ban da duoc dang ky vao he thong" << endl;
								system("pause");
							}
						}
						break;
					}
					
					else {
						break;
					}
				/*}
				else break;
			}*/
					//else break;
				}
				case 3: return 0;
			}
		}
		else {
			if (!tuychinh) {
				// cout << "Ban da dang nhap vo" << endl;
				// Switch_docgia();
				Switch_Chucnang(Dangnhap, Ngdung_dangnhap);
			}
		}    // ket thuc man hinh dua tren doi tuong
	}        // ket thuc while
}    // ket thuc main