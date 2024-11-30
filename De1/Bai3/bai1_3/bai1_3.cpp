#include <iostream>
#include "DaiHoc.h"
#include "CaoDang.h"
#include "SinhVien.h"
using namespace std;
int main()
{
    cout << "Nhap so luong sinh vien: ";
    int sl_sv;
    cin >> sl_sv;
    SinhVien** ds_SV;
    ds_SV = new SinhVien * [sl_sv];
    for (int i = 0;i < sl_sv;i++)
    {
        cout << "Nhap 0 de nhap thong tin sinh vien cao dang.\n";
        cout << "Nhap 1 de nhap thong tin sinh vien dai hoc.\n";
        int chon = 0;
        cin >> chon;
        switch (chon)
        {
        case 0:
            ds_SV[i] = new CaoDang;
            ds_SV[i]->Nhap();
            break;
        case 1:
            ds_SV[i] = new DaiHoc;
            ds_SV[i]->Nhap();
            break;
        }
     
    }
    int SV_du_dk = 0;
    for (int i = 0;i < sl_sv;i++)
    {
        if (ds_SV[i]->XetTN()) {
            SV_du_dk++;
        }
    }
    cout << "-> Co "<<SV_du_dk<< " sinh vien du dieu kien tot nghiep!\n";

    int max_tb = 0,sv_max = -1;
    for (int i = 0;i < sl_sv;i++)
    {
        if (dynamic_cast<DaiHoc*>(ds_SV[i])) {
            if (max_tb < ds_SV[i]->LayTB()) {
                max_tb = ds_SV[i]->LayTB();
                sv_max = i;
            }
        }
    }
    if (sv_max != -1) {
        cout << "-> Thong tin sinh vien dai hoc co diem trung binh cao nhat la:\n";
        ds_SV[sv_max]->Xuat();
    }
    return 0;
}
