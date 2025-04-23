#include "cTamGiac.h"

int main()
{
	cTamGiac tg;
	tg.input();
	tg.output();
	cout << "Loai tam giac: " << tg.PhanLoai()<<endl;
	cout << "Chu vi: " << tg.TinhChuVi()<<endl;
	cout << "Dien tich: " << tg.TinhDienTich()<<endl;
	double x, y;
	cout << "Nhap vector tinh tien: "; cin >> x >> y;
	tg.TinhTien(x, y);
	double scale;
	cout << "Nhap ti le phong to/ thu nho: "; cin >> scale;
	tg.PhongTo(scale);
	tg.ThuNho(scale);
	int alpha,chieu;
	double x0, y0;
	cout << "Nhap lan luot goc quay, tam x0, tam y0, chieu (1/2=am/duong): ";
	cin >> alpha >> x0 >> y0 >> chieu;
	tg.Quay(alpha, x0, y0, chieu);
}