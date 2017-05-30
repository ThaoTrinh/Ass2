#include <lichsu_dangnhap.h>

using namespace std;

bool dangnhap_lichsu(Nguoidung & Ngdung_dangnhap){
	system("cls");
	fstream file("lichsu_dangnhap.txt");
	if(!file.is_open()){
		cout<<"Loi mo file"<<endl;
		return false;
	}

	string bien;
	while(getline(file,bien)){
		if(bien.empty()) continue;
		stringstream tach(bien);
		int maso, log;
		string bien2,bien3,bien4,bien5,bien6;
		tach>>maso>>log>>bien2>>bien3>>bien4>>bien5>>bien6;
		if(maso!=Ngdung_dangnhap.Maso) continue;
		if(log==1){
			cout<<"Thoi gian dang nhap: "<<bien2<<" "<<bien3<<" "<<bien4<<" "<<bien6<<" "<<bien5<<endl;
		}
		if(log==0){
			cout<<"Thoi gian dang xuat sau do: "<<bien2<<" "<<bien3<<" "<<bien4<<" "<<bien6<<" "<<bien5<<endl<<endl;
		}

		continue;
	}

	file.close();
	return true;
}