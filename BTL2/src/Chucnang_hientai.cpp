#include <Chucnag_hientai.h>
#include <Docdulieu.h>
#include <switch.h>
using namespace std;

void Xuatchucnang(vector<Nguoidung>& Dangnhap, Nguoidung& Ngdung_dangnhap){
	system("cls");
	cout << "Chuc nang hien tai cua ban la: ";
	if (Ngdung_dangnhap.ngdung.docgia == 1) {
		cout << "Doc gia  ";
	}

	if (Ngdung_dangnhap.ngdung.thuthu == 2) {
		cout << "Thu thu  ";
	}

	if (Ngdung_dangnhap.ngdung.quanli == 3) {
		cout << "Quan li nguoi dung ";
	}

	
	cout << endl;
	cout << endl;

}