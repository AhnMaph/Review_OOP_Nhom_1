#pragma once
#include "SinhVien.h"
class DaiHoc : public SinhVien
{
private:
	double diemLV;
	string tenLV;
public:
	DaiHoc();
	~DaiHoc() {};
	bool XetTN()const;
	void Nhap() override;
	void Xuat() override;
};

