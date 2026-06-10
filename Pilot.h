#pragma once
#include "Aircrew.h"
class Pilot : public Aircrew
{
private:
	string mailEi;
	char gender;
public:
	Pilot();
	Pilot(string i, string n, int a, string mail, char g);
	virtual ~Pilot();
	void setMail(string mail);
	void setGender(char g);

	string toString() override;
};

