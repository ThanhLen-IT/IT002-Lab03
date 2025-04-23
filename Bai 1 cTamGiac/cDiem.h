#pragma once
#include <iostream>

class cDiem
{
private:
	double dx;
	double dy;
public:
	cDiem() {
		this->dx = 0;
		this->dy = 0;
	}
	cDiem(float x, float y) {
		this->dx = x;
		this->dy = y;
	}
	float getX();
	float getY();
	void setDiem(double x, double y);
	void input();
	void output();
	void tinhTien(double x, double y);
	void quay(int alpha, double x, double y, int chieu);
	void phongTo(float);
	void thuNho(float);
	double tinhKhoangCach(cDiem a);
};

