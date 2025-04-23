#pragma once
#include "cDiem.h"
#include <string>

using namespace std;
class cTamGiac : public cDiem
{
private:
	cDiem A, B, C;
public:
	cTamGiac() :A(0, 0), B(0, 0), C(0, 0) {};
	cTamGiac(cDiem a, cDiem b, cDiem c) {
		A = a;
		B = b;
		C = c;
	}
	~cTamGiac() {
		return;
	};
	void input();
	void output();
	string PhanLoai();
	double TinhChuVi();
	double TinhDienTich();
	void TinhTien(double x, double y);
	void PhongTo(double scale);
	void ThuNho(double scale);
	void Quay(int alpha, float x0, float y0, int chieu);
};

