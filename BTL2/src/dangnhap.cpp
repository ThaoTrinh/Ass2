#include <dangnhap.h>
#include <Docdulieu.h>
using namespace std;

bool Log_in(vector<Nguoidung>& Dangnhap, Nguoidung& Ngdung_dangnhap) {
	system("cls");

	cout << "Ten dang nhap: "
	     << "\t";
	string tendangnhap;
	getline(cin, tendangnhap);
	cout << "Mat khau: "
	     << "\t";
	string matkhau;
	getline(cin, matkhau);
	for (int i = 0; i < Dangnhap.size(); i++) {

		if (tendangnhap == Dangnhap[i].Taikhoan) {

			if (matkhau == Dangnhap[i].Matkhau) {
				cout << "Dang nhap thanh cong" << endl;
				Ngdung_dangnhap.Maso     = i + 1;
				Ngdung_dangnhap.Taikhoan = Dangnhap[i].Taikhoan;
				Ngdung_dangnhap.Matkhau  = Dangnhap[i].Matkhau;
				Ngdung_dangnhap.Biethieu =Dangnhap[i].Biethieu;

				//ghi lai thoi gian dang nhap
				time_t now = time(0);
				localtime(&now);
				char* dangnhap = ctime(&now);

				// tao ham void?
				// hàm bool?
				fstream file("lichsu_dangnhap.txt",ios::app);
				if(!file.is_open()){
					cout<<"loi mo file"<<endl;
					return false;
				}
				file<<Ngdung_dangnhap.Maso<<"	"<<"1	"<<dangnhap;

				file.close();
				// kiemtra = true;
				// break;
				return true;
			}
		}
	}

	return false;
}

void Dangnhapvao(vector<Nguoidung> &Dangnhap, Nguoidung &Ngdung_dangnhap){
	while (!kiemtra) {
		kiemtra = Log_in(Dangnhap, Ngdung_dangnhap);
		if (!kiemtra) {    

			cout << "Khong hop le ban co muon thu lai hay "
					"khong?(y/n) "
					<< endl;
			string y;
			getline(cin, y);
			if (y == "y")
				continue;
			return ;
		}
		if (!Dulieu_chucnang(Dangnhap, Ngdung_dangnhap)) {
			cout << "Vai tro cua ban khong hop le";
			system("pause");
			return;
		}
	}
}