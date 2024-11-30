#pragma once
#include<string>
using namespace std;
class SinhVien
{
protected:
	int mssv,tongTC;
	double diemTB;
	string hoten,diachi;
public:
	SinhVien();
	virtual ~SinhVien() {};
	virtual bool XetTN() const = 0;
	virtual void Nhap();
	virtual void Xuat();
	double LayTB();
};

