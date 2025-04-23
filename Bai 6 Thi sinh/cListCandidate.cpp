#include "cListCandidate.h"

void cListCandidate::input() {
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	if (list != nullptr) {
		delete[] list; // Giai phong bo nho truoc khi cap phat moi
	}
	list = new cCandidate[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap thi sinh thu " << i + 1 << ": " << endl;
		list[i].input();
	}
}


void cListCandidate::output() {
	for (int i = 0; i < n; i++) {
		list[i].output();
	}
}

//In ra danh sach thi sinh co tong diem lon hon 15
//Input: Khong co; Output: Danh sach thi sinh co tong diem lon hon 15
//Thuat toan: Duyet danh sach thi sinh, neu thi sinh co tong diem lon hon 15 thi in ra
void cListCandidate::printTotalScoreLonHon15() {
	cout << "Danh sach thi sinh co tong diem lon hon 15: " << endl;
	for (int i = 0; i < n; i++) {
		if (list[i].getTotalScore() > 15) {
			list[i].output();
		}
	}
}

//In ra thi sinh co tong diem cao nhat
//Input: Khong co; Output: Thi sinh co tong diem cao nhat
//Thuat toan: Duyet danh sach thi sinh, neu thi sinh co tong diem cao nhat thi in ra
cCandidate cListCandidate::maxTotalScore() {
	cCandidate maxCandidate = list[0];
	for (int i = 1; i < n; i++) {
		if (list[i].getTotalScore() > maxCandidate.getTotalScore()) {
			maxCandidate = list[i];
		}
	}
	return maxCandidate;
}

//Sap xep danh sach thi sinh theo diem giam dan
//Input: Khong co; Output: Danh sach thi sinh sau khi sap xep
//Thuat toan: Duyet danh sach thi sinh, neu thi sinh co diem cao hon thi doi cho
void cListCandidate::sortDescending() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (list[i].getTotalScore() < list[j].getTotalScore()) {
				cCandidate temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}
	cout << "Danh sach thi sinh sau khi sap xep: " << endl;
	output();
}