#include "cTamGiac.h"
#include <cmath>

void cTamGiac::input() {
	cout << "Nhap diem A: ";
	A.input();
	cout << "Nhap diem B: ";
	B.input();
	cout << "Nhap diem C: ";
	C.input();
}
void cTamGiac::output() {
	cout << "A"; A.output();
	cout << "  B"; B.output();
	cout << "  C"; C.output();
	cout << endl;
}

//Input: Khong co; Output: Phan loai tam giac
//tam giac deu(2 canh bang nhau) , tam giac can(3 canh bang nhau),
//tam giac vuong(pytago), tam giac thuong(con lai)
string cTamGiac::PhanLoai() {
	double a = A.tinhKhoangCach(B);
	double b = B.tinhKhoangCach(C);
	double c = A.tinhKhoangCach(C);
	if (a == b && b == c) {
		return "Tam giac deu";
	}
	else if (a == b || b == c || a == c) {
		return "Tam giac can";
	}
	else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
		return "Tam giac vuong";
	}
	else {
		return "Tam giac thuong";
	}
}

//Input: Khong co; Output: Chu vi tam giac
//Thuat toan: Chu vi = do dai AB + do dai BC + do dai AC
double cTamGiac::TinhChuVi() {
	return A.tinhKhoangCach(B) + B.tinhKhoangCach(C) + A.tinhKhoangCach(C);
}

//Input: Khong co; Output: Dien tich tam giac
//Thuat toan: Dien tich = can bac hai cua (p * (p - a) * (p - b) * (p - c))
double cTamGiac::TinhDienTich() {
	double p = TinhChuVi() / 2;
	double a = A.tinhKhoangCach(B);
	double b = B.tinhKhoangCach(C);
	double c = A.tinhKhoangCach(C);
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

//Input: Khong co; Output: Tam giac da tinh tien
//Thuat toan: Tinh tien tung diem A, B, C
void cTamGiac::TinhTien(double x, double y) {
	A.tinhTien(x,y);
	B.tinhTien(x,y);
	C.tinhTien(x, y);
	cout << "Tam giac sau khi tinh tien: ";
	output();
}

//Input: he so phong to; Output: Tam giac da phong to
//Thuat toan: Phong to tung diem A, B, C
void cTamGiac::PhongTo(double scale) {
	A.phongTo(scale);
	B.phongTo(scale);
	C.phongTo(scale);
	cout << "Tam giac sau khi phong to: ";
	output();
}

//Input: he so thu nho; Output: Tam giac da thu nho
//Thuat toan: Thu nho tung diem A, B, C
void cTamGiac::ThuNho(double scale) {
	A.thuNho(scale);
	B.thuNho(scale);
	C.thuNho(scale);
	cout << "Tam giac sau khi thu nho: ";
	output();
}

//Input: 3 so nguyen alpha, x0, y0, chieu(1: chieu am; 2: chieu duong ); Output: Tam giac da quay
//Thuat toan: Quay tung diem A, B, C
void cTamGiac::Quay(int alpha, float x0, float y0, int chieu) {
	A.quay(alpha, x0, y0, chieu);
	B.quay(alpha, x0, y0, chieu);
	C.quay(alpha, x0, y0, chieu);
	output();
}
