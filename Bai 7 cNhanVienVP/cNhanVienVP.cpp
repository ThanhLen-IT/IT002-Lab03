#include "cNhanVienVP.h"
#include <iomanip>
#include <string>
#include <sstream>
string cNhanVienVP::getMaNV() {
	return maNV;
}
string cNhanVienVP::getHoTen() {
	return hoTen;
}
int cNhanVienVP::getNgaySinh() {
	string word, birthday = "";
	stringstream ss(ngaySinh);
	while ( getline (ss, word, '/') ) {
		birthday = word + birthday;
	}
	int kq = stoi(birthday);
	return kq;
}
int cNhanVienVP::getLuong() {
	return luong;
}
void cNhanVienVP::setMaNV(string id) {
	this->maNV = id;
}
void cNhanVienVP::setHoTen(string name) {
	this->hoTen = name;
}
void cNhanVienVP::setNgaySinh(string bd) {
	this->ngaySinh = bd;
}
void cNhanVienVP::setLuong(int l) {
	this->luong = l;
}
void cNhanVienVP::input() {
	cout << "Nhap ma nhan vien: "; cin >> maNV;
	cin.ignore();
	cout << "Nhap ho ten: "; getline(cin, hoTen);
	cout << "Nhap ngay sinh (dd/mm/yyyy): "; cin >> ngaySinh;
	do {
		cout << "Nhap luong: ";
		cin >> luong;
		if (luong < 0) {
			cout << "Loi: Luong khong duoc am. Nhap lai!\n";
		}
	} while (luong < 0);
}
void cNhanVienVP::output() {
	cout.width(10); cout << left << maNV;
	cout.width(25); cout << left << hoTen;
	cout.width(15); cout << left << ngaySinh;
	cout.width(12); cout << left << luong << endl;
}

void cNhanVienVP::swap(cNhanVienVP& other) {
	cNhanVienVP tmp;
	tmp = other;
	other = *this;
	*this = tmp;
}
cNhanVienVP& cNhanVienVP::operator=(const cNhanVienVP& other) {
	setMaNV(other.maNV);
	setHoTen(other.hoTen);
	setNgaySinh(other.ngaySinh);
	setLuong(other.luong);
	return *this;
}