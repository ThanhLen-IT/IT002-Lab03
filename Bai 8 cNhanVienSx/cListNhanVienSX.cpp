#include "cListNhanVienSX.h"
#include <iomanip>

void cListNhanVienSX::input() {
	cout << "Nhap so luong nhan vien: "; cin >> soLuongNV;
	for (int i = 0; i < soLuongNV; i++) {
		cout << "Nhan vien " << i + 1 << ": " << endl;
		cNhanVienSX tmp;
		tmp.input();
		ds.push_back(tmp);
	}
}
void cListNhanVienSX::output() {
	cout << "\n" << string(90, '-') << endl;
	cout.width(10); cout << left << "MaNV";
	cout.width(25); cout << left << "Ho Ten";
	cout.width(15); cout << left << "Ngay Sinh";
	cout.width(20); cout << left << "So Luong San Pham";
	cout.width(10); cout << left << "Don Gia";
	cout.width(15); cout << left << "Luong"<<endl;
	cout << string(90, '-') << endl;

	for (int i = 0; i < soLuongNV; i++) {
		ds[i].output();
	}

	cout << string(90, '-') << endl;
}
void cListNhanVienSX::nvCoLuongThapNhat() {
	cNhanVienSX minLuong = ds[0];
	for (int i = 1; i < soLuongNV; i++) {
		if (ds[i].getLuong() < minLuong.getLuong()) {
			minLuong = ds[i];
		}
	}
	cout << "Nhan vien co luong thap nhat: "; 
	cout << minLuong.getMaNV() << "-" << minLuong.getHoTen() << endl;
}
void cListNhanVienSX::tinhTongLuong() {
	int sum = 0;
	for (cNhanVienSX nv : ds) {
		sum += nv.getLuong();
	}
	cout << "Tong luong cong ty phai tra cho nhan vien: ";
	cout << sum << endl; 
}
void cListNhanVienSX::nvCoTuoiCaoNhat() {
	cNhanVienSX maxTuoi = ds[0];
	for (int i = 1; i < soLuongNV; i++) {
		if (ds[i].getNgaySinh() < maxTuoi.getNgaySinh()) {
			maxTuoi = ds[i];
		}
	}
	cout << "Nhan vien co tuoi lon nhat: ";
	cout << maxTuoi.getMaNV() << "-" << maxTuoi.getHoTen() << endl;
}
void cListNhanVienSX::sapXepDanhSachTangTheoLuong() {
	for (int i = 0; i < soLuongNV - 1; i++) {
		for (int j = i+1; j < soLuongNV; j++) {
			if (ds[j].getLuong() < ds[i].getLuong()) {
				ds[i].swap(ds[j]);
			}
		}
	}
	cout << "Danh sach sau khi sap xep: ";
	output();
}