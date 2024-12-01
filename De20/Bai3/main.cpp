#include "xe.h"
#include "xedien.h"
#include "xexang.h"
#include "xelai.h"
#include "congty.h"
#include <iomanip>


int main (int argc, char *argv[]) {
  CongTy ABC;
  ABC.NhapKhau();

  printf("\nTong so tien cho lo xe vua nhap: %.2lf\n", ABC.TongSoTienLoXe());
  cout << "---------Thong tin chiec xe co gia ban cao nhat----------\n";
  ABC.GiaBanCaoNhat()->Xuat();
  return 0;
}
