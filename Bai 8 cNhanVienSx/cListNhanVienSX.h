#pragma once
#include "cNhanVienSX.h"
#include <vector>
class cListNhanVienSX : public cNhanVienSX
{
private:
	vector<cNhanVienSX> ds;
	int soLuongNV;
public:
	cListNhanVienSX() {
		soLuongNV = 0;
	}
	void input();
	void output();
	void nvCoLuongThapNhat();
	void tinhTongLuong();
	void nvCoTuoiCaoNhat();
	void sapXepDanhSachTangTheoLuong();
};

