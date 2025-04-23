#include "cNhanVienSX.h"
#include <iomanip>
#include <string>
#include <sstream>
string cNhanVienSX::getMaNV() {
	return maNV;
}
string cNhanVienSX::getHoTen() {
	return hoTen;
}
int cNhanVienSX::getNgaySinh() {
	string word, birthday = "";
	stringstream ss(ngaySinh);
	while (getline(ss, word, '/')) {
		birthday = word + birthday;
	}
	int kq = stoi(birthday);
	return kq;
}
double cNhanVienSX::getLuong() {
	return soSanPham * donGia;
}
void cNhanVienSX::setMaNV(string id) {
	this->maNV = id;
}
void cNhanVienSX::setHoTen(string name) {
	this->hoTen = name;
}
void cNhanVienSX::setNgaySinh(string bd) {
	this->ngaySinh = bd;
}
void cNhanVienSX::setSoSanPham(int sp) {
	this->soSanPham = sp;
}
void cNhanVienSX::setDonGia(double gia) {
	this->donGia = gia;
}
void cNhanVienSX::input() {
	cout << "Nhap ma nhan vien: "; cin >> maNV;
	cin.ignore();
	cout << "Nhap ho ten: "; getline(cin, hoTen);
	cout << "Nhap ngay sinh (dd/mm/yyyy): "; cin >> ngaySinh;
	cout << "Nhap so san pham: "; cin >> soSanPham;
	cout << "Nhap don gia: "; cin >> donGia;
}
void cNhanVienSX::output() {
	cout.width(10); cout << left << maNV;
	cout.width(25); cout << left << hoTen;
	cout.width(15); cout << left << ngaySinh;
	cout.width(20); cout << left << soSanPham;
	cout.width(10); cout << left << donGia;
	cout.width(15); cout << left << getLuong() << endl;
}

void cNhanVienSX::swap(cNhanVienSX& other) {
	cNhanVienSX tmp;
	tmp = other;
	other = *this;
	*this = tmp;
}
cNhanVienSX& cNhanVienSX::operator=(const cNhanVienSX other) {
	setMaNV(other.maNV);
	setHoTen(other.hoTen);
	setNgaySinh(other.ngaySinh);
	setSoSanPham(other.soSanPham);
	setDonGia(other.donGia);
	return *this;
}