#include "Chucnang.h"
#include "Docdulieu.h"
#include "Switch.h"
#include "Chucnag_hientai.h"
using namespace std;

bool Themchucnang(vector<Nguoidung>& Dangnhap, Nguoidung& Ngdung_dangnhap) {
	Xuatchucnang(Dangnhap,Ngdung_dangnhap);

	cout << "Ban muon them chuc nang nao? " << endl;
	cout << "1.Doc gia" << endl
	     << "2.Thu thu" << endl
	     << "3.Quan li nguoi dung" << endl;
	cout << endl;
	int chon;
	bool kiem = false;
	while (!kiem) {
		cout << "Lua chon cua ban la: ";
		cin >> chon;
		switch (chon) {
			case 1:
				if ((Ngdung_dangnhap.ngdung.docgia == 1)) {
					cout << "Chuc nang nay ban da co" << endl;
					cout << "Ban co muon chon chuc nang khac khong?(y/n) ";
					cin.ignore();
					string y;
					getline(cin, y);
					if (y == "y") {
						kiem = false;
					}
					else {
						return true;
					}
				}
				else {
					fstream FILE("themchucnang.txt");
						if(!FILE.is_open()){
							cout<<"loi mo file"<<endl;
						}

						FILE<<Ngdung_dangnhap.Maso<<" "<<chon;

						FILE.close();
					cout << "Yeu cau da duoc ghi lai"<<endl;
					system("pause");
					kiem = true;
				}
				break;
			case 2:
				if ((Ngdung_dangnhap.ngdung.thuthu == 2)) {
					cout << "Chuc nang nay ban da co" << endl;
					cout << "Ban co muon chon chuc nang khac khong?(y/n) ";
					cin.ignore();
					string y;
					getline(cin, y);
					if (y == "y") {
						kiem = false;
					}
					else {
						return true;
					}
				}
				else {
					fstream FILE("themchucnang.txt");
						if(!FILE.is_open()){
							cout<<"loi mo file"<<endl;
						}

						FILE<<Ngdung_dangnhap.Maso<<" "<<chon;

						FILE.close();
					cout << "Yeu cau da duoc ghi lai"<<endl;
					system("pause");
					break;
					// return true;
				};
				break;
			case 3:
				if ((Ngdung_dangnhap.ngdung.quanli == 3)) {
					cout << "Chuc nang nay ban da co" << endl;
					cout << "Ban co muon chon chuc nang khac khong?(y/n) ";
					cin.ignore();
					string y;
					getline(cin, y);
					if (y == "y") {
						kiem = false;
					}
					else {
						return true;
					}
				}
				else {
					fstream FILE("themchucnang.txt");
						if(!FILE.is_open()){
							cout<<"loi mo file"<<endl;
						}

						FILE<<Ngdung_dangnhap.Maso<<" "<<chon;

						FILE.close();
					cout << "Yeu cau da duoc ghi lai"<<endl;
					system("pause");
					kiem=true;
				};
				break;
		}
	}
	return false;
}

bool Huychucnang(vector<Nguoidung>& Dangnhap, Nguoidung& Ngdung_dangnhap) {
	Xuatchucnang(Dangnhap,Ngdung_dangnhap);

	cout << "Ban muon huy chuc nang nao? " << endl;
	cout << "1.Doc gia" << endl
	     << "2.Thu thu" << endl
	     << "3.Quan li nguoi dung" << endl;
	cout << endl;
	int chon;
	bool kiem = false;
	while (!kiem) {
		cout << "Lua chon cua ban la: ";
		cin >> chon;
		switch (chon) {
			case 1:
				if ((Ngdung_dangnhap.ngdung.docgia != 1)) {
					cout << "Chuc nang nay chua duoc kich hoat nen khong duoc "
					        "yeu cau huy"
					     << endl;
					cout << "Ban co muon chon huy chuc nang khac khong?(y/n) ";
					cin.ignore();
					string y;
					getline(cin, y);
					if (y == "y") {
						kiem = false;
					}
					else {
						return true;
					}
				}
				else {
					fstream FILE("huychucnang.txt");
						if(!FILE.is_open()){
							cout<<"loi mo file"<<endl;
						}

						FILE<<Ngdung_dangnhap.Maso<<" "<<chon;

						FILE.close();
					cout << "Yeu cau da duoc ghi lai"<<endl;
					system("pause");
					return true;
					break;
				};
				break;
			case 2:
				if ((Ngdung_dangnhap.ngdung.thuthu != 2)) {
					cout << "Chuc nang nay chua duoc kich hoat nen khong yeu "
					        "cau huy duoc"
					     << endl;
					cout << "Ban co muon chon huy chuc nang khac khong?(y/n) ";
					cin.ignore();
					string y;
					getline(cin, y);
					if (y == "y") {
						kiem = false;
					}
					else {
						return true;
					}
				}
				else {
					fstream FILE("huychucnang.txt");
						if(!FILE.is_open()){
							cout<<"loi mo file"<<endl;
						}

						FILE<<Ngdung_dangnhap.Maso<<" "<<chon;

						FILE.close();
					cout << "Yeu cau da duoc ghi lai" << endl;
					system("pause");
					return true;
					break;
					
				};
				break;
			case 3:
				if ((Ngdung_dangnhap.ngdung.quanli != 3)) {
					cout
					  << "Chuc nang nay chua duoc kich hoat nen chua duoc huy"
					  << endl;
					cout << "Ban co muon chon huy chuc nang khac khong?(y/n) ";
					cin.ignore();
					string y;
					getline(cin, y);
					if (y == "y") {
						kiem = false;
						break;
					}
					else {
						return true;
					}
				}
				else {
					fstream FILE("huychucnang.txt");
						if(!FILE.is_open()){
							cout<<"loi mo file"<<endl;
						}

						FILE<<Ngdung_dangnhap.Maso<<" "<<chon;

						FILE.close();
					cout << "Yeu cau da duoc ghi lai" << endl;
					system("pause");
					return true;
					break;
				};
				break;
		}
	}
	return false;
}