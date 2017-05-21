#include "Doi_matkhau.h"

using namespace std;

bool Doimatkhau(vector<Nguoidung>& Dangnhap, Nguoidung & Ngdung_dangnhap){
	system("cls");
	//Nguoidung C;
	fstream FILE("dangnhap.txt");
	if (!FILE.is_open()){
		cout << "Loi mo file";
		return false;
	}
	cin.ignore();
	cout<<"Ban muon doi mat khau? (y/n)";
	string y;
	getline(cin,y);
	if(y!="y") return false;
	else{//that do, khong nen dung kiemtra,
	//hoi nay chay dang nhap kiemtra = true
	//gio !kiemtra = false
		bool b=false;
		while(!b){
			cout<<"Nhap mat khau cu: ";
			string matkhau;
			getline(cin,matkhau);
			if(matkhau==Ngdung_dangnhap.Matkhau){
				cout<<"Nhap mat khau moi: ";
				string matkhaumoi;
				getline(cin,matkhaumoi);

				while(true){
					cout<<"Nhap lai mat khau moi: ";
					//neu ma muon thoat??????
					string nhaplai;
					getline(cin,nhaplai);
					if(nhaplai!=matkhaumoi){
						continue;
					}
					else {
						Dangnhap[Ngdung_dangnhap.Maso-1].Matkhau=matkhaumoi;
						//cap nhat lai file 

						return true;
					}
				}
			}//if
			else{
				cout<<"Mat khau cu khong chinh xac"<<endl;
				cout<<"Ban co muon nhap lai khong?(y/n)";
				string y;
				getline(cin,y);
				if(y!="y") return false;
				else{
					b=false;
				}
			}//else
		}//ket thuc while
	}
	FILE.close();
	return true;
}