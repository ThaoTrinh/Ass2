#include "file_chucnang.h"

using namespace std;

bool file_themchucnang(vector<Nguoidung>& Dangnhap, Nguoidung& Ngdung_dangnhap){
	fstream FILE("themchucnang.txt");
	if(!FILE.is_open()){
		cout<<"Loi mo file"<<endl;
		return false;
	}

	fstream nhap("themchucnang.txt");
	if(!nhap.is_open()){
		cout<<"Loi mo file"<<endl;
		return false;
	}

	string bien;
	while(getline(FILE,bien)){
		stringstream tach(bien);
		int bien1, bien2;
		tach>>bien1>>bien2;
		if(bien1!=Ngdung_dangnhap.Maso) continue;
		else{
			cout<<Ngdung_dangnhap.Biethieu<<" muon them chuc nang ";
				if(bien2==1) cout<<"doc gia"<<endl;
				if(bien2==2) cout<<"thu thu"<<endl;
				if(bien2==3) cout<<"quan li"<<endl;
			
			cout<<"Ban co dong y kich hoat?(y/n)";
			string y;
			cin.ignore();
			getline(cin,y);
			if(y!="y"){
				string str;
				while(getline(FILE,bien)){
					stringstream tach1(str);
					int str1,str2;
					tach1>>str1>>str2;
					if(str1==Ngdung_dangnhap.Maso & str2==bien2) continue;
					else nhap<<str1<<"	"<<str2<<endl;
				}
			}

			else{
				fstream sua("chucnang.txt");
					if(!sua.is_open()){
						cout<<"Loi mo file"<<endl;
						return false;
					}

				string chuoi;
				while(getline(sua,chuoi)){
					stringstream tach2(chuoi);
					int ms,dg,tt,ql;
					tach2>>ms>>dg>>tt>>ql;
					if(ms!=bien1) sua<<chuoi<<endl;
					else{
						if(bien2==1){
							nhap<<ms<<"	"<<bien2<<" "<<tt<<"	"<<ql<<endl;
						}
						if(bien2==2){
							nhap<<ms<<"	"<<dg<<"	"<<bien2<<"	"<<ql<<endl;
						}
						if(bien2==3){
							nhap<<ms<<"	"<<dg<<"	"<<tt<<"	"<<bien2<<endl;
						}
					}

				}
			
				sua.close();
				string str;
				while(getline(FILE,bien)){
					stringstream tach1(str);
					int str1,str2;
					tach1>>str1>>str2;
					if(str1==Ngdung_dangnhap.Maso & str2==bien2) continue;
					else nhap<<str1<<"	"<<str2<<endl;
				}
				break;
			}
			
	}
		
	}
		nhap.close();
		FILE.close();
		return true;
}