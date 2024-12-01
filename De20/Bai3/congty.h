#include "xe.h"
#include "xelai.h"
#include "xedien.h"
#include "xexang.h"

#ifndef CONGTY_H 
#define CONGTY_H 
class CongTy{
 private: 
  int so_luong_xe_;
  Xe *nhap_khau_[105];
 public:
  void NhapKhau();
  float TongSoTienLoXe();
  Xe* GiaBanCaoNhat();
};
#endif // !CONGTY_H

