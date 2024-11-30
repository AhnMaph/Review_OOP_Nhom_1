#include "CaoDang.h"
#include <iostream>
using namespace std;
CaoDang::CaoDang(): diemTN(0){}
void CaoDang::Xuat()
{
	SinhVien::Xuat();
	cout << "- Diem tot nghiep: ";
	cout << diemTN<<"\n";
}
void CaoDang::Nhap() {
	SinhVien::Nhap();
	cout << "Nhap diem tot nghiep: ";
	cin >> diemTN;
}
bool CaoDang::XetTN() const
{
	if (tongTC >= 120 && SinhVien::diemTB >= 5 && diemTN >= 5) return true;
	return false;
}