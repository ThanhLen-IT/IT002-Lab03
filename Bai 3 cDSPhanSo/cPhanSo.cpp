#include "cPhanSo.h"
#include <iostream>
#include <cstdlib>
using namespace std;


int cPhanSo::getTu() {
	return iTu;
}
void cPhanSo::input() {
	do {
		cin >> iTu >> iMau;
	} while (iMau == 0);
}
void cPhanSo::output() {
	cout << iTu << "/" << iMau<<" ";
}

// Hoan doi hai phan so
// Input: 2 phan so a, b; Output: hoan doi gia tri cua a va b
void cPhanSo::swap(cPhanSo& b) {
	cPhanSo temp = *this;
	*this = b;
	b = temp;
}

// Toan tu +
// Input: 2 phan so a, b; Output: phan so a + b
cPhanSo cPhanSo::operator+(cPhanSo b) {
	return cPhanSo(iTu * b.iMau + b.iTu * iMau, iMau * b.iMau);
}
// Toan tu >
// Input: 2 phan so a, b; Output: true neu a > b, false neu a <= b
bool cPhanSo::operator>(cPhanSo b) {
	return (iTu * b.iMau > b.iTu * iMau);
}

// Toan tu <
// Input: 2 phan so a, b; Output: true neu a < b, false neu a >= b
bool cPhanSo::operator<(cPhanSo b) {
	return (iTu * b.iMau < b.iTu * iMau);
}

// Toan tu =
// Input: 2 phan so a, b; Output: gan phan so b cho phan so a
cPhanSo& cPhanSo::operator=(const cPhanSo& b) { 
	if (this != &b) { 
		this->iTu = b.iTu;
		this->iMau = b.iMau;
	}
	return *this;
}

// Kiem tra tu so co phai la so nguyen to hay khong
// Input: phan so a; Output: true neu tu so a la so nguyen to, false neu tu so a khong phai la so nguyen to
bool cPhanSo::iTuLaSoNguyenTo() {
	 if (iTu < 2) return false;
	 if (iTu == 2) return true;
	 for (int i = 2; i <= sqrt(iTu); i++) {
		 if (iTu % i == 0) return false;
	 }
	 return true;
}

int cPhanSo::gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
void cPhanSo::rutGonPhanSo() {
	int UCLN = gcd(abs(iTu), abs(iMau));
	iTu /= UCLN;
	iMau /= UCLN;
	if (iMau < 0) {
		iTu = -iTu;
		iMau = -iMau;
	}
}