#include "Docdulieu.h"
using namespace std;

bool Nhap_dulieu(vector<Nguoidung>& Dangnhap){
	fstream FILE("dangnhap.txt");
	if (!FILE.is_open()){
		cout << "Loi mo file";
		return false;
	}


	Nguoidung A;
	string bien;
	int bien1;
	string  bien2, bien3;

	while (getline(FILE, bien)){
		stringstream tach(bien);
		if (bien.empty())
			continue;
		
		//cout << bien << endl;
		tach >> bien1 >> bien2 >> bien3;
		A.Maso = bien1;
		A.Taikhoan = bien2;
		A.Matkhau = bien3;

		Dangnhap.push_back(A);
	}
	FILE.close();
	return true;
}


bool Dulieu_chucnang(vector<Nguoidung>& Dangnhap, Nguoidung & Ngdung_dangnhap){
	fstream FILE("chucnang.txt");
	if(!FILE.is_open()) {
		cout<<"Loi mo file"<<endl;
		system("pause");
		return false;
	}
	//cout << "Mo file chucnang.txt" << endl;
	system("pause");
	Chucnang B;
	string bien;
	int bien1, bien2, bien3, bien4;

	while(getline(FILE,bien)){
		if(bien.empty())
			continue;

			stringstream tach(bien);
			tach>>bien1>>bien2>>bien3>>bien4;
			cout<<bien1<<" ";
			cout<<Ngdung_dangnhap.Maso<<endl;
			if(bien1!=Ngdung_dangnhap.Maso) continue;
			else{
				B.docgia=bien2;
				B.thuthu=bien3;
				B.quanli=bien4;

				Ngdung_dangnhap.ngdung=B;
				return true;
			}
	}
	//chay het roi ma khong thay nguoi do
	//file bi loi
	cout << "Khong tim thay nguoi dung" << endl;
	system("pause");
	return false;

	FILE.close();
	return true;
}

