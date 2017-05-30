#ifndef DANGKI
#define DANGKI

#include <thuvien_chuan.h>
bool Dangki(std::vector<Nguoidung>& Dangnhap);

bool thongtin_dangki(
  std::vector<thongtin_nguoidung>& Dangki_taikhoan,
  Nguoidung& Ngdung_dangnhap,
  std::vector<Nguoidung>& Dangnhap) ;

bool Chucnang_dangki(std::vector<thongtin_nguoidung>& Dangki_taikhoan, Nguoidung& Ngdung_dangnhap,std::vector<Nguoidung>& Dangnhap);
#endif