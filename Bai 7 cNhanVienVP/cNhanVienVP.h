#pragma once
#include <string>
#include <iostream>

using namespace std;
class cNhanVienVP
{
private:
	string maNV;
	string hoTen;
	string ngaySinh;
	int luong;
public:
	cNhanVienVP() {
		this->maNV = "";
		this->hoTen = "";
		this->ngaySinh = "0/0/0";
		this->luong = 0;
	}
	cNhanVienVP(string id, string name, string bd, int l) {
		this->hoTen = name;
		this->maNV = id;
		this->ngaySinh = bd;
		this->luong = l;
	}
	string getMaNV();
	string getHoTen();
	int getNgaySinh();
	int getLuong();
	void setMaNV(string id);
	void setHoTen(string name);
	void setNgaySinh(string bd);
	void setLuong(int l);
	void input();
	void output();
	void swap(cNhanVienVP& other);
	cNhanVienVP& operator=(const cNhanVienVP& other);

};