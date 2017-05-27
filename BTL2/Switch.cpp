#include "switch.h"
#include "tuychon.h"
#include "Docdulieu.h"
#include "Chucnang.h"
#include "thongtin_canhan.h"
#include "Doi_matkhau.h"
#include "file_chucnang.h"
#include "lichsu_dangnhap.h"

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
				cin.ignore();
				if(!Doimatkhau(Dangnhap,Ngdung_dangnhap)){
					tuychinh=false;
					break;
				}
				else{
					
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



void Switch_Chucnang(vector<thongtin_nguoidung>& Dangki_taikhoan,vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){

	switch(Tuychon_chucnang(Dangnhap,Ngdung_dangnhap)){
		case 1:{
				if(Ngdung_dangnhap.ngdung.docgia==1){
				Switch_docgia(Dangki_taikhoan,Dangnhap,Ngdung_dangnhap);
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
		case 2:{
			if(Ngdung_dangnhap.ngdung.thuthu==2){
				Switch_thuthu(Dangki_taikhoan,Dangnhap,Ngdung_dangnhap);
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
	
		case 3:{
				if(Ngdung_dangnhap.ngdung.quanli==3){
					Switch_quanli(Dangki_taikhoan,Dangnhap,Ngdung_dangnhap);
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
			dangnhap_lichsu(Ngdung_dangnhap);
			system("pause");
			break;
		case 5:
			kiemtra=false;
			time_t now = time(0);
				localtime(&now);
				char* dangxuat = ctime(&now);
				fstream file("lichsu_dangnhap.txt",ios::app);
				if(!file.is_open()){
					cout<<"loi mo file"<<endl;
					
				}
				file<<Ngdung_dangnhap.Maso<<"	"<<"0	"<<dangxuat;

				file.close();
			break;
	}
	
}

void Switch_docgia(vector<thongtin_nguoidung>& Dangki_taikhoan,vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){
	switch(Tuychon_docgia(Dangnhap,Ngdung_dangnhap)){
					case 1: break;
					case 2: break;
					case 3:break;
					case 4:{
						if(!Thongtin_canhan(Dangki_taikhoan,Dangnhap,Ngdung_dangnhap)){
						cout<<"Khong tim thay thong tin"<<endl;	
						break;
						}
						else {
							system("pause");
							break;
					    }
				   }
					case 5:break;
					case 6:
						Caidat_switch(Dangnhap,Ngdung_dangnhap);
						break;
					case 7:
						//system("pause");
						return ;
				}
}

void Switch_thuthu(vector<thongtin_nguoidung>& Dangki_taikhoan,vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){
	switch(Tuychon_thuthu(Dangnhap,Ngdung_dangnhap)){
		case 1:
			//file_themchucnang();
			break;
		case 2:
			//file_huychucnang();
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
		case 9:{
			if(!Thongtin_canhan(Dangki_taikhoan,Dangnhap,Ngdung_dangnhap)){
				cout<<"Khong tim thay thong tin"<<endl;	
				break;
			}
			else {
				system("pause");
				break;
			}
		}
		case 10:
			return ;
	}
}

void Switch_quanli(vector<thongtin_nguoidung>& Dangki_taikhoan,vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap){
	switch(Tuychon_Quanli(Dangnhap,Ngdung_dangnhap)){
	case 1:
		if(!file_themchucnang()){
			cout<<"Loi chuc nang"<<endl;
		}
		
		break;
	case 2:
		if(!file_huychucnang()){
			cout<<"Loi chuc nang"<<endl;
		}
		//file_huychucnang();
		break;
	case 3:
		break;
	case 4:
		Caidat_switch(Dangnhap,Ngdung_dangnhap);
		break;
	case 5:{
		if(!Thongtin_canhan(Dangki_taikhoan,Dangnhap,Ngdung_dangnhap)){
			cout<<"Khong tim thay thong tin"<<endl;	
			break;
		}
		else {
			system("pause");
			break;
		}
	}

	case 6:
		return ;
	}

}

