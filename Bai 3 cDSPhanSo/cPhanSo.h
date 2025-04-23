#pragma once
class cPhanSo
{
private:
	int iTu;
	int iMau;
public:
	cPhanSo() {
		iTu = 0;
		iMau = 1;
	}
	cPhanSo(int iTu, int iMau) {
		this->iTu = iTu;
		this->iMau = iMau;
	}
	cPhanSo(const cPhanSo& b) {
		this->iTu = b.iTu;
		this->iMau = b.iMau;
	}
	int getTu();
	void input();
	void output();
	void swap(cPhanSo& b);
	cPhanSo operator+(cPhanSo b);
	bool operator>(cPhanSo b);
	bool operator<(cPhanSo b);
	cPhanSo& operator=(const cPhanSo& b);
	bool iTuLaSoNguyenTo();
	int gcd(int a, int b);
	void rutGonPhanSo();
};
