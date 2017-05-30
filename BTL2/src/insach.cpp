#include <insach.h>
#include <nhapphieu.h>
using namespace std;

void InDanhSach_Sach_TacGia(string str, int bien) {
	
	int index[5];
	int dem = 0;
	for (int i = 0; i<str.length(); i++) {
		if (str[i] == '|') {
			index[dem] = i;
			dem++;
		}
	}
	cout << bien << "\t";
	char ten_sach[200];
	for (int i = index[0] + 1; i < index[1]; i++) {
		ten_sach[i] = str[i];
		cout << ten_sach[i];
	}
	cout << "				";
	char tac_gia[200];
	for (int i = index[1] + 1; i < index[2]; i++) {
		tac_gia[i] = str[i];
		cout << tac_gia[i];
	}
	cout << endl;
}

bool infilevanhoc(){
	system("cls");
	ifstream infilesachVanHoc;
		infilesachVanHoc.open("SachVanHoc.txt");
		if (!infilesachVanHoc.is_open()) {
			cout << "Loi mo file cac loai sach";
			return false;
		}

		string str1;
		int bien1;
		cout << "Danh sach cac loai sach: " << endl;
		cout << "*-------------------------------------------------*" << endl;

		getline(infilesachVanHoc, str1); // Lấy ra dòng đầu tiên
		while (getline(infilesachVanHoc, str1))
		{
			if (str1.empty())
				continue;
			stringstream tach(str1);
			tach >> bien1;
			InDanhSach_Sach_TacGia(str1, bien1);
		}
		infilesachVanHoc.close();
		char q;
		cout << "*-----------------------------------------------------------------*" << endl;
		cout<< "Nhan phim enter de quay lai." << endl;
		system("pause");
		return true;
}


bool infileKHTN(){
	system("cls");
	ifstream infilesachKhoahocTuNhien;
		infilesachKhoahocTuNhien.open("SachKhoaHocTuNhien_KyThuat.txt");
		if (!infilesachKhoahocTuNhien.is_open()) {
			cout << "Loi mo file cac loai sach";
			return false;
		}

		string str1;
		int bien1;
		cout << "Danh sach cac loai sach: " << endl;
		cout << "*-------------------------------------------------*" << endl;

		getline(infilesachKhoahocTuNhien, str1); // Lấy ra dòng đầu tiên
		while (getline(infilesachKhoahocTuNhien, str1))
		{
			if (str1.empty())
				continue;
			stringstream tach(str1);
			tach >> bien1;
			InDanhSach_Sach_TacGia(str1, bien1);
		}
		infilesachKhoahocTuNhien.close();
		char q;
		cout << "*-----------------------------------------------------------------*" << endl;
		cout << "Nhan phim enter de quay lai." << endl;
		system("pause");
		return true;
}

bool infilegiaotrinh(){
	system("cls");
	ifstream infilesachGiaoTrinh;
		infilesachGiaoTrinh.open("SachGiaoTrinh.txt");
		if (!infilesachGiaoTrinh.is_open()) {
			cout << "Loi mo file cac loai sach";
			return false;
		}

		string str1;
		int bien1;
		cout << "Danh sach cac loai sach: " << endl;
		cout << "*-------------------------------------------------*" << endl;

		getline(infilesachGiaoTrinh, str1); // Lấy ra dòng đầu tiên
		while (getline(infilesachGiaoTrinh, str1))
		{
			if (str1.empty())
				continue;
			stringstream tach(str1);
			tach >> bien1;
			InDanhSach_Sach_TacGia(str1, bien1);
		}
		infilesachGiaoTrinh.close();
		char q;
		cout << "*-----------------------------------------------------------------*" << endl;
		cout<<"Nhan enter de quay lai"<<endl;
		system("pause");
		return true;
}


//bổ sung thêm nội dung của sách
//chỗ tìm kiếm sách tìm kiếm ra theo từng mục rồi hỏi thử nó có muốn xem nội dung của quyển nào không
//nếu có cho nó lựa chọn xem nội dung quyển đó nếu không thì nhấn enter và quay lại
