#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Person
{
protected:
	string id;
	string name;
	int age;
public:
	Person();
	Person(string i, string n, int a);
	virtual ~Person();
	string getId();
	string getName();
	int getAge();
	void setName(string n);
	void setAge(int a);
	virtual string toString();
};


