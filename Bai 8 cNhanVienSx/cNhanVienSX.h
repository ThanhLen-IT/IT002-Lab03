#pragma once
#include <string>
#include <iostream>

using namespace std;
class cNhanVienSX
{
private:
	string maNV;
	string hoTen;
	string ngaySinh;
	int soSanPham;
	double donGia;
public:
	cNhanVienSX() {
		this->maNV = "";
		this->hoTen = "";
		this->ngaySinh = "0/0/0";
		this->soSanPham=0;
		this->donGia = 0;
	}
	cNhanVienSX(string id, string name, string bd, int sp, double gia) {
		this->hoTen = name;
		this->maNV = id;
		this->ngaySinh = bd;
		this->soSanPham = sp;
		this->donGia = gia;
	}
	string getMaNV();
	string getHoTen();
	int getNgaySinh();
	double getLuong();
	void setMaNV(string id);
	void setHoTen(string name);
	void setNgaySinh(string bd);
	void setSoSanPham(int sp);
	void setDonGia(double gia);
	void input();
	void output();
	void swap(cNhanVienSX& other);
	cNhanVienSX& operator=(const cNhanVienSX other);

};

