#include <tuychon.h>
using namespace std;

int Tuychon(vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){
	system("cls");
	cout << "CHAO MUNG DEN VOI LIBPR0" << endl;
	cout << "_________________________________________________" << endl;
	cout<<"Moi ban chon dich vu"<<endl;
	cout<<"1.	Dang nhap"<<endl;
	cout<<"2.	Dang ki"<<endl;
	cout<<"3.	Thoat"<<endl;
	cout<<"Lua chon cua ban la: ";

	int luachon;
	cin>>luachon;

	return luachon;
}

int Tuychon_docgia(vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){
	system("cls");
	cout<<"Moi ban chon tuy chon"<<endl;
	cout<<"1.	Tim sach"<<endl;
	cout<<"2.	Muon sach"<<endl;
	cout<<"3.	Tra sach"<<endl;
	cout<<"4.	Xem thong tin ca nhan"<<endl;
	cout<<"5.	Xem thong bao"<<endl;
	cout<<"6.	Cai dat"<<endl;
	cout<<"7.	Quay lai"<<endl;
	cout<<"Lua chon cua ban la: ";
	int chon;
	cin>>chon;
	return chon;
}

int Tuychon_thuthu(vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){
	system("cls");
	cout<<"Moi ban chon tuy chon"<<endl;
	cout<<"1.	Them sach"<<endl;
	cout<<"2.	Xoa sach"<<endl;
	cout<<"3.	Chinh sua"<<endl;
	cout<<"4.	Duyet muon sach"<<endl;
	cout<<"5.	Gui thong bao"<<endl;
	cout<<"6.	Thong ke sach"<<endl;
	cout<<"7.	Thong ke nguoi dung"<<endl;
	cout<<"8.	Cai dat"<<endl;
	cout<<"9.	Thong tin ca nhan"<<endl;
	cout<<"10.	Thoat"<<endl;
	cout<<"Lua chon cua ban la: ";
	int chon;
	cin>>chon;

	return chon;
}

int Tuychon_Quanli(vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){
	system("cls");
	cout<<"Moi ban chon tuy chon"<<endl;
	cout<<"1.	Duyet tuy chon nguoi dung"<<endl;
	cout<<"2.	Xoa tuy chon nguoi dung"<<endl;
	cout<<"3.	Gui thong bao den nguoi dung"<<endl;
	cout<<"4.	Caidat"<<endl;
	cout<<"5.	Thong tin ca nhan"<<endl;
	cout<<"6.	Thoat"<<endl;
	cout<<"Lua chon cua ban la: ";
	int chon;
	cin>>chon;

	return chon;
}


int Tuychon_chucnang(vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){
	system("cls");
	cout<<"Ban muon dang nhap voi tu cach la: "<<endl;
	cout<<"1.	Doc gia"<<endl;
	cout<<"2.	Thu thu"<<endl;
	cout<<"3.	Quan li nguoi dung"<<endl;
	cout<<"4.	Lich su dang nhap"<<endl;
	cout<<"5.	Dangxuat"<<endl;
	cout<<"Lua chon cua ban la: ";
	int chon;
	cin>>chon;

	return chon;
}