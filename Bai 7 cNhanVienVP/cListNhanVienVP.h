#pragma once
#include "cNhanVienVP.h"
#include <vector>
class cListNhanVienVP : public cNhanVienVP
{
private:
	vector<cNhanVienVP> nv;
	int soLuongNV;
public: 
	cListNhanVienVP() {
		soLuongNV = 0;
	}
	void input();
	void output();
	void nvCoLuongCaoNhat();
	void tinhTongLuong();
	void nvCoTuoiCaoNhat();
	void sapXepTangDanTheoLuong();
};

