#include "cListNhanVienSX.h"


void menu() {
	cListNhanVienSX ds;
	int check;
	do {
		do {
			cout << "--------MENU--------" << endl;
			cout << "1.Nhap danh sach nhan vien san xuat" << endl;
			cout << "2.Xuat danh sach nhan vien" << endl;
			cout << "3.Nhan vien co luong thap nhat" << endl;
			cout << "4.Tong luong cong ty phai tra cho cac nhan vien san xuat" << endl;
			cout << "5.Nhan vien co tuoi cao nhat" << endl;
			cout << "6.Sap xep danh sach nhan vien tang dan theo luong" << endl;
			cout << "7. Ket thuc" << endl;
			cout << "Moi ban chon: "; cin >> check;
		} while (check < 1 || check >7);

		switch (check)
		{
		case 1:
			ds.input();
			break;
		case 2:
			ds.output();
			break;
		case 3:
			ds.nvCoLuongThapNhat();
			break;
		case 4:
			ds.tinhTongLuong();
			break;
		case 5:
			ds.nvCoTuoiCaoNhat();
			break;
		case 6:
			ds.sapXepDanhSachTangTheoLuong();
		default:
			exit(1);
			break;
		}
	} while (check != 7);
};

int main() {
	menu();
	return 0;
}