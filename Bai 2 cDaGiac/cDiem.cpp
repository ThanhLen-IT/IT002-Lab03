#include "cDiem.h"
#include <cmath>
using namespace std;

//Định nghĩa số pi
#ifndef PI
#define PI 3.14159265358979323846
#endif

float cDiem::getX() {
	return fx;
}
float cDiem::getY() {
	return fy;
}
void cDiem::setDiem(float x, float y) {
	this->fx = x;
	this->fy = y;
}

void cDiem::input() {
	cin >> fx >> fy;
}

void cDiem::output() {
	cout << " (" << fx << "," << fy << ") ";
}

// Tinh tien diem
// Input: 2 so thuc x, y; Output: diem sau khi tinh tien
void cDiem::tinhTien(float x, float y) {
	fx += x;
	fy += y;
}

// Quay diem quanh diem (x0, y0)
// Input: 3 so nguyen alpha, x0, y0, chieu(1: chieu am; 2: chieu duong ); Output: diem sau khi quay
void cDiem::quay(int alpha, float x0, float y0, int chieu) {
	float rad = float(alpha) * PI / 180;
	float dx = fx - x0;
	float dy = fy - y0;

	float fx_new, fy_new;

	if (chieu == 1) { // xoay cùng chiều kim đồng hồ(chiều âm)
		fx_new = x0 + dx * cos(rad) + dy * sin(rad);
		fy_new = y0 - dx * sin(rad) + dy * cos(rad);
	}
	else { // ngược chiều
		fx_new = x0 + dx * cos(rad) - dy * sin(rad);
		fy_new = y0 + dx * sin(rad) + dy * cos(rad);
	}

	fx = fx_new;
	fy = fy_new;
}

// Phóng to điểm
// Input: 1 so thuc scale; Output: diem sau khi phong to
void cDiem::phongTo(float scale) {
	fx *= scale;
	fy *= scale;
}

// Thu nhỏ điểm
// Input: 1 so thuc scale; Output: diem sau khi thu nho
void cDiem::thuNho(float scale) {
	fx /= scale;
	fy /= scale;
}

// Tinh khoang cach giua 2 diem
// Input: 1 diem a; Output: khoang cach giua 2 diem
float cDiem::tinhKhoangCach(cDiem a) {
	return sqrt(pow(fx - a.fx,2) + pow(fy - a.fy,2));
}
