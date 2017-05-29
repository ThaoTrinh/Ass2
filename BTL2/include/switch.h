#ifndef SWITCH
#define SWITCH
#include "thuvien_chuan.h"

int Caidat();
void Caidat_switch(std::vector<Nguoidung>& Dangnhap, Nguoidung & Ngdung_dangnhap);
void Switch_docgia(std::vector<thongtin_nguoidung>& Dangki_taikhoan,std::vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap);
void Switch_thuthu(std::vector<thongtin_nguoidung>& Dangki_taikhoan,std::vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap);
void Switch_quanli(std::vector<thongtin_nguoidung>& Dangki_taikhoan,std::vector<Nguoidung>& Dangnhap,Nguoidung & Ngdung_dangnhap);
void Switch_Chucnang(std::vector<thongtin_nguoidung>& Dangki_taikhoan,std::vector<Nguoidung>& Dangnhap,Nguoidung &Ngdung_dangnhap);

#endif