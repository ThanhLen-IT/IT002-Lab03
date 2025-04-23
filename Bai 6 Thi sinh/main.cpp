#include "cListCandidate.h"
#include <iostream>
#include <string>
using namespace std;

void menu() {
    cListCandidate list;
    int choice;
    do {
        cout << "\n========== MENU ==========\n";
        cout << "1. Nhap danh sach thi sinh\n";
        cout << "2. Xuat danh sach thi sinh\n";
        cout << "3. In thi sinh co tong diem > 15\n";
        cout << "4. In thi sinh co tong diem cao nhat\n";
        cout << "5. Sap xep danh sach theo tong diem giam dan\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice) {
        case 1:
            list.input();
            break;
        case 2:
            cout << "Danh sach thi sinh:\n";
            list.output();
            break;
        case 3:
            list.printTotalScoreLonHon15();
            break;
        case 4:
            cout << "Thi sinh co tong diem cao nhat:\n";
            list.maxTotalScore().output();
            break;
        case 5:
            list.sortDeascending();
            break;
        case 0:
            cout << "Thoat chuong trinh.\n";
            break;
        default:
            cout << "Lua chon khong hop le. Vui long thu lai.\n";
        }

    } while (choice != 0);
}
int main() {
    menu();
	return 0;
}