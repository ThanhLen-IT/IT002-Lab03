#pragma once
class cDaThuc
{
private:
	int n; // bac da thuc
	float* heSo; // mang luu cac he so
public:
	// Constructor mặc định
	cDaThuc() : n(0), heSo(new float[1] {0}) {}

	// Constructor với tham số
	cDaThuc(int bac) : n(bac), heSo(new float[bac + 1] {}) {}


	cDaThuc(const cDaThuc& b) {
		n = b.n;
		heSo = new float[n + 1];
		for (int i = 0; i <= n; i++) {
			heSo[i] = b.heSo[i];
		}
	}
	void tinhGiaTri(float x);
	void nhap();
	void xuat();
	cDaThuc& operator=(const cDaThuc& b);
	cDaThuc operator+(const cDaThuc& b) ;
	cDaThuc operator-(const cDaThuc& b) ;
    ~cDaThuc() {
        if (heSo != nullptr) {
               delete[] heSo;
               heSo = nullptr; 
        }
    }
};

