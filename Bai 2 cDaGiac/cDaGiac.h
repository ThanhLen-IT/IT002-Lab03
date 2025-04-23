#pragma once
#include "cDiem.h"
#include <vector> 
using namespace std; 

class cDaGiac : public cDiem
{
private:
    int soDinh;
    vector<cDiem> dinh;
public:
    cDaGiac() : soDinh(0) { // Initialize soDinh to 0
    }

    cDaGiac(int soDinh, const vector<cDiem>& dinh) : soDinh(soDinh), dinh(dinh) { // Initialize soDinh using initializer list
    }

    void input();
    void output();
    float tinhChuVi();
    float tinhDienTich();
    void tinhTien(float x, float y);
    void quay(int alpha, float x0, float y0, int chieu);
    void phongTo(float scale);
    void thuNho(float scale);
};

