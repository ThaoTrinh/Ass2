#include "file_chucnang.h"
#include "Capnhat_file.h"
using namespace std;

bool file_themchucnang(){
	system("cls");
	fstream FILE("themchucnang.txt");
	if(!FILE.is_open()){
		cout<<"Loi mo file"<<endl;
		return false;
	}


		fstream nhap("trong.txt");
		if(!nhap.is_open()){
			cout<<"Loi mo file"<<endl;
			return false;
		}

	string bien;
	getline(FILE,bien);
	if(bien.empty()) {
		cout<<"Khong co chuc nang can duoc kich hoat"<<endl;
		system("pause");
		return true;
	}
	stringstream tach(bien);
	int bien1, bien2;
	tach>>bien1>>bien2;


	
	fstream file("dangnhap.txt");
	if (!file.is_open()){
		cout << "Loi mo file";
		return false;
	}

	string chuoi;
	while(getline(file,chuoi)){
		if(chuoi.empty()) continue;

		stringstream tachbien(chuoi);
		int mso;
		string tk,mk, bhieu;
		tachbien>>mso>>tk>>mk>>bhieu;
		if(mso!=bien1) continue;
		else{
			cout<<bhieu;
		}
	}


		cout<<"	muon them chuc nang: ";
		if(bien2==1) cout<<"doc gia"<<endl;
		if(bien2==2) cout<<"thu thu"<<endl;
		if(bien2==3) cout<<"quan li"<<endl;

	

		
			cout<<"Ban co dong y kich hoat?(y/n)";
			string y;
			cin.ignore();
			getline(cin,y);
			if(y!="y"){
				//ham
				string doi;
				while(getline(FILE,doi)){
					stringstream tach_3(doi);
					int doi1,doi2;
					tach_3>>doi1>>doi2;
					if(doi1==bien1 & doi2==bien2) continue;
					else nhap<<doi1<<"	"<<doi2<<endl;
				}
				/////////
				ofstream xoa("themchucnang.txt");
					if (!xoa.is_open()) {
						cout << "Loi mo file";
					}
				
				trong_chucnang();
				ofstream xoa1("trong.txt");
					if (!xoa1.is_open()) {
						cout << "Loi mo file";
					}

					////////doifilexong
			}

			else{
				fstream lay("chucnang.txt");
					if(!lay.is_open()){
						cout<<"Loi mo file"<<endl;
						return false;
					}

				fstream sua("chucnang.txt");
					if(!sua.is_open()){
						cout<<"Loi mo file"<<endl;
						return false;
					}
				string day;
				while(getline(lay,day)){
					stringstream tach2(day);
					int ms,dg,tt,ql;
					tach2>>ms>>dg>>tt>>ql;
					if(ms!=bien1) sua<<day<<endl;
					else{
						if(bien2==1){
							sua<<ms<<"	"<<bien2<<" "<<tt<<"	"<<ql<<endl;
						}
						if(bien2==2){
							sua<<ms<<"	"<<dg<<"	"<<bien2<<"	"<<ql<<endl;
						}
						if(bien2==3){
							sua<<ms<<"	"<<dg<<"	"<<tt<<"	"<<bien2<<endl;
						}
					}

				}
			
				sua.close();
				lay.close();
				////
				string doi;
				while(getline(FILE,doi)){
					stringstream tach_3(doi);
					int doi1,doi2;
					tach_3>>doi1>>doi2;
					if(doi1==bien1 & doi2==bien2) continue;
					else nhap<<doi1<<"	"<<doi2<<endl;
				}
				/////////
				ofstream xoa("themchucnang.txt");
					if (!xoa.is_open()) {
						cout << "Loi mo file";
					}
				
				trong_chucnang();
				ofstream xoa1("trong.txt");
					if (!xoa1.is_open()) {
						cout << "Loi mo file";
					}
				/////
				cout<<"Them chuc nang thanh cong"<<endl;
				system("pause");
				
			}

			
			nhap.close();
			file.close();
			FILE.close();
			return true;

}
bool file_huychucnang(){
	system("cls");
	fstream FILE("huychucnang.txt");
	if(!FILE.is_open()){
		cout<<"Loi mo file"<<endl;
		return false;
	}


		fstream nhap("trong.txt");
		if(!nhap.is_open()){
			cout<<"Loi mo file"<<endl;
			return false;
		}

	string bien;
	getline(FILE,bien);
	if(bien.empty()) {
		cout<<"Khong co chuc nang can duoc huy"<<endl;
		system("pause");
		return true;
	}
	stringstream tach(bien);
	int bien1, bien2;
	tach>>bien1>>bien2;


	
	fstream file("dangnhap.txt");
	if (!file.is_open()){
		cout << "Loi mo file";
		return false;
	}

	string chuoi;
	while(getline(file,chuoi)){
		if(chuoi.empty()) continue;

		stringstream tachbien(chuoi);
		int mso;
		string tk,mk, bhieu;
		tachbien>>mso>>tk>>mk>>bhieu;
		if(mso!=bien1) continue;
		else{
			cout<<bhieu;
		}
	}


		cout<<"	muon huy chuc nang: ";
		if(bien2==1) cout<<"doc gia"<<endl;
		if(bien2==2) cout<<"thu thu"<<endl;
		if(bien2==3) cout<<"quan li"<<endl;

	

		
			cout<<"Ban co dong y kich hoat?(y/n)";
			string y;
			cin.ignore();
			getline(cin,y);
			if(y!="y"){
				//ham
				string doi;
				while(getline(FILE,doi)){
					stringstream tach_3(doi);
					int doi1,doi2;
					tach_3>>doi1>>doi2;
					if(doi1==bien1 & doi2==bien2) continue;
					else nhap<<doi1<<"	"<<doi2<<endl;
				}
				/////////
				ofstream xoa("huychucnang.txt");
					if (!xoa.is_open()) {
						cout << "Loi mo file";
					}
				
				trongchucnang();
				ofstream xoa1("trong.txt");
					if (!xoa1.is_open()) {
						cout << "Loi mo file";
					}

					////////doifilexong
			}

			else{
				fstream lay("chucnang.txt");
					if(!lay.is_open()){
						cout<<"Loi mo file"<<endl;
						return false;
					}

				fstream sua("chucnang.txt");
					if(!sua.is_open()){
						cout<<"Loi mo file"<<endl;
						return false;
					}
				string day;
				while(getline(lay,day)){
					stringstream tach2(day);
					int ms,dg,tt,ql;
					tach2>>ms>>dg>>tt>>ql;
					if(ms!=bien1) sua<<day<<endl;
					else{
						if(bien2==1){
							sua<<ms<<"	"<<"0"<<" "<<tt<<"	"<<ql<<endl;
						}
						if(bien2==2){
							sua<<ms<<"	"<<dg<<"	"<<"0"<<"	"<<ql<<endl;
						}
						if(bien2==3){
							sua<<ms<<"	"<<dg<<"	"<<tt<<"	"<<"0"<<endl;
						}
					}

				}
			
				sua.close();
				lay.close();
				////
				string doi;
				while(getline(FILE,doi)){
					stringstream tach_3(doi);
					int doi1,doi2;
					tach_3>>doi1>>doi2;
					if(doi1==bien1 & doi2==bien2) continue;
					else nhap<<doi1<<"	"<<doi2<<endl;
				}
				/////////
				ofstream xoa("huychucnang.txt");
					if (!xoa.is_open()) {
						cout << "Loi mo file";
					}
				
				trongchucnang();
				ofstream xoa1("trong.txt");
					if (!xoa1.is_open()) {
						cout << "Loi mo file";
					}
				/////
				
				cout<<"Huy chuc nang thanh cong"<<endl;
				system("pause");
			}

			
			nhap.close();
			file.close();
			FILE.close();
			return true;

}
