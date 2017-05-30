#include <tuychonsach.h>

using namespace std;

int tuychoninsach(){
	system("cls");
	cout << "Cac the loai sach." << endl;
	cout << "1. Sach, giao trinh on tap." << endl;
	cout << "2. Tac pham van hoc Viet Nam." << endl;
	cout << "3. Khoa hoc tu nhien va ki thuat." << endl;
	cout << "4. Quay lai." << endl;
	cout << "Moi ban chon the loai de hien thi danh sach cac loai sach: ";
	int chon;
	cin>>chon;
	while (chon < 0 || int(chon) != chon || chon > 4)
	{
		cout << "Khong hop le !! Vui long nhap dung lua chon: ";
		cin >> chon;
	}
	return chon;
}

int timkiem(){
	system("cls");
	cout << "1. Tim kiem theo ten." << endl;
	cout << "2. Hien thi danh sach theo the loai." << endl;
	cout << "3. Quay lai." << endl;
	cout<<"Lua chon cua ban la: ";
	int chon;
	cin>>chon;
	return chon;
}