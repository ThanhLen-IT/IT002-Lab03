#include "cDaGiac.h"
#include "cDiem.h"

void cDaGiac::input() {
	cout << "Nhap so luong dinh cua da giac: "; 
	cin >>  soDinh;

	for (int i = 0; i < soDinh; i++) {
		cout << "Nhap dinh thu " << i + 1 << " (x y):";
		cDiem tam;
		tam.input();
		dinh.push_back(cDiem(tam.getX(), tam.getY()));
	}
}
void cDaGiac::output() {
	for (int i = 0; i < soDinh; i++) {
		dinh[i].output();
	}
	cout << endl;
}

// Tinh chu vi da giac
// Input: khong co; Output: chu vi da giac
float cDaGiac::tinhChuVi() {
	float chuVi=dinh[0].tinhKhoangCach(dinh[soDinh-1]);
	for (int i = 0; i < soDinh-1; i++) {
		chuVi += dinh[i].tinhKhoangCach(dinh[i + 1]);
	}
	return chuVi;
}

// Tinh dien tich da giac
// Input: khong co; Output: dien tich da giac
float cDaGiac::tinhDienTich() {
	float dienTich = 0;
	for (int i = 0; i < soDinh; i++) {
		int j = (i + 1) % soDinh;
		dienTich += dinh[i].getX() * dinh[j].getY();
		dienTich -= dinh[j].getX() * dinh[i].getY();
	}
	return abs(dienTich)/2;
}


// Tinh tien da giac
// Input: 2 so thuc x, y; Output: da giac sau khi tinh tien
void cDaGiac::tinhTien(float x, float y) {
	for (cDiem& a : dinh)
		a.tinhTien(x, y);
	cout << "Da Giac sau khi tinh tien: ";
	output();
}

// Quay da giac
// Input: 3 so nguyen alpha, x0, y0, chieu(1: chieu am; 2: chieu duong ); Output: da giac sau khi quay
void cDaGiac::quay(int alpha, float x0, float y0, int chieu) {
	for (cDiem& a : dinh) {
		a.quay(alpha, x0, y0, chieu);
	}
	cout << "Da giac sau khi quay: ";
	output();
}

// Phong to da giac
// Input: 1 so thuc scale; Output: da giac sau khi phong to
void cDaGiac::phongTo(float scale) {
	for (cDiem& a : dinh) {
		a.phongTo(scale);
	}
	cout << "Da giac sau khi phong to: ";
	output();
}

// Thu nho da giac
// Input: 1 so thuc scale; Output: da giac sau khi thu nho
void cDaGiac::thuNho(float scale) {
	for (cDiem& a : dinh) {
		a.thuNho(scale);
	}
	cout << "Da giac sau khi thu nho: ";
	output();
}