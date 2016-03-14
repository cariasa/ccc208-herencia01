#include "person.h"
#pragma once
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Person::Person(string name, string id, int age):name(name), age(age), id(id){
}
Person::Person(const Person& p):name(p.name), age(p.age), id(p.id){
}
Person::~Person(){
}
string Person::toString()const{
	stringstream ss;
	ss << "Person: " << name << ", " << age << ", " << id;
	return ss.str();
}
bool Person::operator==(const Person& person)const{
	return id == person.id;
}
bool Person::operator!=(const Person& person)const{
	return id != person.id;
}
void Person::birthday(){
	age++;
}

