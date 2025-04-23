#include "cDSPhanSo.h"
#include <iostream>
#include <cmath>
using namespace std;
void cDSPhanSo::input() {
	cout << "Nhap so luong phan so: ";
	cin >> n;
	ds = new cPhanSo[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan so thu " << i + 1 << "(a b): ";
		ds[i].input();
	}
}
void cDSPhanSo::output() {
	for (int i = 0; i < n; i++) {
		ds[i].output();
	}
	cout << endl; 
}

// Sap xep mang tang dan
// Input: khong co; Output: mang sau khi sap xep tang dan
// Thuat toan sap xep noi bot
void cDSPhanSo::sortAscending() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ds[i] > ds[j]) {
				ds[i].swap(ds[j]);
			}
		}
	}
	cout << "Danh sach phan so tang dan: ";
	output();
}

// Sap xep mang giam dan
// Input: khong co; Output: mang sau khi sap xep giam dan
// Thuat toan sap xep noi bot
void cDSPhanSo::sortDescending() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ds[i] < ds[j]) {
				ds[i].swap(ds[j]);
			}
		}
	}
	cout << "Danh sach phan so giam dan: ";
	output();
}

// Tim phan tu lon nhat trong mang
// Input: khong co; Output: phan tu lon nhat
cPhanSo cDSPhanSo::max() {
	cPhanSo max = ds[0];
	for (int i = 1; i < n; i++) {
		if (ds[i] > max) {
			max = ds[i];
		}
	}
	return max;
}
// Tim phan tu nho nhat trong mang
// Input: khong co; Output: phan tu nho nhat
cPhanSo cDSPhanSo::min() {
	cPhanSo min = ds[0];
	for (int i = 1; i < n; i++) {
		if (ds[i] < min) {
			min = ds[i];
		}
	}
	return min;
}

// Tinh tong cac phan tu trong mang
// Input: khong co; Output: tong cac phan tu trong mang
cPhanSo cDSPhanSo::sum() {
	cPhanSo sum;
	for (int i = 0; i < n; i++) {
		sum = sum + ds[i];
	}
	sum.rutGonPhanSo();
	return sum;
}

// Tim phan tu co iTu la so nguyen to lon nhat trong mang
// Input: khong co; Output: phan tu co iTu la so nguyen to lon nhat
void cDSPhanSo::soNguyenToLonNhat() {
	cPhanSo max;
	for (int i = 0; i < n; i++) {
		if (ds[i].iTuLaSoNguyenTo()) {
			max = ds[i];
			break;
		}
	}

	for (int i = 1; i < n; i++) {
		if (ds[i].iTuLaSoNguyenTo()&& ds[i].getTu()> max.getTu()) {
			max = ds[i];
		}
	}
	if (max.iTuLaSoNguyenTo()==true) {
		max.output();
		cout << endl;
	}
	else {
		cout << "Khong co" << endl;;
	}
}
