#include "cDaThuc.h"
#include <iostream>
using namespace std;

void cDaThuc::tinhGiaTri(float x) {
	float kq = 0;
	for (int i = 0; i <= n; i++) {
		kq += (float)heSo[i] * pow(x, i);
	}
	cout << "Gia tri da thuc tai x = " << x << " la: " << kq << endl;
}
void cDaThuc::nhap() {
	cout << "Nhap bac da thuc(chi so mang = he so cua x^chiso) : ";
	cin >> n;
	if (heSo != nullptr) {
		delete[] heSo; // Giải phóng bộ nhớ trước khi cấp phát mới
	}
	heSo = new float[n + 1];
	for (int i = n; i >= 0; i--) {
		cout << "Nhap he so a[" << i << "]: ";
		cin >> heSo[i];
	}
}
void cDaThuc::xuat() {
	bool first = true;
	for (int i = n; i >= 0; i--) {
		if (heSo[i] != 0) {
			if (!first && heSo[i] > 0) cout << " + ";
			if (heSo[i] < 0) cout << " - ";
			else if (!first && heSo[i] > 0) cout << " ";

			float absHeSo = abs(heSo[i]);
			if (i == 0 || absHeSo != 1) cout << absHeSo;
			if (i > 0) cout << "x";
			if (i > 1) cout << "^" << i;

			first = false;
		}
	}
	if (first) cout << "0"; // Nếu tất cả hệ số = 0
	cout << endl;
}

cDaThuc& cDaThuc::operator=(const cDaThuc& b) {
	if (this != &b) {
		delete[] heSo;
		n = b.n;
		heSo = new float[n + 1];
		for (int i = 0; i <= n; i++)
			heSo[i] = b.heSo[i];
	}
	return *this;
}

cDaThuc cDaThuc::operator+(const cDaThuc& b) {
	int maxBac = max(n, b.n);
	cDaThuc kq(maxBac);

	for (int i = 0; i <= maxBac; i++) {
		float heSo1 = (i <= n) ? heSo[i] : 0;
		float heSo2 = (i <= b.n) ? b.heSo[i] : 0;
		kq.heSo[i] = heSo1 + heSo2;
	}
	return kq;
}

cDaThuc cDaThuc::operator-(const cDaThuc& b){
	int maxBac = max(n, b.n);
	cDaThuc kq(maxBac);
	for (int i = 0; i <= maxBac; i++) {
		float heSo1 = (i <= n) ? heSo[i] : 0;
		float heSo2 = (i <= b.n) ? b.heSo[i] : 0;
		kq.heSo[i] = heSo1 - heSo2;
	}
	return kq;
}
