#include <Capnhat_file.h>

using namespace std;

bool capnhat_doimatkhau(vector<Nguoidung>& Dangnhap, Nguoidung& Ngdung_dangnhap) {
	system("cls");
	fstream FILE("dangnhap.txt");
	if (!FILE.is_open()) {
		cout << "Loi mo file";
		return false;
	}

	fstream Nhap("trong.txt");
	if (!Nhap.is_open()) {
		cout << "Loi mo file";
		return false;
	}


	string bien;
	while (getline(FILE, bien)) {
		if (bien.empty())
			continue;
		int bien1;
		stringstream tach(bien);
		tach >> bien1;
		if (bien1 != Ngdung_dangnhap.Maso) {
			Nhap << bien << endl;
		}
		else {
			Nhap << Ngdung_dangnhap.Maso << "	"
			     << Dangnhap[Ngdung_dangnhap.Maso - 1].Taikhoan << "	"
			     << Dangnhap[Ngdung_dangnhap.Maso - 1].Matkhau <<"	"
				 <<Dangnhap[Ngdung_dangnhap.Maso - 1].Biethieu<<endl;
			//break;
		}
	}


	Nhap.close();
	FILE.close();


	
	return true;
}

bool capnhat_dangnhap(vector<Nguoidung>& Dangnhap, Nguoidung& Ngdung_dangnhap) {
	system("cls");
	// Nguoidung C;
	fstream FILE("trong.txt");
	if (!FILE.is_open()) {
		cout << "Loi mo file";
		return false;
	}

	fstream Nhap("dangnhap.txt");
	if (!Nhap.is_open()) {
		cout << "Loi mo file";
		return false;
	}


	string bien;
	while (getline(FILE, bien)) {
		if (bien.empty())
			continue;
		int bien1;
		stringstream tach(bien);
		tach >> bien1;
		if (bien1 != Ngdung_dangnhap.Maso) {
			Nhap << bien << endl;
		}
		else {
			Nhap << Ngdung_dangnhap.Maso << "	"
			     << Dangnhap[Ngdung_dangnhap.Maso - 1].Taikhoan << "	"
			     << Dangnhap[Ngdung_dangnhap.Maso - 1].Matkhau << "	"
				 << Dangnhap[Ngdung_dangnhap.Maso - 1].Biethieu<<endl;
			//break;
		}
	}


	Nhap.close();
	FILE.close();


	
	return true;
}


bool trong_chucnang(){
	

		fstream file("trong.txt");
		if(!file.is_open()){
			cout<<"Loi mo file"<<endl;
			return false;
		}

		fstream nhap("themchucnang.txt");
		if(!nhap.is_open()){
			cout<<"Loi mo file"<<endl;
			return false;
		}

		string str;
				while(getline(file,str)){
					if(str.empty()) continue;
					nhap<<str<<endl;
				}

		nhap.close();
		file.close();

		return true;
}

bool trongchucnang(){
	

		fstream file("trong.txt");
		if(!file.is_open()){
			cout<<"Loi mo file"<<endl;
			return false;
		}

		fstream nhap("huychucnang.txt");
		if(!nhap.is_open()){
			cout<<"Loi mo file"<<endl;
			return false;
		}

		string str;
				while(getline(file,str)){
					if(str.empty()) continue;
					nhap<<str<<endl;
				}

		nhap.close();
		file.close();

		return true;
}

bool trongvao_chucnang(){
		fstream file("trong.txt");
		if(!file.is_open()){
			cout<<"Loi mo file"<<endl;
			return false;
		}

		fstream nhap("chucnang.txt");
		if(!nhap.is_open()){
			cout<<"Loi mo file"<<endl;
			return false;
		}

		string str;
				while(getline(file,str)){
					if(str.empty()) continue;
					nhap<<str<<endl;
				}

		nhap.close();
		file.close();

		return true;
}