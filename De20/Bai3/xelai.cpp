#include "xelai.h"
#include "xe.h"

// Tra ve thue tieu thu dac biet cua xe lai xang dien tinh theo cong thuc
float XeLaiXangDien::ThueTieuThuDB(){
  return 0.55 * (GiaXeNhapKhau + ThueNhapKhau);
}
