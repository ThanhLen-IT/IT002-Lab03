#include "cListNhanVienVP.h"

void cListNhanVienVP::input() {
	cout << "Nhap so luong nhan vien: "; cin >> soLuongNV;
	for (int i = 0; i < soLuongNV; i++) {
		cout << "Nhan vien " << i + 1 << ": "<<endl;
		cNhanVienVP tmp;
		tmp.input();
		nv.push_back(tmp);
	}
}
void cListNhanVienVP::output() {
    cout << "\n" << string(65, '-') << endl;
    cout.width(10); cout << left << "MaNV";
    cout.width(25); cout << left << "Ho Ten";
    cout.width(15); cout << left << "Ngay Sinh";
    cout.width(12); cout << "Luong" << endl;
    cout << string(65, '-') << endl;

	for (int i = 0; i < soLuongNV; i++) {
		nv[i].output();
	}

    cout << string(65, '-') << endl;
}
void cListNhanVienVP::nvCoLuongCaoNhat() {
	cNhanVienVP nvMax = nv[0];
	for (cNhanVienVP ds : nv) {
		if (ds.getLuong() > nvMax.getLuong()) {
			nvMax = ds;
		}
	}
	cout << "Nhan vien co luong cao nhat la: ";
	cout << nvMax.getMaNV() << "-" << nvMax.getHoTen() << endl;
}
void cListNhanVienVP::tinhTongLuong() {
	long long sum = 0;
	for (cNhanVienVP ds : nv) {
		sum += ds.getLuong();

	}
	cout << "Tong luong cong ty phai tra cho nhan vien la: " << sum << endl;
}
void cListNhanVienVP::nvCoTuoiCaoNhat() {
	cNhanVienVP maxTuoi = nv[0];
	for (cNhanVienVP ds : nv) {
		if (ds.getNgaySinh() < maxTuoi.getNgaySinh()) {
			maxTuoi = ds;
		}
	}
	cout << "Nhan vien co tuoi cao nhat la: ";
	cout << maxTuoi.getMaNV() << "-" << maxTuoi.getHoTen() << endl;
}
void cListNhanVienVP::sapXepTangDanTheoLuong() {
	for (int i = 0; i < soLuongNV - 1; i++) {
		for (int j = i + 1; j < soLuongNV; j++) {
			if (nv[j].getLuong() < nv[i].getLuong()) {
				nv[i].swap(nv[j]);
			}
		}
	}
	cout << "Danh sach tang dan theo luong: ";
	output();
}