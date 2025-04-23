#include "cDaThuc.h"
#include <iostream>
using namespace std;

int main() {
	cDaThuc a, b;
	a.nhap();
	cout << "Da thuc a: ";
	a.xuat();
	float x;
	cout << "Nhap x de tinh gia tri da thuc: ";
	cin >> x;
	a.tinhGiaTri(x);
	b.nhap();
	cout << "Da thuc b: ";
	b.xuat();
	cDaThuc c = a+b;
	cout << "Tong 2 da thuc: ";
	c.xuat();
	cDaThuc d = a-b;
	cout << "Hieu 2 da thuc: ";
	d.xuat();
	return 0;
}