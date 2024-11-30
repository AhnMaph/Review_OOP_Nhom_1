#pragma once
#include "SinhVien.h"
class CaoDang : public SinhVien
{
private:
	double diemTN;
public:
	CaoDang();
	~CaoDang() {};
	bool XetTN() const;
	void Nhap() override;
	void Xuat() override;
};

