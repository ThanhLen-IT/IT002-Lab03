#include "cCandidate.h"
#include <iostream>
#include <string>
using namespace std;

void cCandidate::input() {
	cout << "Nhap ID: ";
	cin >> ID;
	cin.ignore();
	cout << "Nhap ten: ";
	getline(cin, name);
	cout << "Nhap ngay sinh: ";
	getline(cin, birthDay);
	do {
		cout << "Nhap diem toan: ";
		cin >> dMath;
		cout << "Nhap diem van: ";
		cin >> dLiterature;
		cout << "Nhap diem anh: ";
		cin >> dEnglish;
	} while (dMath < 0 || dMath > 10 || dLiterature < 0 || dLiterature > 10 || dEnglish < 0 || dEnglish > 10);
}
void cCandidate::output() {
	cout << ID << "-" << name << "-" << birthDay << "-" << dMath << "-" << dLiterature << "-" << dEnglish << endl;
}

//Truy van tong diem thi sinh
//Input: Khong co; Output: Tong diem
double cCandidate::getTotalScore() {
	return dMath + dLiterature + dEnglish;
}

//Ham gan gia tri cho doi tuong
//Input: Khong co; Output: Khong co
cCandidate& cCandidate::operator=(const cCandidate& other) {
	if (this != &other) {
		ID = other.ID;
		name = other.name;
		birthDay = other.birthDay;
		dMath = other.dMath;
		dLiterature = other.dLiterature;
		dEnglish = other.dEnglish;
	}
	return *this;
}

//Hoan doi 2 doi tuong
//Input: Khong co; Output: Khong co
//Thuat toan: Tao mot doi tuong tam, gan doi tuong hien tai cho doi tuong tam, 
// gan doi tuong khac cho doi tuong hien tai, gan doi tuong tam cho doi tuong khac
void cCandidate::swap(cCandidate& other) {
	cCandidate temp = *this;
	*this = other;
	other = temp;
}