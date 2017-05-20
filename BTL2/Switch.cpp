#include "switch.h"
#include "tuychon.h"
#include "Docdulieu.h"
#include "Chucnang.h"
using namespace std;

int Caidat(){
	system("cls");

	cout<<"Moi ban chon tuy chon: "<<endl;
	cout<<"1.	Them chuc nang"<<endl;
	cout<<"2.	Huy chuc nang"<<endl;
	cout<<"3.	Them tai khoan"<<endl;
	cout<<"4.	Doi mat khau"<<endl;
	cout<<"5.	Quay lai"<<endl;

	cout<<"Lua chon cua ban la: ";
	int chon;
	cin>>chon;
	return chon;

}


void Caidat_switch(vector<Nguoidung>& Dangnhap, Nguoidung & Ngdung_dangnhap){
	while(true){
		switch(Caidat()){
			case 1:{
				Themchucnang(Dangnhap,Ngdung_dangnhap);
				break;
			}

			case 2:
				Huychucnang(Dangnhap,Ngdung_dangnhap);
				break;
			case 3:break;
			case 4:
				if(!Doimatkhau(Dangnhap,Ngdung_dangnhap)){
					tuychinh=false;
					break;
				}
				else{
					cout<<"Doi mat khau thanh cong"<<endl;
					system("pause");
					break;
				}
			case 5:
		//quay lai cai switch o tren
				/*tuychinh=false;
				break;*/
				return;
			}
	}
}



void Switch_Chucnang(vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){

	switch(Tuychon_chucnang(Dangnhap,Ngdung_dangnhap)){
		case 1:{
				if(Ngdung_dangnhap.ngdung.docgia==1){
				Switch_docgia(Dangnhap,Ngdung_dangnhap);
				}
				else {
					cout<<"Chuc nang cua ban chua duoc kich hoat."<<endl;
					cout<<"Ban co muon chon chuc nang khac"<<endl;
					cin.ignore();
					string y;
					getline(cin,y);
					if(y =="y"){
						break;
					}
					else return;
				}
			
			break;
		 }
		case 2:
			/*Switch_thuthu(Dangnhap,Ngdung_dangnhap);
			break;*/{
			if(Ngdung_dangnhap.ngdung.thuthu==2){
				Switch_thuthu(Dangnhap,Ngdung_dangnhap);
				}
				else {
					cout<<"Chuc nang cua ban chua duoc kich hoat."<<endl;
					cout<<"Ban co muon chon chuc nang khac"<<endl;
					cin.ignore();
					string y;
					getline(cin,y);
					if(y =="y"){
						break;
					}
					else return;
				}
			//}
			break;
		 }
	
		case 3:
			/*Switch_quanli(Dangnhap, Ngdung_dangnhap);
			break;*/
			{
				if(Ngdung_dangnhap.ngdung.quanli==3){
					Switch_quanli(Dangnhap,Ngdung_dangnhap);
				}
				else {
					cout<<"Chuc nang cua ban chua duoc kich hoat."<<endl;
					cout<<"Ban co muon chon chuc nang khac"<<endl;
					cin.ignore();
					string y;
					getline(cin,y);
					if(y =="y"){
						break;
					}
					else return;
				}
			//}
			break;
		 }
		case 4:
			kiemtra=false;
			break;
	}
	
}

void Switch_docgia(vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){
	switch(Tuychon_docgia(Dangnhap,Ngdung_dangnhap)){
					case 1: break;
					case 2: break;
					case 3:break;
					case 4:break;
					case 5:break;
					case 6:
						Caidat_switch(Dangnhap,Ngdung_dangnhap);
						break;
					case 7:
						//system("pause");
						return ;
				}
}

void Switch_thuthu(vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){
	switch(Tuychon_thuthu(Dangnhap,Ngdung_dangnhap)){
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			Caidat_switch(Dangnhap,Ngdung_dangnhap);
			break;
		case 9:
			return ;
	}
}

void Switch_quanli(vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){
	switch(Tuychon_Quanli(Dangnhap,Ngdung_dangnhap)){
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		Caidat_switch(Dangnhap,Ngdung_dangnhap);
		break;
	case 5:
		return ;
	}

}

