#pragma once
#include "cPhanSo.h"
class cDSPhanSo :
    public cPhanSo
{
private:
	cPhanSo* ds;
	int n;
public:
	cDSPhanSo() {
		ds = nullptr;
		n = 0;
	}
	cDSPhanSo(int n) {
		this->n = n;
		ds = new cPhanSo[n];
	}
	cDSPhanSo(const cDSPhanSo& b) {
		this->n = b.n;
		this->ds = new cPhanSo[n];
		for (int i = 0; i < n; i++) {
			this->ds[i] = b.ds[i];
		}
	}
	void input();
	void output();
	void sortAscending();
	void sortDescending();
	cPhanSo max();
	cPhanSo min();
	cPhanSo sum();
	void soNguyenToLonNhat();
	~cDSPhanSo() {
		delete[] ds;
	}
};

