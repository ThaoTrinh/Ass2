#include <switch_sach.h>
#include <insach.h>
#include <tuychonsach.h>

using namespace std;

void switchinsach(){
	system("cls");

	while(true){
		switch(tuychoninsach()){
		case 1:
			if(!infilegiaotrinh())
				cout<<"Khong the in"<<endl;
			break;
		case 2:
			if(!infilevanhoc()){
				cout<<"Khong the in"<<endl;
			}
			break;
		case 3:
			if(!infileKHTN()){
				cout<<"Khong the in"<<endl;
			}
			break;
		case 4:
			return;
		}
	}
}

void Switch_timkiem(){
	system("cls");
	while(true){
		switch(timkiem()){
			case 1:
				break;
			case 2:
				//tuychoninsach();
				switchinsach();
				break;
			case 3:
				return;
		}
	}
}