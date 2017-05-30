#include <nhapphieu.h>

using namespace std;

bool Nhapphieumuonsach(){
	system("cls");
	float selection;
	cout << "Nhap so thu tu sach ma ban muon muon doc: ";
	cin >> selection;
	// chỗ này thêm 
	//khi nhập số thứ tự xuất ra tên sách
	//Hỏi thử phải sách cần mượn không
	//nếu phải thì cho nhập phiếu
	//nếu không hỏi tiếp là muốn chọn quyển khác không
	//nếu có thì cho nhập số khác nếu không thì thoát ra
	while (!cin)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Loi nhap lua chon. Vui long nhap lai: ";
		cin >> selection;

	}
	while (selection < 0 || int(selection) != selection)
	{
		cout << "Loi nhap lua chon ! Ban khong the nhap so thu tu lon hon so sach hoac nho hon 0..." << endl;
		cout << "Nhap lai lua chon: ";
		cin >> selection;
	}

	string _str;
	int index[5];
	int dem = 0;
	for (int i = 0; i<_str.length(); i++) {
		if (_str[i] == '|') {
			index[dem] = i;
			dem++;
		}
	}
	cout << "*----------Vui long nhap phieu muon----------*" << endl;
	cout << "Ten sach: ";
	cin.ignore();
	char ten_sach[200];
	for (int i = index[0] + 1; i < index[1]; i++) {
		ten_sach[i] = _str[i];
		cout << ten_sach[i];
	}
	cout << endl;
	int date, month, year;
	cout << "Nhap ngay muon (dd/mm/yyyy): " << endl;
	cout << "+) Ngay: "; cin >> date;
	cout << "+) Thang: "; cin >> month;
	cout << "+) Nam: "; cin >> year;
	
	//phần này Chưa hoàn chỉnh

	ofstream fileyeucau;
	fileyeucau.open("YeuCauMuonSach.txt");
	string yn;
	cout << "Nhan y de dong y muon va gui yeu cau muon den thu thu, nguoc lai nhan n de quay lai." << endl;
	cin.ignore();
	getline(cin, yn);
	while (yn != "y" && yn != "n")
	{
		cout << "Error!!Vui long nhap dung ki tu: ";
		getline(cin, yn);
	}
	if (yn == "y")
	{
		fileyeucau << yn << endl;
		cout << "Yeu cau muon sach cua ban da duoc gui di..." << endl;
		cout << "Nhan phim enter de quay lai man hinh." << endl;
		
	  fileyeucau.close();
	  system("pause");
	}
	  return true;
}
