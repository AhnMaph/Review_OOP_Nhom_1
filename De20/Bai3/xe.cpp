#include "xe.h"
#include <cstdio>

// Getter cho thuoc tinh GiaXeNhapKhau
// Dau ra: Tra ve gia tri cua thuoc tinh GiaXeNhapKhau 
float Xe::gia_xe_nhap_khau(){return GiaXeNhapKhau;}

// Nhap vao cac thong tin cua chiec xe
void Xe::Nhap(){
  cout << "Nhap so khung: ";
  cin >> SoKhung;
  cout << "Nhap so may: ";
  cin >> SoMay;
  cout << "Nhap dung tich xi lanh: ";
  cin >> DungTichXiLanh;
  cin.ignore();
  cout << "Nhap mau sac: ";
  cin >> MauSac;
  cout << "Nhap hang san xuat: ";
  cin >> HangSX;
  cout <<  "Nhap so cho ngoi: ";
  cin >> SoChoNgoi;
  cout << "Nhap nam san xuat: ";
  cin >> NamSX;
  cin.ignore();
  cout << "Nhap xuat xu: ";
  cin >> XuatXu;
  cout << "Gia xe nhap khau: ";
  cin >> GiaXeNhapKhau;
  ThueNhapKhau = GiaXeNhapKhau*0.7;
}

// Xuat ra cac thong tin cua chiec xe
void Xe::Xuat(){
  cout << "So khung: " << SoKhung << "\n";
  cout << "So may: " << SoMay << "\n";
  cout << "Dung tich xi lanh: " << DungTichXiLanh << "\n";
  cout << "Mau sac: " << MauSac << "\n";
  cout << "Hang san xuat: " << HangSX << "\n"; 
  cout << "So cho ngoi: " << SoChoNgoi << "\n";
  cout << "Gia xe nhap khau: " << fixed << GiaXeNhapKhau << "\n";
  cout << "Thue tieu thu dac biet: " << fixed << ThueTieuThuDB() << "\n";
  cout << "Bien loi nhuan: " << fixed << BienLoiNhuan() << '\n';
  cout << "Gia xe: " << fixed << GiaXe() << "\n";
  cout << "Gia ban: " << fixed << GiaBan() << "\n";
}

// Dau ra: Tra ve bien loi nhuan cua xe duoc mo ta theo cong thuc
float Xe::BienLoiNhuan(){
  return 0.2*(GiaXeNhapKhau + ThueNhapKhau + ThueTieuThuDB());
}

// Dau ra: Tra ve Gia xe duoc mo ta theo cong thuc
float Xe::GiaXe(){
  return GiaXeNhapKhau + ThueNhapKhau + ThueTieuThuDB() + BienLoiNhuan();
}

// Dau ra: Tra ve Thue VAT đuoc mo ta theo cong thuc 
float Xe::ThueVAT(){
  return 0.1*GiaXe();
}

// Dau ra: Tra ve gia ban duoc mo ta theo cong thuc
float Xe::GiaBan(){
  return GiaXe()+ThueVAT();
}

// Dau ra: Tra ve phi dang ky xe duoc mo ta theo cong thuc
float Xe::PhiDangKi(){
  return 0.02 * GiaXe();
}
