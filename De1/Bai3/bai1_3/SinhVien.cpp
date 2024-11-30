#include "SinhVien.h"
#include<iostream>
using namespace std;
SinhVien::SinhVien():mssv(0), tongTC(0), diemTB(0), hoten(""), diachi(""){}
void SinhVien::Nhap()
{
	cin.ignore();
	cout << "Nhap ho va ten sinh vien: ";
	getline(cin,hoten);
	cout << "Nhap dia chi sinh vien: ";
	getline(cin, diachi);
	cout << "Nhap mssv: ";
	cin >> mssv;
	cout << "Nhap tong so tinh chi cua sinh vien: ";
	cin >> tongTC;
	cout << "Nhap diem trung binh cua sinh vien: ";
	cin>> diemTB;
}
void SinhVien::Xuat()
{
	cout << "- Ho va ten sinh vien: ";
	cout<< hoten<<"\n";
	cout << "- Dia chi sinh vien: ";
	cout<<diachi << "\n";
	cout << "- Mssv: ";
	cout<< mssv << "\n";
	cout << "- Tong so tinh chi cua sinh vien: ";
	cout<< tongTC << "\n";
	cout << "- Diem trung binh cua sinh vien: ";
	cout<< diemTB << "\n";
}
double SinhVien::LayTB() { return diemTB;}