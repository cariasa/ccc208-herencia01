#pragma once
#include "person.h"
#include <string>
using std::string;

class Student : public Person{
	string id;
	string major;
	double gpa;
	int uv;
  public:
	Student(string, string, int, string, string="None", double=0.0, int=0);
	Student(const Student&);
	virtual ~Student();
	string toString()const;
	void addGrade(double, int);
	double getGpa()const;
	void setMajor(string);
};
