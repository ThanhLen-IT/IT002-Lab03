#pragma once
#include <string>
#include <iostream>
using namespace std;
class cCandidate
{
private:
	string ID, name, birthDay;
	double dMath, dLiterature, dEnglish;
public:
	cCandidate() {
		ID = "";
		name = "";
		birthDay = "";
		dMath = 0;
		dLiterature = 0;
		dEnglish = 0;
	}
	cCandidate(string id, string n, string bd, double m, double l, double e) {
		ID = id;
		name = n;
		birthDay = bd;
		dMath = m;
		dLiterature = l;
		dEnglish = e;
	}
	void input();
	void output();
	double getTotalScore();
	cCandidate& operator=(const cCandidate& other);
	void swap(cCandidate& other);
};

