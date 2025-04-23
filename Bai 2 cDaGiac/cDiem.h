#pragma once
#include <iostream>

class cDiem
{
private:
	float fx;
	float fy;
public:
	cDiem() {
		this->fx = 0;
		this->fy = 0;
	}
	cDiem(float x, float y) {
		this->fx = x;
		this->fy = y;
	}
	float getX();
	float getY();
	void setDiem(float x, float y);
	void input();
	void output();
	void tinhTien(float x, float y);
	void quay(int alpha, float x0, float y0, int chieu);
	void phongTo(float scale);
	void thuNho(float scale);
	float tinhKhoangCach(cDiem a);
};

