#include "xe.h"
#include "xedien.h"

// Dau ra: Tra ve gia tri thue tieu thu dac biet cua xe dien duoc tinh theo cong thuc
float XeDien::ThueTieuThuDB(){
  return 0.50 * (GiaXeNhapKhau + ThueNhapKhau);
}
