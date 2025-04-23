#include "cDSPhanSo.h"
#include <iostream>
using namespace std;

int main()
{
	cDSPhanSo ds;
	ds.input();
	cout << "Danh sach phan so: "; ds.output();
	cout << "Phan so lon nhat: ";
	ds.max().output(); cout << endl;
	cout << "Phan so nho nhat: ";
	ds.min().output();cout << endl;
	cout << "Tong cac phan so: ";
	ds.sum().output(); cout << endl;
	cout << "Phan so co tu la so nguyen to lon nhat: ";
	ds.soNguyenToLonNhat();
	ds.sortAscending(); 
	ds.sortDescending(); 
	return 0;
}