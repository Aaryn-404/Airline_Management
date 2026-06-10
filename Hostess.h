#pragma once
#include "Aircrew.h"
class Hostess : public Aircrew
{
private:
	string title;
	string phone;
	int grade;
public:
	Hostess();
	Hostess(string i, string n, int a, string t, string p, int g);
	virtual ~Hostess();
	void setTitle(string t);
	void setPhone(string p);
	void setGrade(int g);

	string toString() override;
};

