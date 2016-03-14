#include "person.h"
#include "student.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Student::Student(string name, string id, int age, string sid, string major, double avg, int uv):Person(name, id, age),
	major(major), id(sid), avg(avg), uv(uv){
}
Student::Student(const Student& s):Person(s), major(s.major), id(s.sid), avg(s.avg), uv(s.uv){
}
Student::~Student(){
}
string Student::toString()const{
	stringstream ss;
	ss << "Student: " << id << ", " << major << ", " << avg << ", " << uv;
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
