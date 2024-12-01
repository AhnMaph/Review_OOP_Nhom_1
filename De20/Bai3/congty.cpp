#include "congty.h"

// Nhap vao thong tin cua n chiec xe duoc nhap khau
void CongTy::NhapKhau(){
  cin >> so_luong_xe_;
  for(int i=0;i<so_luong_xe_;i++){
    cout << "Nhap loai xe Xang/Dien/LaiXangDien [X/D/L]: ";
    char c;
    cin >> c;
    switch (c) {
      case 'X':
      case 'x':
      nhap_khau_[i] = new XeXang();
      nhap_khau_[i]->Nhap();
      break;
      case 'D':
      case 'd':
      nhap_khau_[i] = new XeDien();
      nhap_khau_[i]->Nhap();
      break;
      case 'L':
      case 'l':
      nhap_khau_[i] = new XeLaiXangDien();
      nhap_khau_[i]->Nhap();
      break;
      default:
      cout << "Loai xe khong ton tai\n";
    }
  }
}

// Tinh tong so tien lo xe vua nhap khau do 
// Dau ra: Tra ve tong so tien da chi de nhap khau lo xe
float CongTy::TongSoTienLoXe(){
  float tong_so_tien = 0;
  for(int i=0;i<so_luong_xe_;i++){
    tong_so_tien += nhap_khau_[i]->gia_xe_nhap_khau();
  }
  return tong_so_tien;
}

// Tim chiec xe co gia ban cao nhat (khong tinh gia dang ky xe)
// Dau ra: Mot con tro doi tuong xe co gia ban cao nhat.
Xe* CongTy::GiaBanCaoNhat(){
  float gia_ban_cao_nhat = -1;
  int chi_so = 0;
  for(int i=0;i<so_luong_xe_;i++){
    if(nhap_khau_[i]->GiaBan() > gia_ban_cao_nhat){
      chi_so = i;
      gia_ban_cao_nhat = nhap_khau_[i]->GiaBan();
    }
  }
  return nhap_khau_[chi_so];
}
