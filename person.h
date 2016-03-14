#pragma once
#include <string>
using std::string

class Person{
	string name;
	int age;
	string id;
  public:
	Person(string, string, int=0);
	Person(const Person&);
	~Person();
	string toString()const;
	bool operator==(const Person&)const;
	bool operator!=(const Person&)const;
	void birthday();
};

