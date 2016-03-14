#include "person.h"
#include "student.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Student::Student(string name, string id, int age, string sid, string major, double gpa, int uv):Person(name, id, age),
	major(major), id(sid), gpa(gpa), uv(uv){
}
Student::Student(const Student& s):Person(s), major(s.major), id(s.id), gpa(s.gpa), uv(s.uv){
}
Student::~Student(){
}
string Student::toString()const{
	stringstream ss;
	ss << Person::toString() << " Student: " << id << ", " << major << ", " << gpa << ", " << uv;
	return ss.str();
}
void Student::addGrade(double grade, int guv){
	gpa = (grade * guv + gpa * uv) / (guv + uv);
	uv += guv;
}
double Student::getGpa()const{
	return gpa;
}
void Student::setMajor(string major){
	this->major = major;
}
