#pragma once
#include "cCandidate.h"
class cListCandidate : public cCandidate
{
private:
	cCandidate* list;
	int n;
public:
	cListCandidate() {
		list = nullptr;
		n = 0;
	}
	cListCandidate(int size) {
		n = size;
		list = new cCandidate[n];
	}
	void input();
	void output();
	void printTotalScoreLonHon15();
	cCandidate maxTotalScore();
	void sortDescending();
	~cListCandidate() {
		delete[] list;
	}
};

