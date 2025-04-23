#include "cDaGiac.h"

int main()
{

	cDaGiac a;
	a.input();
	a.output();
	cout << "Chu vi: " << a.tinhChuVi() << endl;
	cout << "Dien tich: " << a.tinhDienTich() << endl;
	float x, y;
	cout << "Nhap vector tinh tien: "; cin >> x >> y;
	a.tinhTien(x, y);
	float scale;
	cout << "Nhap ti le phong to/ thu nho: "; cin >> scale;
	a.phongTo(scale);
	a.thuNho(scale);
	int alpha, chieu;
	float x0, y0;
	cout << "Nhap lan luot goc quay, tam x0, tam y0, chieu (1/2=am/duong): ";
	cin >> alpha >> x0 >> y0 >> chieu;
	a.quay(alpha, x0, y0, chieu);
	return 0;
}