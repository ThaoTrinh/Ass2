// Cái thì để chữ hoa đầu, cái thì không
// cái thì _ cái thì không
// cần thống nhất trong việc đặt tên file
// để không bị nhầm lẫn lúc viết tên file hoặc khi tìm file

#include <thuvien_chuan.h>
#include <dangnhap.h>
#include <Docdulieu.h>
#include <switch.h>
#include <tuychon.h>
#include <Dangki_taikhoan.h>
#include <Doi_matkhau.h>

using namespace std;


bool kiemtra  = false;	// rõ ràng hơn kiểm tra gì?
bool tuychinh = false;	// rõ ràng hơn tùy chỉnh gì?


int main() {
	vector<Nguoidung> Dangnhap;	// thông tin tất cả người dùng
	vector<thongtin_nguoidung> Dangki_taikhoan;	// đăng ký tài khoản mới, nên để trong đăng ký
	vector<Chucnang> Themchucnang;	// thêm chức năng nên để trong chucnang
	Nguoidung Ngdung_dangnhap;	// người dùng hiện đang đăng nhập

	if (!Nhap_dulieu(Dangnhap)) {
		cout << "Khong nhap duoc du lieu" << endl;
		system("pause");
		return -1;
	}

	while (true) {

		if (!kiemtra) {

			switch (Tuychon(Dangnhap,Ngdung_dangnhap)) {
				// dang nhap
				case 1:
					cin.ignore();
					Dangnhapvao(Dangnhap,Ngdung_dangnhap);
					break;

				// dang ky
				case 2:{
					 cin.ignore();//vua chon so ma chuyen qua nhap chuoi
					 cout<<"Ban muon dang ki tai khoan(y/n): ";
					 string t;
					 getline(cin,t);
					 
					 if (t != "y") break;

					 if (!Dangki(Dangnhap)) break;

					 if (!thongtin_dangki(Dangki_taikhoan,Ngdung_dangnhap,Dangnhap)) {
						cout << "Khong dang ki duoc tai khoan" << endl;
						system("pause");
						break;
					 }

					 Chucnang_dangki(Dangki_taikhoan,Ngdung_dangnhap,Dangnhap);
					 cout << "Ban da duoc dang ki vao he thong" << endl;
					 system("pause");
					 break;
					 
				}
				
				// thoát chương trình
				case 3: return 0;
			}
		}
		else {
			if (!tuychinh) {	// nếu đã đăng nhập
				Switch_Chucnang(Dangki_taikhoan,Dangnhap, Ngdung_dangnhap);
			}
		}   
	}        // ket thuc while
}    // ket thuc main