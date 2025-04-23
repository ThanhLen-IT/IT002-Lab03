#include "cDiem.h"
#include <cmath>
using namespace std;

//Định nghĩa số pi
#ifndef PI
#define PI 3.14159265358979323846
#endif

float cDiem::getX() {
	return dx;
}
float cDiem::getY() {
	return dy;
}
void cDiem::setDiem(double x, double y) {
	this->dx = x;
	this->dy = y;
}

void cDiem::input() {
	cin >> dx >> dy;
}

void cDiem::output() {
	cout << "(" << dx << "," << dy << ") ";
}

// Tinh tien diem
// Input: 2 so thuc x, y; Output: diem sau khi tinh tien
void cDiem::tinhTien(double x, double y) {
	dx += x;
	dy += y;
}

// Quay diem quanh diem (x0, y0)
// Input: 3 so nguyen alpha, x0, y0, chieu(1: chieu am; 2: chieu duong ); Output: diem sau khi quay
void cDiem::quay(int alpha, double x0, double y0, int chieu) {
	double rad = alpha * PI / 180;
	double x = dx - x0;
	double y = dy - y0;

	double dx_new, dy_new;

	if (chieu == 1) { // xoay cùng chiều kim đồng hồ(chiều âm)
		dx_new = x0 + x * cos(rad) + y * sin(rad);
		dy_new = y0 - x * sin(rad) + y * cos(rad);
	}
	else { // ngược chiều
		dx_new = x0 + x * cos(rad) - y * sin(rad);
		dy_new = y0 + x * sin(rad) + y * cos(rad);
	}

	dx = dx_new;
	dy = dy_new;
}

// Phóng to điểm
// Input: 1 so thuc scale; Output: diem sau khi phong to
void cDiem::phongTo(float scale) {
	dx *= scale;
	dy *= scale;
}

// Thu nhỏ điểm
// Input: 1 so thuc scale; Output: diem sau khi thu nho
void cDiem::thuNho(float scale) {
	dx /= scale;
	dy /= scale;
}

// Tinh khoang cach giua 2 diem
// Input: 1 diem a; Output: khoang cach giua 2 diem
double cDiem::tinhKhoangCach(cDiem a) {
	return sqrt(pow(dx - a.dx, 2) + pow(dy - a.dy, 2));
}
