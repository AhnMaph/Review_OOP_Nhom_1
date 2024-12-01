#include <iostream>

using namespace std;
#ifndef XE_H
#define XE_H 

class Xe{
protected:
  string SoKhung;
  string SoMay;
  float DungTichXiLanh;
  string MauSac;
  string HangSX;
  int SoChoNgoi;
  int NamSX;
  string XuatXu;
  float GiaXeNhapKhau;
  float ThueNhapKhau;
public:
  float gia_xe_nhap_khau();
  void Nhap();
  void Xuat();
  virtual float ThueTieuThuDB() = 0;
  float BienLoiNhuan();
  float GiaXe();
  float ThueVAT();
  float GiaBan();
  float PhiDangKi();
  float GiaChung();
};

#endif // !XE_H

