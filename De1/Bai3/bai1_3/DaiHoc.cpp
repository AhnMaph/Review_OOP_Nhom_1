#include "DaiHoc.h"
#include <iostream>
using namespace std;
DaiHoc::DaiHoc() : diemLV(0), tenLV("") {}
void DaiHoc::Xuat()
{
	SinhVien::Xuat();
	cout << "- Ten luan van: " << tenLV << "\n";
	cout << "- Diem luan van: "<<diemLV << "\n";
}
void DaiHoc::Nhap() {
	SinhVien::Nhap();
	cin.ignore();
	cout << "Nhap ten luan van: ";
	getline(cin,tenLV);
	cout << "Nhap diem luan van: ";
	cin >> diemLV;
}
bool DaiHoc::XetTN() const
{
	if (tongTC >= 170 && diemTB >= 5 && diemLV >= 5) return true;
	return false;
}